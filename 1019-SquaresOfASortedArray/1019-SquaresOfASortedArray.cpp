// Last updated: 2/11/2026, 10:01:11 AM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        
    vector<int> a; vector<int> b;
    int i = 0;
    int n = arr.size();
    while(i < n) {
      if(arr[i] >= 0) 
         b.push_back(arr[i]);
      else 
         a.push_back(arr[i]);
      i++;
}

int a_size = a.size();
int b_size = b.size();


//handle base base : a.size = 0, b.size = 0, a and b have size

vector<int> newArr(a_size + b_size);

if(a_size == 0) 
{
    int  i = 0;
    while(i < b_size) {
     b[i] = b[i] * b[i];
     i++;
   } 
   return b;
}

if(b_size == 0) {
   int i = 0;
   while(i < a_size) {
     a[i] = a[i] * a[i];
     i++;
   }  

   reverse(a.begin(), a.end());
   return a;
}
else{

//  i               j 
// -6, -4, -3       0, 1, 4, 5

//  9, 16, 36       0, 1, 16, 25

for(int i = 0;i < a_size; i++) {
   a[i] = a[i] * a[i];
}
for(int i = 0;i < b_size; i++) {
   b[i] = b[i] * b[i];
}
reverse(a.begin(), a.end());

int fix = 0;
int i = 0, j = 0;

// i             j
// 1, 16         0, 3, 10          

while(i < a_size and j < b_size) {
   if(a[i] < b[j]) 
     { newArr[fix] = a[i]; i++;  } 

   else 
     { newArr[fix] = b[j]; j++;  } 
     
     fix++;
    }

    while(i < a_size ) {
        newArr[fix] = a[i];
        fix++;
        i++;
    }
        while(j < b_size ) {
        newArr[fix] = b[j];
        fix++;
        j++;
    }

  }
    return newArr;
 }
};



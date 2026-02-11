// Last updated: 2/11/2026, 10:01:35 AM
class Solution {
public:

int firstocc(vector<int>&arr,int n,int k){   

   int START=0;

    int END=n-1;

    int mid=START+(END-START)/2;

    int ans=-1;

    while(START<=END){

        if (arr[mid]==k){

            ans=mid;

            END=mid-1;

        }

        else if(k>arr[mid]){

            START=mid+1;

        }

        else {

            END=mid-1;

        }

        mid=START+(END-START)/2;

    }

    return ans;

}

 

int lastocc(vector<int>&arr,int n,int k){   

   int START=0;

    int END=n-1;

    int mid=START+(END-START)/2;

    int ans=-1;

    while(START<=END){

        if (arr[mid]==k){

            ans=mid;

            START=mid+1;

        }

        else if(k>arr[mid]){

            START=mid+1;

        }

        else {

            END=mid-1;

        }

        mid=START+(END-START)/2;

    }

    return ans;

}
    vector<int> searchRange(vector<int>& arr, int k) {
        int n = arr.size();
        int firstO = firstocc(arr, n , k );
       if(firstO == -1) return {-1, -1}; 
       int lastO = lastocc(arr, n , k);
        return {firstO, lastO};
    }
};
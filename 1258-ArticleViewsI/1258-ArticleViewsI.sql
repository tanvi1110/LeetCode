-- Last updated: 2/11/2026, 10:01:10 AM
# Write your MySQL query statement below
select distinct author_id as id from Views where author_id = viewer_id order by author_id asc;
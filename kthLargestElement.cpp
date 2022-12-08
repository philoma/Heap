#include <bits/stdc++.h> 
 int findKthLargest(vector<int>& v, int k) {

  // Write your code here
     priority_queue<int, vector<int>, greater<int>>pq;
     for(int i=0;i<v.size();i++){
         pq.push(v[i]);
         if(pq.size()>k) pq.pop();
     }
     return pq.top();

}

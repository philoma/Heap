#include <bits/stdc++.h> 
int kthSmallest(vector<int> v, int k)
{
    // Write your code here.
    priority_queue<int>pq;//max heap
    
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
        if(pq.size()>k) pq.pop();
    }
    return pq.top();
}

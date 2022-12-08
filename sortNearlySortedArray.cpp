vector < int > nearlySorted(vector < int > nums, int n, int k) {
    // Write your code here.
   vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}

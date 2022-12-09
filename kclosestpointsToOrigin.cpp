class Solution {
public:
   
vector<vector<int>> KClosest(vector<vector<int>> &v, int k)
{
	// Write your code here.
    vector<vector<int>>ans;
    if(v.size()==0) return ans;

    priority_queue<pair<int,pair<int, int>>>pq;
    for(int i=0;i<v.size();i++){
        int x=v[i][0];
        int y=v[i][1];
        int s=(x*x+y*y);
        pq.push({s,{v[i][0], v[i][1]}});
        if(pq.size()>k) pq.pop();
    }
    int i=0;
    while(!pq.empty()){
        ans.push_back({pq.top().second.first,pq.top().second.second});
       
        pq.pop();
    }
    return ans;
}
};

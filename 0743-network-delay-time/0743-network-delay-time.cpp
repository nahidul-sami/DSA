class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> result(1+n,1000000);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k});
        result[k]=0;
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto it:times){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({wt,v});
            // adj[v].push_back({wt,u});
        }
        while(!pq.empty()){
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            for(auto v:adj[u]){
                if(d+v.first < result[v.second]){
                    result[v.second] = d+v.first;
                    pq.push({d+v.first,v.second});
                }
            }
        }
        int ans = INT_MIN;
        for(int i = 1; i<=n; i++){
            if(result[i]==1000000) return -1;
            ans = max(ans,result[i]);
        }
        return ans;
    }
};
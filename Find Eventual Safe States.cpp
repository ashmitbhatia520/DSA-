class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);
        vector<int> s;
        queue<int> q;
        for(int i=0;i<n;i++){
            for(int it:graph[i]){
                adj[it].push_back(i);
                indegree[i]++;
            }
        }
        for(int i=0;i<n;i++){
            if(indegree[i] == 0) q.push(i);
        }
        while(!q.empty()){
            int front = q.front();
            q.pop();
            s.push_back(front);
            for(int it:adj[front]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        sort(s.begin(),s.end());
        return s;
    }
};

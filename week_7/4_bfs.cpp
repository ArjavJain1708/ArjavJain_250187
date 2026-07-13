class Solution {
public:
    vector<int> bfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> bfs_res;
        vector<int> visited(V, 0);
        queue<int> q;

       
        visited[0] = 1;
        q.push(0);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs_res.push_back(node);

           
            for (auto it : adj[node]) {
                if (!visited[it]) {
                    visited[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs_res;
    }
};
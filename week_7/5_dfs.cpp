class Solution {
private:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited, vector<int>& res) {
       
        visited[node] = 1;
        res.push_back(node);
        
        
        for (auto it : adj[node]) {
            if (!visited[it]) {
                dfs(it, adj, visited, res);
            }
        }
    }

public:
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> res;
        vector<int> visited(V, 0);
        
        // Start DFS from vertex 0
        dfs(0, adj, visited, res);
        
        return res;
    }
};
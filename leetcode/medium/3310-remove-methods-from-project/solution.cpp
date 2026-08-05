class Solution {
public:

    void dfs(int node, vector<vector<int>> &graph, vector<bool> &suspicious) {
        suspicious[node] = true;

        for (int next : graph[node]) {
            if (!suspicious[next]) {
                dfs(next, graph, suspicious);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        // Build Graph
        vector<vector<int>> graph(n);

        for (auto &edge : invocations) {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
        }

        // now, Mark suspicious methods
        vector<bool> suspicious(n, false);
        dfs(k, graph, suspicious);

        // now, Check if any outside method calls a suspicious method
        for (auto &edge : invocations) {
            int u = edge[0];
            int v = edge[1];

            if (!suspicious[u] && suspicious[v]) {
                vector<int> ans;
                for (int i = 0; i < n; i++)
                    ans.push_back(i);
                return ans;
            }
        }

        // now, Return remaining methods
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (!suspicious[i])
                ans.push_back(i);
        }

        return ans;
    }
};
/*
 * Contest 204
 * C - Tour
 * Rakesh Kumar --> 15/06/2021
 */

#include <bits/stdc++.h>

using Graph = std::vector<std::vector<int>>;

inline void print(const Graph& graph) {
    printf("-----------------------------------------\n");
    for (const auto& r : graph) {
        for (int v : r)
            std::cout << v << " ";
        std::cout << std::endl;
    }
    printf("-----------------------------------------\n");
}

int dfs(int node, const Graph& graph, std::vector<bool>& visit) {
    visit[node] = true;
    int res = 1;
    for (std::size_t i = 0; i < graph[node].size(); ++i) {
        if (visit[graph[node][i]]) continue;
        res += dfs(graph[node][i], graph, visit);
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;
    Graph graph(n);
    std::vector<bool> visit(n, false);
    while (m--) {
        int s = 0, d = 0;
        std::cin >> s >> d;
        graph[s-1].emplace_back(d-1);
    }
    //print(graph); // for testing purpose
    int res = 0;
    for (std::size_t i = 0; i < graph.size(); ++i) {
        if (visit[i]) continue;
        res += dfs(i, graph, visit);
        visit.clear(); visit = std::vector<bool>(n, false);
    }
    std::cout << res << std::endl;

    return 0;
}

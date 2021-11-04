/*
  Contest 225
  B - Star or Not
  Rakesh Kumar --> 04/11/2021
*/

#include <bits/stdc++.h>

void print_graph(const std::unordered_map<int, std::vector<int>>& graph) {
    std::cout << "--------------------------------------------------" << std::endl;
    for (const auto& it : graph) {
        std::cout << it.first << " --> ";
        for (int n : it.second)
            std::cout << n << " ";
        std::cout << std::endl;
    }
    std::cout << "--------------------------------------------------" << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::unordered_map<int, std::vector<int>> graph;
    int n = 0;
    std::cin >> n;
    for (int i = 1; i < n; ++i) {
        int a = 0, b = 0;
        std::cin >> a >> b;
        graph[a].emplace_back(b);
        graph[b].emplace_back(a);
    }

    //print_graph(graph);

    std::string result = "Yes";
    for (const auto& it : graph) {
        std::size_t sz = it.second.size();
        if (sz && (sz == 1 || sz == n - 1))
            continue;
        else {
            result = "No";
            break;
        }
    }
    std::cout << result << std::endl;

    return 0;
}
#include <iostream>
#include <vector>

/*
    Depth First Search (DFS) - explore as FAR as possible down one path before
                                backtracking. Uses a stack (or recursion, which
                                uses the call stack) to remember where to go back to.
                                Good for: exploring all paths, detecting cycles, mazes.
                                Time complexity: O(V + E)
*/
void dfs(const std::vector<std::vector<int>>& adjList, int current, std::vector<bool>& visited) {
    visited[current] = true;
    std::cout << current << " ";

    // dive into each unvisited neighbor before backtracking
    for (int neighbor : adjList[current]) {
        if (!visited[neighbor]) {
            dfs(adjList, neighbor, visited);
        }
    }
}

int main(){

    // 0 - 1 - 2
    // |
    // 3 - 4
    std::vector<std::vector<int>> adjList(5);
    adjList[0] = {1, 3};
    adjList[1] = {0, 2};
    adjList[2] = {1};
    adjList[3] = {0, 4};
    adjList[4] = {3};

    std::vector<bool> visited(adjList.size(), false);

    std::cout << "DFS order: ";
    dfs(adjList, 0, visited); // 0 1 2 3 4
    std::cout << "\n";

    return 0;
}

#include <iostream>
#include <vector>
#include <queue>

/*
    Breadth First Search (BFS) - explore all NEIGHBORS at the current depth
                                  before moving deeper. Uses a queue (FIFO) so
                                  vertices are visited in the order they're discovered.
                                  Good for: shortest path in an unweighted graph.
                                  Time complexity: O(V + E)
*/
void bfs(const std::vector<std::vector<int>>& adjList, int start) {
    std::vector<bool> visited(adjList.size(), false);
    std::queue<int> toVisit;

    toVisit.push(start);
    visited[start] = true;

    while (!toVisit.empty()) {
        int current = toVisit.front();
        toVisit.pop();
        std::cout << current << " ";

        // queue up every unvisited neighbor before diving deeper
        for (int neighbor : adjList[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                toVisit.push(neighbor);
            }
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

    std::cout << "BFS order: ";
    bfs(adjList, 0); // 0 1 3 2 4
    std::cout << "\n";

    return 0;
}

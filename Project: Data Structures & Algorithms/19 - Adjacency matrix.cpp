#include <iostream>
#include <vector>

int main(){

    /*
        Adjacency Matrix - represent a graph as an NxN grid, where
                            matrix[i][j] = 1 means there's an edge between i and j
                            (or a weight/cost instead of just 1, for weighted graphs).
                                + checking "is there an edge between A and B?" is O(1)
                                - uses O(n^2) memory even if the graph has few edges
                                good for DENSE graphs (lots of connections)
    */

    const int NUM_CITIES = 4; // 0=Denver 1=Austin 2=Miami 3=Boston
    std::vector<std::vector<int>> matrix(NUM_CITIES, std::vector<int>(NUM_CITIES, 0));

    // undirected graph, so set both directions
    auto addRoad = [&](int a, int b) {
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    };

    addRoad(0, 1); // Denver - Austin
    addRoad(1, 2); // Austin - Miami
    addRoad(0, 3); // Denver - Boston

    // O(1) lookup: is there a direct road between Denver(0) and Austin(1)?
    std::cout << matrix[0][1] << " <- Denver/Austin connected?\n"; // 1
    std::cout << matrix[2][3] << " <- Miami/Boston connected?\n";  // 0

    // printing the full matrix
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}

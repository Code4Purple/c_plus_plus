#include <iostream>
#include <vector>

int main(){

    /*
        Graph - a set of "vertices" (nodes) connected by "edges" (links).
                more general than a tree, cycles and multiple paths are allowed.

            vertex / node   - a single point in the graph (e.g. a city)
            edge            - a connection between two vertices (e.g. a road)
            directed graph  - edges only go one way (A -> B doesn't imply B -> A)
            undirected graph- edges go both ways (A - B means A -> B and B -> A)
            weighted graph  - edges have a "cost" (e.g. distance, time)
            adjacency       - two vertices are adjacent if an edge connects them

        Common ways to represent a graph in code: adjacency matrix (19) and
        adjacency list (20), each has different memory/speed tradeoffs.
    */

    // vertices, just labeling cities 0-3 for now
    std::vector<std::string> cities = {"Denver", "Austin", "Miami", "Boston"};

    // edges as simple pairs: {from, to}, this graph is undirected
    std::vector<std::pair<int, int>> roads = {
        {0, 1}, // Denver - Austin
        {1, 2}, // Austin - Miami
        {0, 3}  // Denver - Boston
    };

    for (const auto& road : roads) {
        std::cout << cities[road.first] << " <-> " << cities[road.second] << "\n";
    }

    return 0;
}

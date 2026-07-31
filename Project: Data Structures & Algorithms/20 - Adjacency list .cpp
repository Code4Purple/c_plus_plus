#include <iostream>
#include <vector>

int main(){

    /*
        Adjacency List - represent a graph as an array of lists, where
                          list[i] contains all the vertices directly connected to i.
                              + only stores edges that actually exist, O(V + E) memory
                              - checking "is there an edge between A and B?" is O(degree)
                                (have to scan that vertex's list)
                          good for SPARSE graphs (few connections relative to vertices)
                          this is the more commonly used representation in practice
    */

    const int NUM_CITIES = 4; // 0=Denver 1=Austin 2=Miami 3=Boston
    std::vector<std::vector<int>> adjList(NUM_CITIES);

    auto addRoad = [&](int a, int b) {
        adjList[a].push_back(b);
        adjList[b].push_back(a); // undirected, so both directions
    };

    addRoad(0, 1); // Denver - Austin
    addRoad(1, 2); // Austin - Miami
    addRoad(0, 3); // Denver - Boston

    // printing each vertex's neighbors, only real connections are stored
    std::vector<std::string> cities = {"Denver", "Austin", "Miami", "Boston"};
    for (int i = 0; i < NUM_CITIES; i++) {
        std::cout << cities[i] << " -> ";
        for (int neighbor : adjList[i]) {
            std::cout << cities[neighbor] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}

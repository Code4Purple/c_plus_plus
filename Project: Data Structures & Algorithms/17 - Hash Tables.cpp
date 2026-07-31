#include <iostream>
#include <unordered_map>

int main(){

    /*
        Hash Table - stores key -> value pairs. A "hash function" converts the key
                     into an index into an internal array, so lookups don't require
                     searching through every element.
                     std::unordered_map is C++'s built-in hash table.
                        insert/lookup/erase: average O(1), worst case O(n) (hash collisions)
                        no guaranteed ordering of elements
    */

    std::unordered_map<std::string, int> carYears;

    // key = car model, value = model year
    carYears["Mustang"] = 2023;
    carYears["Civic"]   = 2021;
    carYears["Model 3"] = 2024;

    // O(1) average lookup by key, no scanning required
    std::cout << carYears["Civic"] << " <- Civic's year\n"; // 2021

    // checking if a key exists before touching it
    if (carYears.find("Tesla Roadster") == carYears.end()) {
        std::cout << "Tesla Roadster isn't in the map\n";
    }

    // looping over all key/value pairs
    for (const auto& pair : carYears) {
        std::cout << pair.first << " -> " << pair.second << "\n";
    }

    carYears.erase("Mustang");
    std::cout << carYears.size() << " <- entries left after erase\n"; // 2

    return 0;
}

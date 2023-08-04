#include <iostream>
#include <vector>
#include <string>


int main(){

    printf("\n          Project - Parallel Data Sets\n");
    std::cout << std::endl;

    std::vector<std::string> names;
    std::vector<int> weights{};

    std::string getNames;
    int getWeights;
    int max_people = 5;

    for (int i = 0; i < max_people; i++){
        std::cout << "Please Enter a person's full name: " << std::endl;
        getline(std::cin, getNames);
        std::cout << "Please enter " << getNames << "'s weight." << std::endl;
        std::cin >> getWeights;
        std::cin.get();

        names.push_back(getNames);
        weights.push_back(getWeights);
    }

    std::cout << std::endl;
    for (int j = 0; j < max_people; j++){
        std::cout << names[j] << " weighs " << weights[j] << " lbs" << std::endl;
    }
    return 0;
}
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void CreateData() {

    ifstream file("Bills-Doc-Orginal.txt");
    if (!file) {
        cerr << "Unable to open file";
        return 1;
    }

    string line;
    vector<string> stringDataFromFile;
    while (getline(file, line)) {
        //cout << line << endl;
        stringDataFromFile.push_back(line);
    }
    
    file.close();

    // Write to new file
    ofstream newFile("rawData.data", ios::out | ios::trunc);
    if (!newFile) {
        cerr << "Unable to open file";
        return 1;
    }

    for (int i = 0; i < stringDataFromFile.size(); i++) {
        int spaceIndex = stringDataFromFile[i].find(" ");
        string part1 = stringDataFromFile[i].substr(0, spaceIndex);
        string part2 = stringDataFromFile[i].substr(spaceIndex + 1);

        newFile << part1 + ":" + part2 << endl;
    }

    newFile.close();

    
}
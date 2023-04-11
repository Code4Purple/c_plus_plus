#include <iostream>
#include <fstream>

using namespace std;

/**
 *
 *  Class 	    Description
    ofstream 	Creates and writes to files
    ifstream 	Reads from files
    fstream 	A combination of ofstream and ifstream: creates, reads, and writes to files
 *
 */
int main()
{
    // Create and open text file
    ofstream MyFile("filename.txt");
    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";
    // Close the File
    MyFile.close();

    // Read The Text File
    string myText; // cout string for the terminal
    // Read from The Text File
    ifstream MyReadFile("filename.txt");
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText;
    }
    // Close the file
    MyReadFile.close();
}

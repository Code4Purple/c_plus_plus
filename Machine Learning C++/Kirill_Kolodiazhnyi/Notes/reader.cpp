#include <iostream>
#include <vector>
#include <string>
#include <fstream>
//std::getline (std::cin,name);

// Global Vectors
std::vector <std::string> read_vector;
std::vector <std::string> write_vector;
std::vector <std::string> ram_vector;

// Global Streams
std::ifstream read_stream;
std::ofstream write_stream;
std::ofstream ram_stream;

// Global Variables
std::string output_text;
std::string userInput;
bool appState = true;

// Global Functions
std::string read(std::string read_file);
std::string edit();
std::string reset();
std::string list_files();


// Main Code
std::string read(std::string read_file){
    read_stream.open(read_file);
    if(read_stream.is_open()){
        std::cout << "Open " << read_file << " -- PASSED" << std::endl;
        while(getline(read_stream, output_text)){
            read_vector.push_back(output_text);
        }
        for (int i = 0; i < read_vector.size(); i++){
            std::cout << read_vector[i] << std::endl;
        }
        read_stream.close();
        
        
    }else{
        std::cout << "Open " << read_file << " -- FAILED" << std::endl;
    }
}



std::string reset(){
    // Close Streams
    if(read_stream.is_open() || ram_stream.is_open() || write_stream.is_open()){
        std::cout << "Are Streams Closed? -- FAILED" << std::endl;
        read_stream.close();
        write_stream.close();
        ram_stream.close();
    } else{
        // close
        std::cout << "Are Streams Closed? -- Passed" << std::endl;
    }

    // clear Vectors
    std::cout << "Vectors Cleared" << std::endl;
    ram_vector.clear();
    read_vector.clear();
    write_vector.clear();
}

int main(){
    std::cout << "Welcome to the Read Notes App" << std::endl;
    
    while(appState = true){
        std::cout << "Enter a Command : ";
        std::getline(std::cin,userInput);

        if(userInput == "exit"){
            reset();
            exit(1);
        }
        
        if (userInput == "read"){
            std::cout << "Enter file name : ";
            std::getline(std::cin, userInput);
            read(userInput);
        }
    }
}
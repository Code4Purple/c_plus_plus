#include <iostream>
#include <vector>

// basic example of a vector and what typedef is used for 
//typedef std::vector<std::pair<std::string, int>> pairlist_t; 
// the name_t to show the nickname and shows the coder that it is a typedef

//typedef std::string text_t;
//typedef int number_t;

// might also see the following
using text_t = std::string;
using number_t = int;

int main(){

    /*
        typedef = reserved keyword used to create an additional name (alias)
        for another data type. New identifier for an existing type,
        helps with readability and reduces typos.

        Use when there is a clear benefit
        Replaced with 'using' (work better w/ templates)
    */

    text_t firstName = "Bro";
    std::cout << firstName << std::endl;
    

    return 0;
}
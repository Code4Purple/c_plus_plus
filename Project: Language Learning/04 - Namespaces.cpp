#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    /*

        Namespace = provides a solution for preventing name confilcts in large projects.
                    Each entity needs a unique name. A namespace allow for identically 
                    named entities as long the namespaces are different.

        you can also you the using namespace <name> to use the variables within the group 
        that will apply to the int main() as the defualt group
                       
    */

    // this will print x within the int main() local area
    int x = 0;
    std:: cout << x << std::endl; 

    //this will print out x within the first namespace
    std:: cout << first::x << std::endl;

    // this will do the next one within second namespace
    std:: cout << second::x << std::endl;
    
    return 0;
}
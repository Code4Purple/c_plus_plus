#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]){
    cout << "The number of command line parameters is: " << argc << endl;
    for(int i = 0; i < argc; i++){
        cout << "Parameter " << i << " is: " << argv[i] << endl;
    }
    return 0;


}
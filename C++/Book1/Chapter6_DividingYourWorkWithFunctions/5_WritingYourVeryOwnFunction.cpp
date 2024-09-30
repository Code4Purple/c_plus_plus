#include <iostream>

using namespace std;

int AddOne(int start){
    int newnumber = start + 1;
    return newnumber;
}

int main(){
    int testNumber = 5;
    int result = AddOne(testNumber);
    cout << "The result is: " << result << endl;
    return 0;
    
}

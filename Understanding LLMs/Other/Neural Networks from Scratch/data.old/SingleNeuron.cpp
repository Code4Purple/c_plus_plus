#include <iostream>

using namespace std;

int main(){
    
    // Define the input and weights for the neuron
    int inputs[] = {1, 2, 3};
    double weights[] = {0.2, 0.8, -0.5};
    int bais = 2;

    // Calculate the output of the neuron
    double output = 0;
    for(int i = 0; i < 3; i++){
        output += inputs[i] * weights[i];
    }
    output += bais;

    // Print the output
    cout << output << endl;
    
    return 0;
}
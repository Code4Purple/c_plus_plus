#include <iostream>

using namespace std;

int main(){

    double inputs[] = {1.0, 2.0, 3.0, 2.5};
    
    double weights[] = {0.2, 0.8, -0.5, 1};
    double weights2[] = {0.5, -0.91, 0.26, -0.5};
    double weights3[] = {-0.26, -0.27, 0.17, 0.87};
    
    int bias1 = 2;
    int bias2 = 3;
    int bias3 = 0.5;

    double outputs[3]; // Array to store the output of each neuron
    
    // Neuron 1:
    for (int i = 0; i < 4; i++){
        outputs[0] += inputs[i] * weights[i];
    }
    outputs[0] += bias1;

    // Neuron 2:
    for (int i = 0; i < 4; i++){
        outputs[1] += inputs[i] * weights2[i];
    }
    outputs[1] += bias2;

    // Neuron 3:
    for (int i = 0; i < 4; i++){
        outputs[2] += inputs[i] * weights3[i];

    }
    outputs[2] += bias3;

    cout << "Output of Neuron 1: " << outputs[0] << endl;
    cout << "Output of Neuron 2: " << outputs[1] << endl;
    cout << "Output of Neuron 3: " << outputs[2] << endl; 


    return 0;
}
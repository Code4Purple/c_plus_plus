#include <iostream>

using namespace std;

void ChangesAreGood( int *myparam ){
	*myparam += 10;
	cout << "Inside the Function: ";
	cout << *myparam << endl;
}

int main(){

	int myNumber = 30;
	cout << "Before the Function: " << myNumber << endl;
	
	ChangesAreGood(&myNumber);
	cout << "After the Function : " << myNumber << endl;

	return 0;
}

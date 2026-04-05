#include <iostream>

using namespace std;

void ChangesAreGood( int myparam ) {
	myparam += 10;
	cout << "Inside the Function: " ;
	cout << myparam << endl;
}

int main(){
	
	int myNumber = 30;
	cout << "Before the function: " << myNumber << endl;
	
	ChangesAreGood(myNumber);
	cout << "After the function : " << myNumber << endl;
	
	return 0;
}

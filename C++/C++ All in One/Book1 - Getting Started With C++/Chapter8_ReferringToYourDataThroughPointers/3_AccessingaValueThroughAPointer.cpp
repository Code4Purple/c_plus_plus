#include <iostream>

using namespace std;

int main(){
	int NumberOfPotholes;
	int *ptr = &NumberOfPotholes;
	int SaveForLater;

	*ptr = 6087;
	SaveForLater = *ptr;
	cout << "Save-State 1 : "  << SaveForLater << endl;

	*ptr = 7000;
	SaveForLater = *ptr;
	cout << "Save-State 2 : " <<  SaveForLater << endl;
	
	return 0; 	
 }

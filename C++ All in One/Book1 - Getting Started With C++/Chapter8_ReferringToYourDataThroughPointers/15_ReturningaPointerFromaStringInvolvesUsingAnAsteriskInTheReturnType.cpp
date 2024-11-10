#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

string *GetSecretCode(){
	string *code = new string;
	code->append("CR");

	int randomNumber = rand();
	ostringstream converter;
	converter << randomNumber;
	code->append(converter.str());

	code->append("NQ");
	return code;
}

int main(){
	
	string *newCode;
	int howManyCodesToGenerate = 10s;
	
	for(int index = 0; index < howManyCodesToGenerate; index++){
		newCode = GetSecretCode();
		cout << *newCode << endl;
	}

	return 0;
}

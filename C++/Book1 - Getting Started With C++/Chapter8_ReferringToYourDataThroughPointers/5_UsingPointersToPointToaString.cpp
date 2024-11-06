#include <iostream>

using namespace std;

int main(){
	
	string APodcast;
	string *ptrToString;

	APodcast = "PBD Podcast";
	ptrToString = &APodcast;

	for(int i = 0; i < APodcast.length(); i++){
		cout << (*ptrToString)[i] << " ";
	}
	
	cout << endl;	

	return 0;
}

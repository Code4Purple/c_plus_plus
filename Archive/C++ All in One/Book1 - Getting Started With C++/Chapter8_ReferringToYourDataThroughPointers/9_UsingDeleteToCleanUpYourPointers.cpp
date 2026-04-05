#include <iostream>

using namespace std;

int main(){

    string *phrase = new string("PBD Podcast is Lit!");
    cout << *phrase << endl;

    (*phrase)[15] = 'T';
    phrase->replace(16, 3, "he Best!");
    cout << *phrase << endl;

    delete phrase;
    return 0;

}
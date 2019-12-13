#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;
char genRandom(){
	static const char alphanum[] =
"0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int stringLength = sizeof(alphanum) - 1;
    return alphanum[rand() % stringLength];
}

int main(){

    SetConsoleTitle("Random text string Generator. ©mausy131 2013");

    srand(time(0));
    std::string Str;

    int length = 0;

    cout << "Enter the length of the string:" << endl;
    cin >> length;

    for(int i = 0; i < length; ++i){
    //cout << genRandom << endl;          // You can delete the // and put // for Str += genRandom
    Str =Str + genRandom();     // All characters in genRandom will be copied to Str.
                            // I did this because I needed it for a project.

    }
    cout << "This is your random serial:" << endl;
    cout << Str << endl;   // Str holds the same as genRandom since all the characters have been copied. You can comment this out with the // if you use cout << genRandom();



cout << endl;
system("PAUSE");
return 0;
}



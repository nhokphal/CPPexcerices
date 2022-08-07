#include <iostream>
using namespace std;

int main() {
    // int i=10; // init
    string userName = "";
    string pswd = "";

    
    do{

    cout << "Please enter your user name: "; cin >> userName;
    cout << "Pleae enter your password: "; cin >> pswd;

    }
    while (!(userName == "phal" && pswd == "phal"));
    cout << "Welcome: " << userName << endl;
    return 0;
}
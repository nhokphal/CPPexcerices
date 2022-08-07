#include <iostream>
using namespace std;

int main() {
    string pswd = " ";
    string user = " ";
    
   
    while (!(user == "phal" && pswd == "phal")) /// negative, basically, if it negative turns to postive 
    // which will print 
    {
        cout << "Please enter your user name" << endl;
        cin >> user;
        cout << "Enter your password" << endl;
        cin >> pswd;
        
        /*cout << "Please login user" << endl,
        cin >> user;    
        cout << "Enter password" << endl;
        cout << pswd;*/
    }   
    cout << "welcome " << user;
    return 0;


 
}
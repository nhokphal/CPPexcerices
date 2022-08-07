#include <iostream>
using namespace std;

int main () {
    int UserInput = 0;
    //int abstract = 0;
    cout << "Please input any Number "; cin >> UserInput;
    if(UserInput > 0)
    {
        cout << "the absolut value is: " <<  UserInput;
    }else{
        cout << "the absolut value is: " << -(UserInput);
        return 0;
    }

}
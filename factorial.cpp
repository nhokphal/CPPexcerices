#include <iostream>
using namespace std;

int main() {
    int userInput = 0;
    int fractor = 5;
    cout << "Input number"; 
    cin >> userInput;

    while (userInput >= 1)
    {
       fractor*=userInput;
       userInput--;
    }
    cout << "answe is" << userInput;
    
}
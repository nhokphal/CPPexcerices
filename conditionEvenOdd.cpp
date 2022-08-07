#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    cout << "Input your number"; cin >> inputNumber;
    if(inputNumber % 2 == 0){

        cout << "this is Odd number";
    }else{
        cout << "This even number";
    }
    return 0;
}
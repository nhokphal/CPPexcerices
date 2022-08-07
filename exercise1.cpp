#include <iostream>
using namespace std;

int main() {
    int first_num = 0;
    int second_num = 0;
    char op;
    
    cout << "enter your number"; 
    cin >> first_num;
    cout << "enter your number";
    cin >> second_num;
    

    switch (first_num < second_num)
    {
    case 1:
        int res = first_num + second_num;
        cout << res << endl;
        break;
    case 2:
        
    default:
        break;
    }
}
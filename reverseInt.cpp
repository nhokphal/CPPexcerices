#include <iostream>
using namespace std;

int main() {
    
     int num = 0;
     int remaider = 0;
     cout << "enter any num";
     cin >> num;

    while (num != 0)
    {
        int remaider = num % 10;
        int revNum = num * 10 + remaider;
        num = num / 10;
        cout << "num is : " << revNum << endl;        
 
    }
      
     
}
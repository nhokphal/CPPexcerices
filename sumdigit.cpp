#include <iostream>
using namespace std;

int main() {
    int num =0;
    int remainder =0;
    int sum_up = 0;
    cout << "" << endl;
    cin >> num;
    while (num != 0)
    {
        remainder = num % 10;
        sum_up+=remainder;
        num /= 10;
    }
    cout << "num digit" << sum_up;
    return 0;
}
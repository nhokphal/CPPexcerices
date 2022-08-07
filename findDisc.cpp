#include <iostream>
using namespace std;

int main (){
    int userInput = 0;
    int priceQty = 0;
    float rate = 0.01;
    cout << "Please input userInput"; cin >> userInput;
    cout << "Pleaes enter Quantity Purchase"; cin >> priceQty;
    if(userInput > 5000){
        int subTotal = userInput * priceQty;
        cout << subTotal << endl;
        float Total = subTotal * rate;
        cout << "You are discounted" << Total << endl;
        return 0;
    }else{
        cout << "total price: ";
    }
    
}
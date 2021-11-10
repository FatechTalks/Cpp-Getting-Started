#include<iostream>
#include<cmath> 

using namespace std; 

int main(){
    float number1, number2, total; 

    cin >> number1; 
    cin >> number2; 
    float sum = number1 + number2; 
    
    float higher = (number1 > number2) ? number1 : number2; 
    float lower = (number1 > number2) ? number2 : number1; 
    bool equal = number1 == number2; 
    char equalChar = (number1 == number2) ? 'Y' : 'N'; 

    float remainderNum = remainder(number1, number2);

    cout << "Sum: " << sum << endl; 
    cout << "Max: " << higher << endl; 
    cout << "Min: " << lower << endl; 
    cout << "Equal: " << equal << endl; 
    cout << "EqualChar: " << equalChar << endl; 
    cout << "Remainder: " << remainderNum << endl; 
    
    cout << total;

    return 0; 
}
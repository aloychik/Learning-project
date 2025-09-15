#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double  firstNumber, secondNumber;

    cout << "Input the first number: "; 
    cin >> firstNumber;

    cout << "Input the second number: ";
    cin >> secondNumber;

    double  powerResult, maxResult, sqrtFirstNumber, sqrtSecondNumber;

    powerResult = pow(firstNumber, secondNumber);

    maxResult = max(firstNumber, secondNumber);

    sqrtFirstNumber = sqrt(firstNumber);

    sqrtSecondNumber = sqrt(secondNumber);

    cout << "Power calculation result:" << powerResult << endl;
    cout << "Maximum value calculation result:" << maxResult<< endl;
    cout << "Square root calculation result from the first number:" << sqrtFirstNumber << endl;
    cout << "Square root calculation result from the second number:" << sqrtSecondNumber << endl;

    return 0;  
}
/* ct101/s/35312/26
sidivaniah nyakio muriithi*/
#include <iostream>
using namespace std;
int main (){
    //declaring variables
int number1;
int number2;
float result;
char operation;
//enter 2 number and operator
cout<<"enter the first number:"<<endl;
cin>>number1;
cout<<"enter the second number:"<<endl;
cin>>number2;
cout << "Enter an operator: ";
cin >> operation;
// Perform the selected operation
    switch (operation) {
        case '+':
            result = number1 + number2;
            cout << "Result = " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result = " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result = " << result << endl;
            break;

        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                cout << "Result = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;

        default:
            cout << "Invalid operator!" << endl;
    }

}



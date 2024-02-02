//welcome to the simple calculator program,
//This program will take two numbers as operand and a operator from user
// And perform operations(+,-,*,/) on the mentioned operands.
#include <iostream>
using namespace std;
int main() {
    cout<<"welcome to the simple calculator"<<endl;
    int repeat = 1;
    while (repeat) {
        char operation;
        float num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Enter operator: +, -, *, /: ";
        cin >> operation;
        switch (operation) {
            case '+':
            result=num1+num2;
                cout <<"addition of "<<num1<<" and "<<num2<<" is "<<result<< endl; //addition
                break;
            case '-':
                result=num1-num2;
                cout <<"subtraction of "<<num1<<" and "<<num2<<" is "<<result<< endl;//subtraction
                break;
            case '*':
              result=num1*num2;
                cout <<"multiplication of "<<num1<<" and "<<num2<<" is "<<result<< endl; //multiplication
                break;
            case '/':
                if (num2 != 0)
                    {result=num1/num2;
                cout <<"division of "<<num1<<" and "<<num2<<" is "<<result<< endl;} 
                else
                    cout << "Error! Cannot divide by zero." << endl;
                break;
            default:
                cout << "error! Invalid operator entered goodbye" << endl;
                return 0;
        }
        cout << "Do you want to perform any further operations? (1 for yes, 0 for no): ";
        cin >> repeat;
        repeat++;
    }
    return 0;
}

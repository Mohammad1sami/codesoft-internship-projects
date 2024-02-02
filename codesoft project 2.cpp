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
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; //addition
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl; //subtraction
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl; //multiplication
                break;
            case '/':
                if (num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl; //division
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
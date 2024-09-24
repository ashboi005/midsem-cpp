#include<iostream.h>
#include<conio.h>

class Calculator {
public:
    void add(float a, float b) {
        cout << "Result: " << a + b << endl;
    }

    void subtract(float a, float b) {
        cout << "Result: " << a - b << endl;
    }

    void multiply(float a, float b) {
        cout << "Result: " << a * b << endl;
    }

    void divide(float a, float b) {
        if(b == 0) {
            cout << "Error: Division by zero!" << endl;
        } else {
            cout << "Result: " << a / b << endl;
        }
    }
};

int main() {
    clrscr();
    Calculator calc;
    float num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nSelect operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            calc.add(num1, num2);
        break;
        case 2:
            calc.subtract(num1, num2);
        break;
        case 3:
            calc.multiply(num1, num2);
        break;
        case 4:
            calc.divide(num1, num2);
        break;
        default:
            cout << "Invalid choice!" << endl;
        break;
    }

    getch();
    return 0;
}

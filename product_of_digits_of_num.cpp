#include<iostream.h>
#include<conio.h>

class DigitProduct {
public:
    int productOfDigits(int num) {
        int product = 1;  // Start with 1 because multiplying by 0 will always result in 0
        int digit;

        while(num > 0) {
            digit = num % 10;  // Extract the last digit
            product *= digit;  // Multiply the current digit to the product
            num = num / 10;    // Remove the last digit from the number
        }

        return product;
    }
};

int main() {
    clrscr();

    DigitProduct dp;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Calculate the product of digits
    int result = dp.productOfDigits(num);

    // Display the result
    cout << "Product of the digits: " << result << endl;

    getch();
    return 0;
}

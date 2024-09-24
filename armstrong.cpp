#include<iostream.h>
#include<conio.h>
#include<math.h>  // For the pow() function to raise digits to a power

class Armstrong {
public:
    bool isArmstrong(int num) {
        int originalNum = num, sum = 0, digitCount = 0, digit;

        // Count the number of digits in the number
        while (num > 0) {
            digitCount++;
            num = num / 10;
        }

        // Reset the number
        num = originalNum;

        // Calculate the sum of the digits raised to the power of digitCount
        while (num > 0) {
            digit = num % 10;  // Extract the last digit
            sum += pow(digit, digitCount);  // Raise the digit to the power of digitCount and add to sum
            num = num / 10;  // Remove the last digit
        }

        // Check if the sum is equal to the original number
        return (sum == originalNum);
    }
};

int main() {
    clrscr();

    Armstrong arm;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is an Armstrong number
    if(arm.isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    getch();
    return 0;
}

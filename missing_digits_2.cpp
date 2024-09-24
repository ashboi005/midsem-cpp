#include <iostream.h>
#include<conio.h>
#include<string.h>

void main() {
    clrscr();

    char input[100];  // Character array to store input string
    int digitsPresent[10];  // Boolean array to track which digits are present (0 to 9)
    for(int x=0;x<10;x++)
        digitsPresent[x]=0;

    cout << "Enter a string containing digits: ";
    cin >> input;  // Read input string

    // Loop through the input string and mark digits that are present
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            int digit = input[i] - '0';  // Convert char to corresponding digit
            digitsPresent[digit] = 1; // Mark the digit as present
        }
    }

    // Output the digits that are not present in the input string
    cout << "Digits not present: ";
    for (i = 0; i <= 9; i++) {
        if (digitsPresent[i]==0) {
            cout << i << " ";  // Print the digit if it's not present
        }
    }

    cout << endl;
    getch();
}
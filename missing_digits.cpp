#include<iostream.h>
#include<conio.h>
#include<string.h>

class MissingDigits {
public:
    void findMissingDigits(char str[]) {
        bool digitPresent[10] = {false};  // Array to track which digits are present

        // Traverse the input string and mark the digits that appear
        for(int i = 0; str[i] != '\0'; i++) {
            int digit = str[i] - '0';  // Convert character to corresponding digit by subtracting the ASCII values to get the correct integer
            digitPresent[digit] = true;
        }

        // Output the digits that are missing
        cout << "Digits not present in the string are: ";
        for(int i = 0; i < 10; i++) {
            if(!digitPresent[i]) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    clrscr();
    MissingDigits md;
    char str[100];
    cout << "Enter a numeric string: ";
    cin >> str;  // Read the string input
    md.findMissingDigits(str);      // Call the function to find missing digits
    getch();
    return 0;
}

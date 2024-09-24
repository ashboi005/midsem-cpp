#include<iostream.h>
#include<conio.h>
#include<string.h>  // For using strlen()

class StringLength {
public:
    int findLength(char str[]) {
        return strlen(str);  // Use the built-in strlen function
    }
};

int main() {
    clrscr();

    StringLength sl;
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);  // Read the string input

    // Finding and displaying the length of the string
    int length = sl.findLength(str);
    cout << "The number of characters in the string is: " << length << endl;

    getch();
    return 0;
}
#include<iostream.h>
#include<conio.h>
#include<string.h>  // For string manipulation functions
#include<ctype.h>   // For tolower() function

class NameSort {
public:
    // Function to convert a string to lowercase
    void toLowerCase(char str[]) {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);  // Convert each character to lowercase
        }
    }

    // Function to sort names using bubble sort
    void bubbleSort(char names[10][50], int n) {
        char temp[50];

        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (strcmp(names[j], names[j+1]) > 0) {
                    // Swap the names if they are not in order
                    strcpy(temp, names[j]);
                    strcpy(names[j], names[j+1]);
                    strcpy(names[j+1], temp);
                }
            }
        }
    }

    // Function to display the sorted names
    void displayNames(char names[10][50], int n) {
        cout << "Sorted names:" << endl;
        for (int i = 0; i < n; i++) {
            cout << names[i] << endl;
        }
    }
};

int main() {
    clrscr();  // Clear the screen

    NameSort obj;  // Create an object of the NameSort class
    char names[10][50];  // Array to store 10 names
    int n = 10;  // Number of names to sort

    // Input 10 names
    cout << "Enter 10 names:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        cin >> names[i];
        obj.toLowerCase(names[i]);  // Convert the input name to lowercase
    }

    // Call the function to sort the names
    obj.bubbleSort(names, n);

    // Display the sorted names
    obj.displayNames(names, n);

    getch();  // Wait for key press
    return 0;
}

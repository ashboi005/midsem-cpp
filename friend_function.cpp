#include<iostream.h>
#include<conio.h>

class Box {
private:
    int width;
public:
    Box() { width = 5; }  // Constructor initializing width
    friend void printWidth(Box b);  // Friend function declaration
};

// Friend function definition
void printWidth(Box b) {
    cout << "Width of box: " << b.width << endl;  // Accessing private member
}

int main() {
    clrscr();
    Box b;  // Creating an object of class Box
    printWidth(b);  // Calling the friend function
    getch();
    return 0;
}

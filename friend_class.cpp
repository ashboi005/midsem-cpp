#include<iostream.h>
#include<conio.h>

class A {
private:
    int x;
public:
    A() { x = 10; }  // Constructor initializing x
    friend class B;  // Declare class B as a friend of A
};

class B {
public:
    void showA(A objA) {
        cout << "Private member of class A: " << objA.x << endl;  // Accessing private member of A
    }
};

int main() {
    clrscr();
    A objA;  // Creating object of class A
    B objB;  // Creating object of class B
    objB.showA(objA);  // Class B accessing private member of A
    getch();
    return 0;
}

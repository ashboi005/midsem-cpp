#include<iostream.h>
#include<conio.h>

#define MAX 10  // Define the maximum size of the stack

class Stack {
private:
    int arr[MAX];  // Array to store stack elements
    int top;       // Variable to track the top of the stack

public:
    Stack() {
        top = -1;  // Initialize stack as empty
    }

    // Function to push an element onto the stack
    void push(int value) {
        if(top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            top++;            // Increment the top
            arr[top] = value; // Add the value to the top
            cout << value << " pushed onto the stack." << endl;
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if(top < 0) {
            cout << "Stack Underflow! Cannot pop." << endl;
        } else {
            cout << arr[top] << " popped from the stack." << endl;
            top--;  // Decrement the top
        }
    }

    // Function to display the current top element (Optional for understanding)
    void displayTop() {
        if(top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
};

int main() {
    clrscr();

    Stack s;  // Create a stack object

    // Example usage of push and pop operations
    s.push(10);
    s.push(20);
    s.push(30);
    s.displayTop();  // Display the current top element
    s.pop();         // Pop the top element
    s.displayTop();  // Display the new top element
    s.pop();         // Pop again
    s.pop();         // Pop again
    s.pop();         // Try popping from an empty stack (underflow)

    getch();
    return 0;
}

#include<iostream.h>
#include<conio.h>

#define MAX 10  // Define the maximum size of the queue

class Queue {
    private:
        int arr[MAX];  // Array to store queue elements
        int front;     // Index of the front element
        int rear;      // Index of the rear element

    public:
        Queue() {
            front = -1;  // Initialize queue as empty
            rear = -1;   // Initialize queue as empty
        }

        // Function to insert an element into the queue (enqueue)
        void insert(int value) {
            if(rear >= MAX - 1) {
                cout << "Queue Overflow! Cannot insert " << value << endl;
            } else {
                if(front == -1) {  // First element to be inserted
                    front = 0;
                }
                rear++;            // Increment rear
                arr[rear] = value; // Add the value to the rear
                cout << value << " inserted into the queue." << endl;
            }
        }

        // Function to delete an element from the queue (dequeue)
        void deleteElem() {
            if(front == -1 || front > rear) {
                cout << "Queue Underflow! Cannot delete." << endl;
            } else {
                cout << arr[front] << " deleted from the queue." << endl;
                front++;  // Increment front
            }
        }

        // Function to display the current front element (Optional for understanding)
        void displayFront() {
            if(front == -1 || front > rear) {
                cout << "Queue is empty." << endl;
            } else {
                cout << "Front element is: " << arr[front] << endl;
            }
        }
};

int main() {
    clrscr();

    Queue q;  // Create a queue object

    // Example usage of insert and delete operations
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.displayFront();  // Display the current front element
    q.deleteElem();    // Delete the front element
    q.displayFront();  // Display the new front element
    q.deleteElem();    // Delete again
    q.deleteElem();    // Delete again
    q.deleteElem();    // Try deleting from an empty queue (underflow)

    getch();
    return 0;
}

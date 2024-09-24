#include<iostream.h>
#include<conio.h>

class BubbleSort {
public:
    void sort(int arr[], int n) {
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    // Swap the elements
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    void display(int arr[], int n) {
        cout << "Sorted elements: ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    clrscr();

    BubbleSort sorter;
    int arr[10];

    // Input 10 elements
    cout << "Enter 10 elements: ";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Sorting the array
    sorter.sort(arr, 10);

    // Display the sorted array
    sorter.display(arr, 10);

    getch();
    return 0;
}

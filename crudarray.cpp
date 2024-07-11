#include <iostream>
using namespace std;

int main() {
    int choice;
    int ele1, pos1;
    int pos;
    int n = 0; 
    int arr[100];

    while (1) {
        cout << "\nMenu:\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Update\n";
        cout << "4. Select/Read\n";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter length: ";
            cin >> n;
            cout << "Enter array elements:\n";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
        }
        else if (choice == 2) {
            cout << "Enter index of element to delete: ";
            cin >> pos;
            if (pos >= 0 && pos < n) {
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Element deleted.\n";
            } 
        }
        else if (choice == 3) {
            cout << "Enter element and position: ";
            cin >> ele1 >> pos1;
            if (pos1 >= 0 && pos1 < n) {
                arr[pos1] = ele1;
                cout << "Element updated.\n";
            } 
        }
        else if (choice == 4) {
            if (n == 0) {
                cout << "Array is empty.\n";
            } else {
                cout << "The array is: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}

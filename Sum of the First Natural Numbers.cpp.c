#include<iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter elements of 3x3 matrix:" << endl;

    // ইনপুট নেওয়া
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nThe 3x3 Matrix is:\n";

    // আউটপুট দেখানো
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

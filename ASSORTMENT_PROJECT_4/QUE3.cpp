#include <iostream>
using namespace std;

int main() {
    int num; 
    cout << "Enter the array's row & column size:- ";
    cin >> num;

    int arr[num][num], transpose[num][num];

    cout << "Enter array's elements:-"<<endl;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "The transpose matrix of an array:-"<<endl;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }


}

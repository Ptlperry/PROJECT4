#include <iostream>
using namespace std;

int main() {

    int  num1, num2;

    cout << "Enter the array's row size:- ";
    cin >> num1;
    cout << "Enter the array's column size:- ";
    cin >> num2;

    int arr[num1][num2];
 
    cout << "Enter array's elements:-"<<endl;
    for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int element = arr[0][0];
    for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2; j++) {
            if (arr[i][j] > element) {
                element = arr[i][j];
            }
        }
    }

    cout <<"The largest element is:- "<<element<<endl;

}


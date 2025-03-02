#include<iostream>
using namespace std;

int main(){

    int num;
    
    cout << "Enter the array's size:- " ;
    cin >> num;
    int arr[num];
    
    cout <<"Enter array's elements:- "<< endl;
    for(int i=0; i< num; i++){
        cout << "a [" << i << "] = ";
        cin >> arr[i];
    }

    cout <<"Negative elements from an array:- ";
    for(int i=0; i< num; i++){
        if (arr[i] < 0){
        cout << arr[i] <<" ";  
        }
    }
}
#include <iostream>

using namespace std;

int main(){
    int arr[100] ={1,2,3,4};
    cout << "Initial Array: " << endl;
    for(int i=0; i<4; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Inserting value at a certain position
    int n=4, pos=2, val=3;

    for(int i=n; i>pos; --i){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    n++;

    cout << "Array after inserting element: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    // Deleteing an element at a certain position
    pos=2;
    for(int i=pos; i<n-1; ++i){
        arr[i]=arr[i+1];
    }
    n--;
    cout << "Array after deleting element: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    // Updating an element at a certain position
    pos=1;
    val=5;
    arr[pos]=val;

    cout << "Array after updating element: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    
    
}

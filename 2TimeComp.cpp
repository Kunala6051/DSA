# include <iostream>

using namespace std;


void printFirstElement(int arr[], int n){       // Time Complexity: O(1) [Constant]
    cout << arr[0] << endl;
}

void printArray(int arr[], int n){     // Time Complexity: O(n) [Linear]
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printPairs(int arr[], int n){     // Time Complexity: O(n^2) [Quadratic]
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "(" << arr[i] << "," << arr[j] << ")" << " ";
        }
        cout << endl;
        
    }
    cout << endl;
}

int main(){
    int arr[] = {5,1,3,4,5,6};
    
    cout << "Print first element: ";
    printFirstElement(arr,6);

    cout << "Print Array: ";
    printArray(arr,6);

    cout << "Print Pairs: " << endl;
    printPairs(arr,6);



    return 0;
}
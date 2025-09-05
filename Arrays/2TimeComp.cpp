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


int binarySearch(int arr[], int n, int target){
    int st=0, end=n-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]==target){
            return mid;
        } else if(arr[mid]>target) end=mid-1;
        else st=mid+1;
    }
    return -1;
}

// Time Complexity: O(log n)
// Every time the search becomes half => n => n/2 => n/4 => n/8 => worst case left with 1 element 

int main(){
    int arr[] = {1, 222, 343, 400, 500, 600};
    
    cout << "Print first element: ";
    printFirstElement(arr,6);

    cout << "Print Array: ";
    printArray(arr,6);

    cout << "Print Pairs: " << endl;
    printPairs(arr,6);


    // IDE: Integrated Development Environment 

    int idx = binarySearch(arr,6,600);
    if(idx==1) cout << "Element Does not Found." << endl;
    else cout << "Element Found At: " << idx << endl;


    return 0;
}
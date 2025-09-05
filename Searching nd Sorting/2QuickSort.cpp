#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Quick Sort (In descending order)

int part(vector <int> &arr, int low, int high){
    int pivot = arr[high];
    int i=low-1; 

    for(int j=low; j<high; j++){
        if(arr[j]>pivot){ // If element is greater than pivot it should be placed at left side
            i++;
            swap(arr[j],arr[i]); // i is the place where next element is to be placed
        }
    }
    // NOW ALL THE ELEMENTS GREATER THAN PIVOT ARE PLACED TILL i
    // Pivot should be placed after that 
    swap(arr[high], arr[i+1]);

    // Now we have the index on which the array should be partitioned and the further quick sort should be done on both the halves
    return i+1;

}
void quickSort(vector <int> &arr, int low, int high){
    if(low<high){
        int pi = part(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }

}



int main(){
    vector <int> arr = {2,5,4,6,7,55,22,1};
    quickSort(arr, 0, 7);

    for(int i: arr) cout << i << " ";
    cout<< endl;

}
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int swapAlternate(int arr[], int n){

    for(int i=0; i<n-1; i+=2){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    
}


int findUnique(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        res = res^arr[i];     // finding unique element by XOR operation
    }
    return res;
}

int findRepeatingElement(int arr[],int n){
    int res1=0;
    for(int i=0; i<n; i++){
        res1=res1^arr[i];
    }
    int res2=0;
    for(int i=1; i<n; i++){
        res2=res2^i;
    }
    return res1^res2;
}

int main(){
    int n=6;
    int arr[n]={1,3,7,5,2,4};

    swapAlternate(arr,n);
    for(int i: arr){
        cout << i << " ";
    }
    cout << endl;

    int arr2[7] = {3,5,6,6,7,3,7};
    cout << findUnique(arr2,7) << endl;  
    
    int arr3[6] = {1,2,3,5,4,3};
    cout << findRepeatingElement(arr3,6) << endl;
    
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];


    



}
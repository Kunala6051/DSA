# include <iostream>
# include <vector>
using namespace std;


void printSum(int arr[], int n){      // Space Complexity: O(1) [Constant]
    int sum=0; // Constant Space
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    cout << "Sum: " << sum << endl;
}

vector <int> doubleArray(int arr[], int n){  // Space Complexity: O(n) [Linear]
    vector <int> result(n);
    for(int i=0; i<n; i++){
        result[i]=2*arr[i];
    }
    return result;

}

void reverse(int arr[], int n){
    int st=0, end=n-1;
    while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}

int countPairs(int arr[],int n, int k){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==k) count++;
        }
    }
    return count;
}

int main(){

    int arr[]={1,2,3,4,5,6,7};
    printSum(arr, 7);

    vector <int>result = doubleArray(arr,7);
    for(int i=0; i<7; i++){
        cout << result[i] << " ";
    }
    cout << endl;
    
    reverse(arr,7);
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << countPairs(arr,7,6) << endl;

    




    return 0;
}
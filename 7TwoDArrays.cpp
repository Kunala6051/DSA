# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter No. of elements in a square matrix: ";
    cin >> n;

    cout << "NOW ENTER ELEMENTS: "<< endl;

    int arr[n][n];

    int sumM[n];
    int sumOfMatrix=0;

    for(int i=0; i<n; i++){
        cout << "Row " << i << ": "; 
        int sumR=0;
        for(int j=0; j<n; j++){  
            cin >> arr[i][j];
            sumR+=arr[i][j];
            sumOfMatrix+=arr[i][j];
        }
        sumM[i]=sumR;

    }

    cout << "Sum Of Each Row: ";
    for(int i=0; i<n; i++){
        cout << sumM[i] << " ";
    }
    cout << endl;

    cout << "Sum Of Matrix: " << sumOfMatrix << endl;;




}
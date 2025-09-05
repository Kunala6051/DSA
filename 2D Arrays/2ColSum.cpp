#include <iostream>
#include <vector>

using namespace std;

void printSumOfCol(int arr[][3], int n, int m){
    int sumCol[m];

    for(int i=0; i<m; i++){
        int sum1=0;
        for(int j=0; j<n; j++){
            sum1+=arr[j][i];
        }
        sumCol[i]=sum1;
    }

    cout << "Sum Of Each Column: ";
    for(int i=0; i<m; i++){
        cout << sumCol[i] << " ";
    }
    cout << endl;

}

int maxRowSum(int arr[][3], int n, int m){

    int rowSum[n];

    for(int i=0; i<n; i++){
        int sum1=0;
        for(int j=0; j<m; j++){
            sum1+=arr[i][j];
        }
        rowSum[i]=sum1;
    }
    int max1=rowSum[0];
    for(int i=1; i<n; i++){
        max1=max(max1,rowSum[i]);
    }
    return max1;
}



int main(){

    int n=3, m=3;
    int arr[3][3] = {{3,9,15},{6,2,12},{10,5,2}};

    printSumOfCol(arr, n, m);

    cout << "Maximum row sum is: " << maxRowSum(arr, n, m) << endl;



    return 0;
}
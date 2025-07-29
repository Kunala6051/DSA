#include <iostream>
#include <vector>

using namespace std;


int main(){
    
    // WAP to input 3x3 matrix and print it
    int n=3;
    int arr[3][3];
    cout << "Enter Elements of 3x3 matrix: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cout << "Enter element at position ["<< i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // ROW MAJOR 

    // Default method of storage in memory
    // Entire row is stored first in memory 
    // Address of element at [i][j]: Base + (i*no_of_cols + j)

    int arr1[2][3] = {{1,2,3},{4,5,6}};
    int *base = &arr1[0][0];
    int rows=2, cols=3;
    cout << "Row major order address calculation: " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << "Address of arr[" << i << "][" << j << "]: "<< (base+(i*cols+j)) << endl;
        }
    }



    // Column Major

    // Entire Column is stored first in memory 
    // Address of element at [i][j]: Base + (base+(j*rows+i))

    cout << "Column major order address calculation: " << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << "Addss of arr[" << i << "][" << j << "]: "<< (base+(j*rows+i)) << endl;
        }
    }



    // SPARSE MATRIX
    // most of the elements are 0

    int mat[3][3]={{1,0,0},{0,0,0},{0,0,9}}; // Sparse Matrix


    // Triplet Representation
    
    cout << "Triplet Representation of sparse matrix: " << endl;
    cout << "row col non-zero-element" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j]!=0){
            cout << i << " " << j << " " << mat[i][j] << endl;}
        }
    }


    // Count Non-Zero Elements in Sparse Matrix
    int count=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j]!=0){
                count++;
            }
        }

    }
    
    cout << "Number of non zero elements in sparse matrix are: " << count << endl;



    // Convert Sparse Matrix to 2D Matrix from Triplets
    int transformedArray[count][3];
    int k=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j]!=0){
                transformedArray[k][0]=i;
                transformedArray[k][1]=j;
                transformedArray[k][2]=mat[i][j];
                k++;
        }
    }

    
    
} 
    cout << "Tranformed Matrix: " << endl;
    for(int i=0; i<count; i++){
        for(int j=0; j<3; j++){
            cout << transformedArray[i][j] << " ";
        }
        cout << endl;
    }
}






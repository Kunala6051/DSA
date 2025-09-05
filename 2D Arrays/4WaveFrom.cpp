#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n=3;
    int mat[4][n] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int c=0;
    while(c<n){
        if(c%2==0){
            for(int i=0; i<4; i++){
                cout << mat[i][c] << " ";
                
            }
        } else{
            for(int i=3; i>=0; i--){
                cout << mat[i][c] << " ";
                
            }
        }
        c++;
    }
}
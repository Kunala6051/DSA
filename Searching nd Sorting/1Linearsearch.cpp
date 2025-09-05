#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key) return i;
    }
    return -1;
}


void countOccurances(int arr[], int n){
    bool visited[n] = {false};
    for(int i=0; i<n; i++){
        
        if(visited[i]) continue;
        else{
            int count=1;
            for(int j=i+1; j<n; j++){
                if(arr[j]==arr[i]){
                    count++;
                    visited[j]=true;
                }
            }
            cout << "Count of " << arr[i] << ": " << count << endl;
        }
        
    }  

}

int main(){
    
    int arr[]={2,3,4,5,6};

    int sz = sizeof(arr)/sizeof(arr[0]);
    int key=1;

    int res = linearSearch(arr, sz, key);
    if(res!=-1) cout << "Element present at " << res << endl;
    else cout << "Element not present" << endl;

    int arr2[]={2,3,2,4,5,6,5,4,3,3,3,3};
    countOccurances(arr2, 12);

}
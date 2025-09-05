# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;


bool elementAlreadyPresent(vector <int> arr, int tar){

    int n= arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]==tar){
            return true;
            break;
        }
    }
    return false;

}

bool checkUniqueOcuurance(int arr[],int n){
    vector <int> elements;
    vector <int> countVec;

    for(int i=0; i<n; i++){
        if(!elementAlreadyPresent(elements, arr[i])){
            int count=0;
            for(int j=i+1; j<n; j++){
                if (arr[i]==arr[j]){
                    count+=1;
                }
            }
            countVec.push_back(count);
        }
        elements.push_back(arr[i]);

        
    }
    sort(countVec.begin(),countVec.end());
    for(int i=0; i<countVec.size()-1; i++){
        if(countVec[i]==countVec[i+1]){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << checkUniqueOcuurance(arr,n) << endl;
}
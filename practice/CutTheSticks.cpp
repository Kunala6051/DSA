#include <iostream>
#include <vector>

using namespace std;

bool allElementsLowerThanMin(int arr[], int sz, int min1){
    for(int i=0; i<sz; i++){
        if(arr[i]>=min1) return false;
    }
    return true;
}


int* cutSticks(int lengths_size, int *lengths, int *result_size) 
{
    int min1=lengths[0];
    for(int i=0; i<lengths_size; i++){
        if(lengths[i]<min1) min1 = lengths[i];
    }
    
    vector<int> ans;
    
    while(!allElementsLowerThanMin(lengths, lengths_size, min1)){
        int count=0;
        for(int i=0; i<lengths_size; i++){
            if(lengths[i]>=min1){
                lengths[i]-=min1;
                count++;
            }           
        }
        ans.push_back(count);
    }
    
    *result_size=ans.size();
    
    int* res = new int[ans.size()];
    
    for(int i=0; i<*result_size; i++){
        res[i]=ans[i];
    }
    
    return res;
   
    
}


int main(){
    int *res, res_size, lengths_size = 0, i;
    cin>>lengths_size;

    int lengths[lengths_size];
    for(i = 0; i < lengths_size; i++) 
        cin>>lengths[i];

    res = cutSticks(lengths_size, lengths, &res_size);
    for (i = 0; i < res_size; i++) 
        cout<<res[i]<<endl;



    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// LeetCode: 75
// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

// Also called as Dutch National Flag Problem (DNS)
void sortColor(vector <int> &arr){
    int low=0, mid=0, high=arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        } else if(arr[mid]==1){
            mid++;
        } else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    vector  <int> arr = {0,2,2,1,2,0,0,0,1,1,2};
    sortColor(arr);

    for(int i: arr){
        cout << i << " ";
    }
    cout << endl;
}
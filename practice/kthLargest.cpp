#include<iostream>
#include<cstdio>
#include<cmath>
#include <algorithm>
// Include headers as needed

using namespace std;




int kthLargest(int arr[], int size, int k) {
  // Write your code here
    sort(arr,arr+size);
    return arr[size-1-k];
    
}

int main()
{
  int T, i, k, size = 0;
  cin>>T;
  while (T--)
  {
    cin>>k;
    cin>>size;
    int arr[size];
    for( i = 0; i < size; i++) 
      cin>>arr[i];
    cout<<kthLargest(arr, size, k)<<endl;
  }
  return 0;
}
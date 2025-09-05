#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int * mergeArrays(int a[], int b[], int asize, int bsize) 
{
    int* arr = new int[asize + bsize];

    int i=0, j=0, k=0;
    while(i<asize && j<bsize){
        if(a[i]<b[j]) arr[k++]=a[i++];
        else arr[k++]=b[j++];
    }
    while(i<asize) arr[k++]=a[i++];
    while(j<bsize) arr[k++]=b[j++];
    
    return arr;
}

int main()
{
  int i, k, size = 0, size1 = 0, *final;
  cin>>size;
  int a[size];
  for( i = 0; i < size; i++) 
    cin>>a[i];

  cin>>size1;
  int b[size1];
  for( i = 0; i < size1; i++) 
    cin>>b[i];

  final = mergeArrays(a, b, size, size1);

  for (i = 0; i < (size + size1); i++) 
    cout<<final[i]<<endl;

  return 0;
}
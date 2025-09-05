#include <bits/stdc++.h>
using namespace std;

/*     
 * Complete the 'solveQuery' function below.
 * @params
 *   N -> Total numbers from 1 to N
 *   W -> Maximum numbers in each row
 *   i -> First part of the query, denoting row or column number
 *   ch -> Second part of the query (i.e 'R' or 'C')
 * 
 * @return
 *   The sum of numbers in the row or column, as per the query
 */

long solveQuery(int n, int w, int i, char ch) {
  // Write your code here
    int r;
    
    if(n/w==0) r = n/w;
    else r = n/w + 1;
    
    
    if(ch=='R'){
        if(i>r || i<=0) return 0;
        
        int st;
        if (i==1) st = 1;
        else st = 1 + (w*(i-1));
        
        long sum1=0;
        int end=st+w;
        
        while(st<=n && st<end){
            sum1+=st;
            st++;
        }
        return sum1;
        
    } else{
        
        if(i>w || i<=0) return 0;
        
        int st = i;
        long sum1=0;
        while(st<=n){
            sum1+=st;
            st+=w;
        }
        return sum1;
    }
    
    
  
}


int main()
{
  int t,n,w,i;
  char c;
  cin >> t;
  for(int k=0;k<t;k++){
    cin >> n >> w >> i >> c;
    cout << solveQuery(n,w,i,c) << endl;
  }
  return 0;
}
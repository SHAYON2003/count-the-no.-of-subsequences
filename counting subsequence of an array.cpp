#include <iostream>
#include <vector>
using namespace std;

int subsequence(int ind, int arr[],int sum,int s, int n){
    // condition satisfied
     if(ind == n){
       if(s ==sum){
        return 1;
       }
   else return 0;
   }
 
   s+=arr[ind];
  int l = subsequence(ind+1,arr, sum, s, n);
   s-=arr[ind];
 
   int r = subsequence(ind+1,arr,sum,s,n);  

    return l+r;
   }

int main() {
  int arr[] = {1,2,1};
  int n = 3;
  int sum = 2;

  cout<<subsequence(0,arr,sum,0,n);
  return 0;
}
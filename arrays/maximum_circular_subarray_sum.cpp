// max subarray sum = total sum of array - sum of contributing elements 
#include<iostream>
using namespace std;
int kadane(int arr[],int n){
  int currentsum =0;
  int maxsum = INT_MIN;
  for(int i=0;i<n;i++){
         currentsum += arr[i];
         if(currentsum<0){
              currentsum = 0;
         }
         maxsum = max(maxsum , currentsum);
  }
return maxsum;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
int wrapsum;
int nonwrapsum;

nonwrapsum = kadane(a,n);
// for wrapsum
int totalsum = 0;
for(int i =0;i<n;i++){
    totalsum += a[i];
    a[i]= -a[i];
}
wrapsum = totalsum + kadane(a,n);// this time kadane with reversed signs and its the sum of non contributing elements and we have done - - = + here.

cout<<max(wrapsum,nonwrapsum)<<endl;

return 0;
}
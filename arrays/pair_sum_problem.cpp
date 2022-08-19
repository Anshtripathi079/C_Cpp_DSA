#include<iostream>
using namespace std;

int pairsum(int a[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                cout<<i<<" "<<j<<endl;
                return 1;
            }
        }
    }
    return 0;
}
// optimised one only work with sorted array.if not sorted we will sort.
int pairsumoptimised(int a[],int n,int k){
int low = 0;
int high = n-1;
while(low<high){
    if(a[low]+a[high]==k){
        cout<<low<<" "<<high<<endl;
        return 1;
    }
    else if(a[low]+a[high]>k){
        high--;
    }
    else{
        low++;
    }
}
return 0;    
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     if(a[i]+a[i+1]==k){
    //       cout<<i<<" "<<i+1;
    //       return 0;
    //     }
    // } cannot use this bcoz this is for continous elements pairsum but we have to find pairsum at any indices of the array
    // cout<<pairsum(a,n,k)<<endl;
    // but if the array is sorted we can more better approach with less complexity
     cout <<pairsumoptimised(a,n,k)<<endl;
    return 0;
}
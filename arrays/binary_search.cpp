#include<iostream>
#define MAX 10
using namespace std;
int binary(int arr[],int x,int n){
       int ub=n-1,lb=0;
       
       for(int i=0;i<n;i++){
        int mid = ub+lb/2;
          if(arr[mid]==x){
            return mid;
          }
          else if(arr[mid]>x){
             ub = mid-1;
          }
          else{
            lb = mid+1;
          }
          
       }
       return -1;

}
int main(){
int n,x;
int arr[MAX];
cout<<"enter no. of elements in array"<<endl;
cin>>n;
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<"enter element to find"<<endl;
cin>>x;
cout<<binary(arr,x,n);
return 0;
}
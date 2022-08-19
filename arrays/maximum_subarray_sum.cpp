//brute force approach
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
int sum =0;
// int arr[n];
int ans =0;
for(int i=0;i<n;i++){
    sum = 0; 
       for(int j=i;j<n;j++){
        
        sum += a[j];
        //  arr[i] = sum;
       }
       ans = max(ans,sum);
}
// int ans =0;
//  for(int i=0;i<n;i++){
// ans = max(ans,sum);
cout<<ans<<endl;
return 0;
}

 
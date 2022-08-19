#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
const int N = 1e6+2 ;//10^6
int idx[N];
for(int i=0;i<N;i++){
    idx[i]=-1;
}
int minidx= INT_MAX;
for(int i=0;i<n;i++){
    if(idx[i]!=-1){
        minidx = min(minidx,idx[i]);
    }
    else{
        idx[i]=i;
    }
}
if(minidx = INT_MAX){
    cout<<"-1";
}
else{
    cout<<minidx +1<<endl;
}
return 0;
}
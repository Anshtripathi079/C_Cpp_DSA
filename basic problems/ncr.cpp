#include<iostream>
using namespace std;
int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
int n,r;
cin>>n>>r;
int ans;
ans = fact(n)/(fact(r)*fact(n-r));
cout<<ans;


return 0;
}
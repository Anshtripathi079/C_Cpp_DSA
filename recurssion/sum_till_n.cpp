// sum till n = n + n-1+n-2 +n-3 .....n;
// or n + n+sum till n-1
// sum till n-1 = n-1+sum till n-2
// .          .
// .          .
// .          .
// .          .
// sum till 0 = 0;
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum = sum(n-1);
    return n + prevsum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}
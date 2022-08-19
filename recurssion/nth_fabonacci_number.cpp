// fib(n) = fib(n-1) + fib(n-2) n = nth fabonacci number
// fib(0) = 0
// fib(1) = 1
// 0 1 1 2 3 5 ...
#include<iostream>
using namespace std;
int fabonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int fab1 = fabonacci(n-1);
    int fab2 = fabonacci(n-2);
    return fab1+fab2;
}
int main(){
    int n;
    cin>>n;
    cout<<fabonacci(n)<<endl;
}
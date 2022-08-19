// gcd / hcf
// if we have to find hcf or gcd of two no. i.e, 24 and 42 then
// 24 = 2*2*2*3
// 42 = 2*3*7
// here gcd is 6 = 2*3 the common factors
// with euclids formula we can find it like
// 42%24 = 18
// 24%18 = 6
// 18%6 = 0 here when we reach 0 we will take no. before it as ans.
#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
    int rem=a%b;
    a=b;
    b = rem;
    
}
return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}

 

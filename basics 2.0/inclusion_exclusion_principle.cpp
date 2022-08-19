// principle - what to include or what to exclude to get the ans
#include<iostream>
using namespace std;
int divisible(int n,int a,int b){
   int c1 = n/a; //how many no. all divisible by a till n
   int c2 = n/b; //how many no. are divisible by b till n

   int c3 = n/(a*b); //how many no. are divisble by both a and b.
   return c1+c2-c3; //how many no. are divisible
}
int main(){
int n,a,b;
cin>>n>>a>>b;
cout<<divisible(n,a,b)<<endl;
}
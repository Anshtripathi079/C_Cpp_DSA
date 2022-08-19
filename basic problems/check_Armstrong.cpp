#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0,rem,a=n;
while(n>0){
rem=n%10;
sum+=rem*rem*rem;
n=n/10;
}
if(sum==a){
    printf("armstrong\n");
}
else{
printf("no");
}




return 0;
}
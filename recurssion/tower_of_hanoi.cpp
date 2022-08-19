// 3 rods are there 
// we have to move elements from 1 to 3 rod in same sequence as it was in a
#include<iostream>
using namespace std;

void tower(int n,char src,char dest,char helper){
       if(n==0){
        return;
       }
       tower(n-1,src,helper,dest);
       cout<<"move from "<<src<< " to "<<dest<<endl;
       tower(n-1,helper,dest,src);
}
int main(){
    tower(3,'A','C','B');
}
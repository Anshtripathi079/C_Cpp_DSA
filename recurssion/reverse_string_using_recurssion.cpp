#include<iostream>
#include<string>
using namespace std;
//working
//hello
//ello//llo//lo//o and then return
// void rev(string s){
//  if(s.length()==0){
//     return;
//  }
//  string ros = s.substr(1);
//  rev(ros);
//  cout<<s[0];
 
// }

// easy approach
void reverse(string &s,int i,int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    return reverse(s,i+1,j-1);
}

int main(){
    reverse("hello",0,4);
}

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string str = "fsxbkahfoe";
for(int i=0;i<str.length();i++){
    if(str[i]>='a' && str[i]<='z'){ // checking for the lowercase characters in the string
        str[i] -= 32; // here we subtracting ascii value 32 bcoz 'A' comes 32 number early than 'a'.
    }
}
cout<<str<<endl;
// inbuilt function for lower to upper
transform(str.begin(),str.end(),str.begin(),::toupper); // first two arguments are working as loop and third argument is from where to begin and third for what conversion u want to do.
}
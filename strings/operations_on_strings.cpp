//append string
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string str = "fam";
string st = "ily";
str.append(st);
// also we can append by
 str = str+st;

cout<<str<<endl;
// clear a string 
str.clear();
// compare two string to check whether they are equal or not
cout<<st.compare(str)<<endl; // if the output is 0 then both strings are equal.
// to check whether a string is empty or not
if(str.empty()){
    cout<<"empty";
}
// erase function 
 str.erase(3,3); // arguments 1st konse index se shuru krna h aur 2nd kitne characters delete krne h.
// find function 
str.find("am"); //will return the first index where the substring am is found.
// insert substring in a string
str.insert(2,"lol"); // at which index and what string
// length of the string
str.length(); //or str.size();
// iterate over string
for(int i = 0; i< str.length();i++){

}
// get substring from a string
str.substr(2,4);//from 2nd index and four characters followed
// convert a numeric string to an integer
string s = "234";
int x = stoi(s);
// interger to string 
int a = 543;
to_string(a);
// sort a string
// we have to include #include<algorithm> to use sort function.
sort(str.begin(),str.end());
// reverse function to reverse a string
reverse(s.begin(),s.end());
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str  = "nvsofgfgggirgggrth";
   int freq[26]; //making an array for storing frquencies of all 26 characters.
for(int i=0;i<26;i++){
    freq[i]=0; //initialising frequencies to 0
}
for(int i=0;i<str.size();i++){
    freq[str[i]-'a']++; //isse particular character ke block pe frequency update ho jaygi

}
char ans ='a';
int maxF =0;
for(int i=0;i<26;i++){
    if(freq[i]>maxF){
        maxF = freq[i];
        ans = i+'a';
    }
}
cout<<maxF<<" "<<ans<<endl;           

}
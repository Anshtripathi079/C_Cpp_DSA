 #include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
    int x;
    cin>>x;
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){            
             if(x == a[i][j]){
                cout<<i<<" "<<j;
                count++;
             }           
        }
        }
        if(count==0){
            cout<<"not found";
        }
    return 0;
}
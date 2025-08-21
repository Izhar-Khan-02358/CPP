#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    string a="";
    for(int i=1;i<pow(10,15);i++){
        a+=to_string(i);
    }
    for(int i=0;i<t;i++){
        int k;
        int v=0;
        cin>>k;
        
        for(int j=0;j<k;j++){
            int u=(int)a[j]-'0';
            v+=u;
        }
        cout<<v<<endl;
    }
    return 0;
}
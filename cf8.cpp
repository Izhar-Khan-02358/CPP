#include<iostream>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    int x=0;
    int y=0;
    
    for(int i=0;i<a.length();i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    for(int i=0;i<a.length();i++){
        x+=a[i];
        y+=b[i];
    }
    int v=x-y;
    if(v>0){
            cout<<1<<endl;
        }
        if(v<0){
            cout<<-1<<endl;
        }
        if(v==0){
            cout<<0<<endl;
        }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,c;
    cin>>s>>c;
    cout<<s.size()<<" "<<c.size()<<'\n'<<s<<c<<"\n";
    if(!s.empty()&& !c.empty()){
        swap(s[0],c[0]);
        cout<<s<<" "<< c<<endl;
    }
}
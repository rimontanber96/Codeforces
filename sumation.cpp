#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
       k+=s[i]-'0';
    }
    cout<<k<<endl;
}

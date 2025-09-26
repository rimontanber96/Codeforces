#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,s;
    cin>>r>>s;
    for(int i=1;i<10000;i++){
        r*=3;//r=r*3
        s*=2;//s=s*3
        if(r>s){
            cout<<i<<endl;
            return 0;
        }
    }
    


}
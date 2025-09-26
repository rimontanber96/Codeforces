#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	for(int i=0;i<t;i++){
	   double a,b,c;cin>>a>>b>>c;
        double x=(a+b)/2;
	    if(x>c){
	        cout<<"YES"<<'\n';
	    }
	    else {
	        cout<<"NO"<<'\n';
	    }
	}

}

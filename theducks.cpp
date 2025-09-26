#include<iostream>
using namespace std;
int main()
{
    int t,sum;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        sum=a+b+c;
        int terget=sum/3;
        if(sum %3!=0|| a>terget || b>terget )
        {
            cout<<"NO"<<endl;
        }
    else{
        cout<<"YES"<<endl;
    }
    
}
}
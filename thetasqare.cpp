#include<iostream>
using namespace std;
int main()
{
    int n,m,a,na,ma;
    cin>>n>>m>>a;
    na=(n+a-1)/a;
    ma=(m+a-1)/a;
    cout<<na*ma;

}
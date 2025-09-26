#include<iostream>
using namespace std;
int main()
{
    int t[6][6];
    int rows,coloum,total;
    for(int i=1;i<5+1;i++)
    {
        for(int j=1;j<5+1;j++)
        {
            cin>>t[i][j];
            if(t[i][j]==1)
            {
                
                rows=i;
                coloum=j;
            }
            
        }
    }
 total=abs(3-rows)+abs(3-coloum);
 cout<<total;
    
}
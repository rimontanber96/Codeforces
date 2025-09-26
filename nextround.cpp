#include<iostream>
using namespace std;
int main()
{
    int t,p;
    cin>>t>>p;
    int array[t];
    int count=0;
    for(int i=0;i<t;i++)
    {
    cin>>array[i];
    //int count =0;
    }
    for(int i=0;i<t;i++)
    {
        if(array[i]>=array[p-1]&& array[i]>0)
        {
            count++;
        }

        
    }
        
    
    cout<<count;
}
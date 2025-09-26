#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string word;
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        cin>>word;
        int len=word.size();
        cin.ignore();
        if(len>10)
        {
            cout<<word[0]<<len-2<<word[len-1]<<endl;
        }
        else{
            cout<<word<<endl;
        }

    }
}
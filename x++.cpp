#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x = 0;
    string s;

    for(int i = 0; i < t; i++)
    {
        cin >> s;

        if(s[1] == '+') 
            x++;
        else
            x--;
    }

    cout << x << endl;
    return 0;
}

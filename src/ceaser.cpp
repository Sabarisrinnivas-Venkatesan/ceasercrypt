#include<bits/stdc++.h>
using namespace std;
void encrypt(int a, string b)
{
    string res = "";
    for (int i = 0;i<b.length();i++)
    {
        if(isupper(b[i] == true))
        {
            res +=  char(int (b[i]+a - 65)%26 +65);
        }
        else
        {
            res +=  char(int (b[i]+a - 97)%26 +97);
        }
        
    }

    cout << res << endl;

}

void decrypt(int a, string b)
{
    string res = "";
    for (int i = 0;i<b.length();i++)
    {
        if(isupper(b[i] == true))
        {
            res +=  char(int (b[i]-a - 65)%26 +65);
        }
        else
        {
            res +=  char(int (b[i]-a - 97)%26 +97);
        }
        
    }

    cout << res << endl;

}
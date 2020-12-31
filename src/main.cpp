#include<bits/stdc++.h>
#include "ceaser.cpp"

using namespace std;

int main ()
{
    cout << "Enter your option" << endl << "1. Encrypt" << endl << "2. Decrypt" << endl;
    int n;
    cin >> n;
    cout  << "Enter the operand string" << endl;
    string a;
    cin >> a;
    cout << "Enter the Offset" << endl;
    int offset;
    cin >> offset;

    switch (n)
    {
        case 1: {
                    encrypt(offset,a);
                    break;
                }

        case 2: {
                    decrypt(offset,a);
                    break;
                }
    }


    return 0;


} 
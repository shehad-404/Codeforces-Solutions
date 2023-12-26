// 61A Ultra-Fast Mathematician

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int i,j;

    cin >> s1 >> s2;    // s1 = 1st String,     s2 = 2nd String

    for(i=0; i<s1.size(); i++)
    {
        if(s1[i]!=s2[i])    // if 1st String one Digit(s1[i]) does not Match to 2nd String Digit(s2[i])
        {
            s1[i] ='1';
        }
        else
        {
            s1[i] = '0';
        }
    }
    cout << s1 <<endl;

    return 0;
}

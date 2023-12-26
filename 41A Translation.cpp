// 41A Translation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;

    s = string(s.rbegin(), s.rend());      // String Reverse using function >>> rbegin() & rebd()

    if(s==t)        // Checking if String s is equal to t String
    {
        cout << "YES"<<endl;
    }
    else
        cout << "NO"<<endl;

    return 0;
}

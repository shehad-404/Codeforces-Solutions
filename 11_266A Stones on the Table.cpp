//  266A  Stones on the Table

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,r=0,g=0,b=0;
    string str;

    cin >> n;
    cin >> str;

    for(i=0; i<n; i++)
    {
            if(str[i]=='R' && str[i+1]=='R')   // Checking for adjacent two Letters are same
                r++;    // Counting Pairs of R if Two Red stones are Alongside

            if(str[i]=='G' && str[i+1]=='G')    // Checking for adjacent two Letters are same
                g++;     // Counting Pairs of R

            if(str[i]=='B' && str[i+1]=='B')    // Checking for adjacent two Letters are same
                b++;     // Counting Pairs of R
    }
    cout << r+g+b <<endl;

    return 0;
}

// 344A Magnets

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i, count=0;

    cin >> n;   // number of Magnets
    int a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];    // taking Magnets Combination 10 or 01  (0=+ & 1=-)
    }

    for(i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])    // checking two magnets are not same combination
        {
            count++;    // Counting Groups
        }
    }

    cout << count<< endl;
    return 0;
}

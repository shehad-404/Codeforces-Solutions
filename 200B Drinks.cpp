// 200B Drinks

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;

    cin >> n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << (double)sum/n << endl;
}

// 160 A Twins

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    int totalSum=0, sum1=0, count=0;

    cin >> n;   // n = total coins

    int a[n];   // array of coins values

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        totalSum = totalSum + a[i];     // total money
    }
    int half = totalSum/2;

    sort(a,a+n);      // sorting array a[i] in a Ascending Order

    for(i=n-1; i>=0; i--)
    {
        sum1 = sum1 + a[i];     // sum for Large Coins
        count++;                // number of Minimum Coins

        if(sum1>half)       // Strictly Larger
            break;
    }
    cout << count<< endl;

    return 0;
}

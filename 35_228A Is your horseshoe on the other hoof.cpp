// 228A Is your horseshoe on the other hoof?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,count=0;


    long long a[100];

    for(i=0; i<4; i++)
    {
        cin >> a[i];  // 4 colors in integer
    }
    sort(a,a+4);   // Sort the array in ascending order for easier comparison

    for(i=0; i<4; i++)
    {

        if(a[i]==a[i+1])    // if Two Color Matches
        {
            count++;
        }
    }
    cout << count<<endl;
    return 0;
}

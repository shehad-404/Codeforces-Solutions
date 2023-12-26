// 677A Vanya and Fence

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,i;
    int a[1000];

    int count1 = 0, count2 = 0;

    cin >> n >> h;      // n = Number of Friends,  h = Height of Fence

    for(i=0; i<n; i++)
    {
        cin >> a[i];      // Taking all Friends Heights

        if(a[i]>h)      // Checking Friend Height > Fence Height
        {
            count1++;
        }
        else
            count2++;
    }
    cout << count1*2 + count2*1 << endl;    // Width of the Road
}

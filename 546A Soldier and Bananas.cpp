// 546A. Soldier and Bananas

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,w,n;  // k = Banasan's Cost,  n = initial num Dollars,    w = num of Banana's

    cin >> k >> n >> w;

    int cost = k*w*(w+1)/2;      // Calculating Costs // For w Banana's Cost = w*(w+1)/2

    if(cost<=n)     // when doesn't need to Borrow
    {
        cout << 0 <<endl;
    }
    else if(n==0)   // Soldier don't have money
    {
        cout << cost << endl;
    }
    else            // Borrow money
    {
        cout << cost-n <<endl;
    }
    return 0;
}

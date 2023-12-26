// 318A Even Odds

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;

    cin >> n >> k;  // n = total numbers(Natural),  k = position of numbers for find out

    if(n%2==0)  // if n = Even Number
    {
        if(k<=n/2)   // k<n/2 = where k places in >>> First Half >>> Contains only Odd Numbers(1,3,5,7,9........)
        {
            cout << 2*k-1 <<endl;   // k position value
        }
        else        // k>n/2 = where k places in >>> Second Half >>> Contains only Even Numbers(2,4,6,8,10........)
        {
            cout << (k-n/2)*2 <<endl;   // k position value
        }
    }

    else    // if n = Odd Number
    {
       if(k<=(n+1)/2)    // for First Half(1,3,5,7.....)
       {
           cout << 2*k-1 <<endl;
       }
       else             // for Second Half(2,4,6,8....)
       {
           cout << (k-(n+1)/2)*2 <<endl;
       }
    }
}


// 486A Calculating Function

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    cin >> n;   // n = number of integers

    if(n%2==0)
    {
        cout << n/2 <<endl;     // if  n = Even number
    }
    else
    {
        cout << -(n+1)/2;       // if n = Odd number
    }
}

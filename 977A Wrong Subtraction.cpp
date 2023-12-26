// 977A Wrong Subtraction

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    cin >> n >> k;

    for(int i=0; i<k; i++)
    {
        if(n%10==0)     // if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
        {
            n = n/10;
        }
        else        // if the last digit of the number is non-zero, she decreases the number by one
        {
            n = n-1;
        }
    }
    cout << n << endl;
    return 0;
}

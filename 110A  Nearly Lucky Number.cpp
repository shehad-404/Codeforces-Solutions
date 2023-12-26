// 110A Nearly Lucky Number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int count=0;

    cin >> n;

    while(n!=0)
    {
        if(n%10==4 || n%10==7)      // Checking every Digits for Lucky Digits(4 or 7)
        {
        count++;                    // Counting total numbers of Lucky Digits
        }
        n = n/10;
    }

    if(count==4 || count==7)       // a Number Nearly Lucky == if the Total Number of Lucky Digits in it is a Lucky Number
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }

    return 0;
}

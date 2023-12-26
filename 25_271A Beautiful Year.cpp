// 721A Beautiful Year

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    int a,b,c,d;

    cin >> y;

    while(y) // 1987
    {
        y++;
        a = y/1000;        //  a = 1st Digit
        b = y/100 % 10;     // b = 2nd Digit
        c = y/10 % 10;      //  c = 3rd Digit
        d = y%10;           // d = 4th Digit

        if( a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)       // checking all a,b,c,d are not same digit
        {
            cout << y;
            break;
        }
    }
    return 0;
}

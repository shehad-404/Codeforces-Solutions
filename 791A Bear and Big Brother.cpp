// 791A Bear and Big Brother

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;

    cin >> a >> b;

    int count=0;
    while(a<=b) // condition = Limak's weight <= Bob's weight
    {
        a = 3*a;    // Limak's Weight Tripled every year
        b = 2*b;    // Bob's Weight Doubled every year
        count++;    // Counting Years numbers

        if(a>b)     // When Limak's Weight is Greater than Bob's
        {
            cout << count <<endl;
            break;
        }
        else
            continue;
    }
}

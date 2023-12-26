// 467A George and Accommodation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;

    cin >> n;   // n = number of rooms

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;      // a = Living People,   b = Room Capacity

        if(a<b)     // checking if >>> Living People(a) < Room Capacity(b)
        {
           count++;     // Counting Empty room
        }
        else
            continue;
    }
    cout << count <<endl;

    return 0;
}

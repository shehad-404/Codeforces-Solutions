// 116A Tram

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    int current = 0, capacity = 0;

    cin >> n;   // Numbers of stops

    while(n)
    {
        cin >> a >> b;      // a = exit numbers of passengers,  b = entry numbers of passengers

        current = current + b;     // current = current + entry(b)
        current = current - a;      // current = current - exit(a)

        capacity = max(capacity,current);      // Finding Capacity

        n--;
    }
    cout << capacity << endl;
}

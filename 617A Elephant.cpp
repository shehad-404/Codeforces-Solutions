// 617A Elephant

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    cin >> x;

    if(x<=5)    // if x is less than or equal to 5 >>> then it needs only 1 Steps.
    {
        cout << "1"<<endl;
    }
    else
    {
        // when x>5 = needs to count min steps where maximum move is 5
        double step = (double) x/5;
        cout << ceil(step);
    }
    return 0;
}

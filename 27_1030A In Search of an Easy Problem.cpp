// 1030A In Search of an Easy Problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,count=0;

    cin >> n;   // n = number of people

    for(i=0; i<n; i++)
    {
        cin >> j;   // people opinions  0 = Easy,   1 = Hard

        if(j == 1)  // Checking at least one Opinion is Hard = 1
        {
            count++;
        }
        else
            continue;
    }

    if(count !=0)   // Checking if Count is changes or not
    {
        cout << "HARD"<<endl;
    }
    else
    {
        cout << "EASY"<<endl;
    }
}

// A. Boy or Girl

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i, count = 0;

    cin >> str;

    int len = str.length();

    sort(str.begin(),str.end());    // Sorting the String

    for(i=1; i<len; i++)
    {
        if(str[i] != str[i-1])
            count++;            // Counting The Distinct Character = count + 1
    }

    if((count+1)%2 != 0)
        cout << "IGNORE HIM!" << endl;

    else
        cout << "CHAT WITH HER!" << endl;

}

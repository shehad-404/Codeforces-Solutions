// 734A Anton and Danik

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=0,count2=0;
    string str;

    cin >> n >> str;

    for(int i=0; i<n; i++)
    {
        if(str[i]=='A')     // Counting Anton's number of Wins
        {
            count1++;
        }
        else
        {
            count2++;       // Counting Danik's number of Wins
        }
    }

    if(count1>count2)
    {
        cout << "Anton"<<endl;
    }
    else if(count1<count2)
    {
        cout << "Danik"<<endl;
    }
    else
    {
         cout << "Friendship"<<endl;
    }
}

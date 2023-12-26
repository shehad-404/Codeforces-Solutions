// 96A Football

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int count1=0, count2=0, count3=0;

    cin >> str;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='0')  // Checking 7 Players stands one after another For "0" combination
        {
            count1++;
            count2 = 0;
        }
        else               // Checking 7 Players stands one after another For "1" combination
        {
            count2++;
            count1 = 0;
        }

        if(count1>=7 || count2>=7)
        {
            count3 = 1;
        }
    }

    if(count3 == 1) //situation is Dangerous
    {
        cout << "YES"<<endl;
    }
    else                        // situation is Not Dangerous
        cout << "NO"<<endl;
}

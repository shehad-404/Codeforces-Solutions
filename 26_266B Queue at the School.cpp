// 266B Queue at the School

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i;
    string s;

    cin >> n >> t;  // n = numbers of children,    t = times
    cin >> s;   // taking String

    while(t)
    {
        for(i=0; i<n; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')    // checking if G = Girl is behind  B = Boy or not
            {
                s[i]='G';   // Change position s[i] & s[i+1] values
                s[i+1]='B';
                i++;        // i++  for skipping the check s[i+1]='B' position again
            }
        }
        t--;
    }
    cout << s<<endl;

    return 0;
}

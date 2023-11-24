// 71A. Way Too Long Words

#include<iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;

    while(n--)
    {

        cin >> s;
        int len = s.length();

        if(len > 10)
            {
                cout << s[0] << len-2 << s[len-1] << endl;
            }
        else
            {
                cout << s << endl;
            }
    }
    return 0;
}



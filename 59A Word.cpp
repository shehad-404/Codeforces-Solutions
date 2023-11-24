// word

#include<iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int len = str.size();

    int upperCase = 0;
    int lowerCase = 0;

    for(int i=0 ;i<len; i++)
    {
        if(str[i] >= 65 && str[i] <= 90) // 'A' = 65 , 'Z' = 97
        {
            upperCase++;
        }
        else
        {
            lowerCase++;
        }
    }
    if(upperCase > lowerCase)
    {
        for(int i=0 ;i<len; i++)
        {
            if(str[i] >= 97 && str[i] <= 122)  // 'a' = 97 , 'z' = 122
            {
                str[i] = str[i] - 32;
            }
        }
    }
    else
    {
        for(int i=0 ;i<len; i++)
        {
            if(str[i] >= 65 && str[i] <= 90)
            {
                str[i] = str[i] + 32;
            }
        }
    }
    cout<<str<<endl;

}

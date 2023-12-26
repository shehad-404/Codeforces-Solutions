// 118A String Task

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;  // str1 = for User input & str2 = for Final String

    cin >> str1;

    for(int i=0; i<str1.size(); i++)
    {
        str1[i] = tolower(str1[i]);   // Transform to Lowercase Letters

        // If not Vowel then it will add dots(.) before consonant
        if(str1[i]!='a' && str1[i]!='e' && str1[i]!='i' && str1[i]!='o' && str1[i]!='u' && str1[i]!='y')
        {
            str2 = str2+'.';        // Adding Dots(.)
            str2 = str2+str1[i];    // Adding other letters
        }
    }
    cout << str2;
}

// 112A Petya & Strings

#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    string str1, str2;
    int i;

    cin >> str1;
    cin >> str2;

    int len = str1.size();


    for(i=0 ; i<len ;i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i] = str1[i] + 32;   // UpperCase to LowerCase



        if(str2[i]>='A' && str2[i]<='Z')
            str2[i] = str2[i] + 32;     // UpperCase to LowerCase
    }

        // Checking Condition is it Matched or not
        if(str1<str2)
        {
           cout <<"-1"<<endl;
        }


        else if(str1>str2)
        {
                cout << "1"<<endl;
        }
        else
        {
                cout << "0"<<endl;
        }

    return 0;

}

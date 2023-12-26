// 339A Helpful Maths

#include<bits/stdc++.h>
using namespace std;

// Swapping function
void swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    string str;
    int i,j;

    cin >> str;

    for(i=0; i<str.size(); i=i+2)
    {
       for(j=i+2; j<str.size(); j=j+2)
       {
            if(str[i]>str[j])
        {
            swap(str[i],str[j]);    // function call for Swapping two values
        }
       }
    }
    cout << str;
}




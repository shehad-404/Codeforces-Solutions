// To My Critics

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int a,b,c;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin >> a >> b >> c;

        if(a+b >= 10 || b+c >= 10 || c+a >= 10)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
}

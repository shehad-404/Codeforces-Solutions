// 69A Young Physicist

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i;
    int x,y,z;
    int sumx = 0,sumy = 0 ,sumz = 0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> x >> y >> z;  // taking Xi, Yj, Zk input

        sumx = sumx + x;    // sumx =  finding sum of all Xi
        sumy = sumy + y;    // sumy = finding sum of all Yj
        sumz = sumz + z;    // sumz = finding sum of all Zk
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        cout << "YES"<<endl;
    }
    else
        cout << "NO"<<endl;

    return 0;
}

// 1A Theatre Square

#include<iostream>
#include<cmath>
using namespace std;
int main(){

    long long m,n,a;

    cin >> m >> n >> a;

    long long result = ceil((double)m/a) * ceil((double)n/a);

    cout << result;
}

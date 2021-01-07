#include <bits/stdc++.h>
using namespace std;
int y; int m;

int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    cin >> y >> m;
    if((y%4 == 0 && y%100 != 0) || y%400 == 0)a[2] = 29;
    cout << a[m];
    return 0;
}
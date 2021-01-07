#include <bits/stdc++.h>
using namespace std;
int n, x;
int main() {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (a[j] > a[i])
                ++x;
    cout << x;
    return 0;
}
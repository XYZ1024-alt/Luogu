#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long i=1,r,mid,n,a;
    cin >> n;
    r = n;
    while (i < r) {
        mid=(i + r)/2;
        if(mid*(mid+1)/2 < n)i=mid + 1;
        else r = mid;
    } 
    a=n-i*(i-1)/2;
    if(i%2==0)cout << a << '/' <<i+1-a;
    else cout<< i+1-a << '/' <<a;
    return 0;
}

/*
Cantor表| P1014
题目描述
现代数学的著名证明之一是 Georg Cantor 证明了有理数是可枚举的。他是用下面这一张表来证明这一命题的：

1/11/1 , 1/21/2 , 1/31/3 , 1/41/4, 1/51/5, …

2/12/1, 2/22/2 , 2/32/3, 2/42/4, …

3/13/1 , 3/23/2, 3/33/3, …

4/14/1, 4/24/2, …

5/15/1, …

…

我们以 Z 字形给上表的每一项编号。第一项是 1/11/1，然后是 1/21/2，2/12/1，3/13/1，2/22/2，…

输入输出格式
输入格式

整数NN（1 \leq N \leq 10^71≤N≤10 
7
 ）。

输出格式

表中的第 NN 项。

输入输出样例
输入1 :

7

输出1 :

1/4
*/
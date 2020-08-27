#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int k,i = 0;
    double m = 0.0000;
    cin >> k;
    do {
        i++;
        m = m + (1.0/i);
    } while (m <= k);
    printf("%d",i);
    return 0;
}

/*
级数求和| P1035
题目描述
已知：S_n= 1+1/2+1/3+…+1/nS 
n
​	 =1+1/2+1/3+…+1/n。显然对于任意一个整数 kk，当 nn 足够大的时候，S_n>kS 
n
​	 >k。

现给出一个整数 kk，要求计算出一个最小的 nn，使得 S_n>kS 
n
​	 >k。

输入输出格式
输入格式

一个正整数 kk。

输出格式

一个正整数 nn。

输入输出样例
输入1 :

1

输出1 :

2

说明/提示
【数据范围】
对于 100\%100% 的数据，1\le k \le 151≤k≤15。
*/
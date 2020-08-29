#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
   int r1,s;
   scanf("%d%d",&r1,&s);
   printf("%d\n",2*s-r1);
   return 0;
}
/*
[COCI2006-2007#2] R2| P4413
题意翻译
设S=(R1+R2)/2，给定R1与S (-1000<=R1,S<=1000)(−1000<=R1,S<=1000)，求R2。

感谢@Xeonacid 提供的翻译

题目描述
The number S is called the mean of two numbers R1 and R2 if S is equal to (R1+R2)/2. Mirko's birthday present for Slavko was two integers R1 and R2. Slavko promptly calculated their mean which also happened to be an integer but then lost R2! Help Slavko restore R2.

输入输出格式
输入格式

The first and only line of input contains two integers R1 and S, both between -1000 and 1000.

输出格式

Output R2 on a single line.

输入输出样例
输入1 :

11 15

输出1 :

19

输入2 :

4 3

输出2 :

2

说明/提示
*/

// 含有错误的程序
#include<stdio.h>
int main(void)
(
    int n, int n2, int n3;
    /* 该程序含有几个错误

    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
    return 0;
)

/*
错误地方：
1、main后面是括号（）而不是花括号{}

2、声明变量时错了，应该是这样：
int n;
int n2;
int n3;

3、第6行注释符合未完整

4、printf()后面没有；号

正确的程序请看c5.c

*/
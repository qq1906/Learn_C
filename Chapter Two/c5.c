// 修正了语法错误的程序

#include<stdio.h>
int main(void)
{
    int n;
    int n2;
    int n3;
    /* 该程序含有几个错误 */

    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;
}

/*
2019年05月04日10:47
运行环境 Centos7 + vscode 1.36.1 + gcc 4.8.5
运行结果：

n = 5, n squared = 25, n cubed = 625

 */
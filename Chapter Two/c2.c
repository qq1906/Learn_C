// 把两个fathons 换算成英尺

#include<stdio.h>
int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}

/*
2019年05月04日10:47
运行环境 Centos7 + vscode 1.36.1 + gcc 4.8.5
运行结果：

There are 12 feet in 2 fathoms!
Yes, I said 12 feet!

 */
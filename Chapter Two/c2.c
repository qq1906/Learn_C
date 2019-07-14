// 把两个fathons 换算成英尺

#include<stdio.h>
int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    system("pause");
    return 0;
}

/*
2019年05月04日10:47
运行环境 win10 + vscode 1.33.1 + MinGW 6.3.0
运行结果：

There are 12 feet in 2 fathoms!
Yes, I said 12 feet!
请按任意键继续. . .

 */
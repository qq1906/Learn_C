// 第一个C程序

# include<stdio.h>
int main(void)
{
    int num;        // 定义一个名为num的变量
    num = 1;        // 为num赋一个值

    printf("I am a simple ");       // 使用printf（）函数
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n", num);

    return 0;
}



/*
2019年05月04日10:47
运行环境 Centos7 + vscode 1.36.1 + gcc 4.8.5
运行结果：

I am a simple computer.
My favorite number is 1 because it is first.

 */
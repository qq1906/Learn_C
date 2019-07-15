// 一个文件中使用两个函数

#include<stdio.h>
void butler(void);      // ISO/ANSI C函数原型
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");

    return 0;
}

void butler (void)      // 函数定义的开始
{
    printf("You rang, sir?\n");
}

/*
2019年05月04日10:47
运行环境 Centos7 + vscode 1.36.1 + gcc 4.8.5
运行结果：

I will summon the butler function.
You rang, sir?
Yes. Bring me some tea and writeable CD-ROMS.

 */
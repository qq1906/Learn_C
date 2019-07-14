// 一个文件中使用两个函数

#include<stdio.h>
void butler(void);      // ISO/ANSI C函数原型
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");

    system("pause");
    return 0;
}

void butler (void)      // 函数定义的开始
{
    printf("You rang, sir?\n");
}

/*
2019年05月04日10:47
运行环境 win10 + vscode 1.33.1 + MinGW 6.3.0
运行结果：

I will summon the butler function.
You rang, sir?
Yes. Bring me some tea and writeable CD-ROMS.
请按任意键继续. . .

 */
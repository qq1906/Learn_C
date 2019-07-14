第二章的习题

1.如何称呼C程序的基本模块？
它们被称为函数。

2.什么是语法错误？给出它的一个英语例子和C语言例子。
语法错误就是指违背了如何把语句或程序放置在一起的规则。这是英语中的一个例子：“Me speak English good.”下面是C语言中的一个例子：
printf "Where are the parentheses?";

3.什么是语义错误？给出它的一个英语例子和C语言例子。

4.Indiana Sloth 已经编好了下面的程序，并想征求您的意见。请帮助他评定。

include stido.h
int main{void} /* 该程序可显示一年中有多少个周 */
(
    int s
    
    s: = 56;
    printf(There are a week in a year.);
    return 0;

5.假设下面的每一个例子都是某个完整程序的一部分，它们每个将输出什么结果？
a. printf("Baa Baa Sheep.");
   printf("Have you any wool?\n");

b. printf("Begone!\nO creature of lard!");

c. printf("What?\nNO/nBonzo?\n");

d.  int num;

    num = 2;
    printf("%d + %d = %d", num, num, num + num);

6. 下面哪几个是C的关键字？main, int, function, char, =

7. 如何以下面的格式输出 words 和 lines 的值：“There were 3020 words and 350 lines”？这里，3020 和 350 代表两个变量的值。

8. 考虑下面的程序：
#include <stdio.h>
int main(void)
{
    int a , b;

    a = 5;
    b = 2;  /* 第7行 */
    b = a;  /* 第8行 */
    a = b;  /* 第9行 */
    printf("%d %d\n", b, a);
    return 0;
}
请问在第 7 行、第 8 行和第 9 行之后程序的状态分别是什么？


测试中文回车  
测试中文回车

test English 
test

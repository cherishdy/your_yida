
一、改错题
1.
#include <stdio.h>

int main()
{
    int a = 10++;
    
    int b = 10.0 % 2;
    return 0;
}


二.	分析题

1、请写出下面代码的执行结果

#include <stdio.h>

int main()
{
    int a = 20;
    int score = a + 100;
    printf("%d\n", score);
    
    {
        int score = 50;
        {
            score = 10;
            printf("%d\n", score);
        }
        a = 10;
    }
    
    {
        score = a + 250;
        int score = 30;
        printf("%d", score);
    }
    
    printf("%d\n", score);
    return 0;
}
三、填空题

1． 设int x=9,y=8; 表达式x == y + 1的结果是________
2． 定义int x, y; 执行y =(x = 1, ++x, x + 2);后, y的值是________。
3． 定义int x = 10, y, z; 执行y = z = x; x = y == z; 后， x的结果是________。
4． 设int a=2,b=3,c,d,e,f; 执行
c=(a++>= --b);
d=(a==++b);
e=(a--!=b);
f=(++a>b--);
请问a,b,c,d,e,f的结果是：____。

三、选择题
1． 能正确表示“当x的取值在[-58,-40]并且[40,58]范围内为真，否则为假”的表达式是（  ）。
A．(x>= -58) && (x<= -40) && (x>=40) && (x<=58)
B．(x>= -58) || (x<= -40) || (x>=40) || (x<=58)
C．(x>= -58) && (x<= -40) || (x>=40) && (x<=58)
D．(x>= -58) | |(x<= -40) && (x>=40) || (x<=58)


2．执行以下语句后，y 的值为（）。
int x,y,z;
x=y=z=0;

++x || ++y && ++z;

A．0              B．1             C．2             D．不确定值

三.编程题
1.输入两个数，打印（printf）这两个数的和、差、积、商、以及余数。

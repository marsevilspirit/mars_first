#include<stdio.h>
int func(int a, int b) {//这个函数用位运算实现加法
    if (!a) return b;//当进位信息为0时，加法完成
    return func((a & b) << 1, a ^ b);//(a & b) << 1为进位信息，a ^ b为无进位加法
}
int main(void) {
    int a = 4, b = 9, c = -7;
    printf("%d\n", func(a, func(b, c)));//先实现b + c ,后实现a + (b + c)
}
//减法a - b可以看成a + (-b), -b =  ~b + 1

/*************************************************************************
	> File Name: byte.c
	> Author: JiachengLi
	> Mail: lijiacheng1815@163.com 
	> Created Time: 2021年05月29日 星期六 14时53分09秒
 ************************************************************************/

#include<stdio.h>

int num2 = 20; //全局变量- 定义在大括号{} (代码块)之外的变量 

int main()
{
	// 年龄
	// 20
	short age = 20; //向内存申请2个字节= 16bit, 用来存放20
	float weight = 94.2; //像内存申请四个字节，存放小数
	int num2 = 10;
	printf("num2 = %d\n", num2);

	return 0;
}

#include <stdio.h>

int g_val = 10000000;

// static修饰全局变量，使得这个全局变量只能在自己所在的源文件(.c）内部可以使用其他源文件不能使用!
// 全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
// 但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了!
static int g__val = 2022;

// static修饰函数，使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用
// 本质上 ： static是将函数的外部链接属性变成了内部链接属性!（和static修饰全局变量一样!)
static int Add_(int x, int y)
{
	return x+y;
}
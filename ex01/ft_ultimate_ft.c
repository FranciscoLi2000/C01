#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/* 这里，如果我们不声明变量的话，可以直接把想要的数值赋给指针
 * '*' 在这里也是一元运算符，即"解引用"，告诉指针指向一个我们想要的值
 * 通过这个方法，我们可以用指针修改一个变量存储的值 */

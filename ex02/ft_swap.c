#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;	/* 我们需要一个临时变量（temporary）来进行交换值操作 */

	temp = *a;	/* 解引用，因为我们要修改原指针存放的值 */
	*a = *b;
	*b = temp;	/* 没有临时变量的话，会发生什么呢？嘿嘿，你可以自己试一下 */
}

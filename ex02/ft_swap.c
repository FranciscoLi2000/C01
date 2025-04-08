#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;	/* 我们需要一个临时变量（temporary）来进行交换值操作 */

	temp = *a;	/* 解引用，因为我们要修改原指针存放的值 */
	*a = *b;
	*b = temp;	/* 没有临时变量的话，会发生什么呢？嘿嘿，你可以自己试一下 */
}

int	main(void)
{
	int	x;
	int	y;

	x = 34;
	y = 42;
	printf("Original x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("New: x = %d, y = %d\n", x, y);
	return (0);
}

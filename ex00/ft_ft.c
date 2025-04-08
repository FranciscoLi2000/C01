#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/* 每一个变量都有一个内存位置
 * 每一个内存位置都定义了可使用 & 运算符访问的地址
 * 它表示了在内存中的一个地址 */

int	main(void)
{
	int	x;
	int	*ptr;

	x = 0;
	ptr = &x;
	ft_ft(ptr);
	printf("%i\n", *ptr);
	printf("%p\n", ptr);
	return (0);
}

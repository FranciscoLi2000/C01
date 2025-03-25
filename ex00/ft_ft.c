#include <unistd.h>

void	ft_ft(int *nbr)
{
	int	x;/* 假设我们声明了一个int型变量 */

	x = 42;
	*nbr = x;
}
/* 每一个变量都有一个内存位置
 * 每一个内存位置都定义了可使用 & 运算符访问的地址
 * 它表示了在内存中的一个地址 */

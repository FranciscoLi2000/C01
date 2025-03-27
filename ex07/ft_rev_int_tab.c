#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size) /* 关于两个input的参数：tab是int型数组，size是该数组的长度 */
{
	int	tmp;
	int	i;
	int	j;/*两个循环计数器 */

	i = 0;		/* 一个从数组的头部开始 */
	j = size - 1;	/* 另一个从尾部 */
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		j--;
		i++;
	}
}
/* 循环从头至尾，进行交换 */

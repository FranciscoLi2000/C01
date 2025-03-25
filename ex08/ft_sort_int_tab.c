#include <unistd.h>
/* 根据题意，这个练习让我们实现冒泡排序算法 */
void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1) /* 外循环：遍历数组 排序*/
	{
		j = 0;
		while (j < size - 1 - i)	/* 内循环：遍历数组 排序 */
		{
			if (tab[j] > tab[j + 1])	/* 比较相邻数据 */
			{
				tmp = tab[j];		/* swap */
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

/* 这个练习，可以先用一个循环看看有什么问题，你就了解为什么需要循环嵌套了 */

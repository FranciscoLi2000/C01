#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/* 这道题也可以用两个临时变量 */

int	main(void)
{
	int	x;
	int	y;

	x = 12455;
	y = 34;
	ft_ultimate_div_mod(&x, &y);
	printf("div = %d\nmod = %d\n", x, y);
	return (0);
}

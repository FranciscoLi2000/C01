#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 47;
	y = 6;
	ft_div_mod(x, y, &div, &mod);
	printf("div = %i\nmod = %i\n", div, mod);
	return (0);
}

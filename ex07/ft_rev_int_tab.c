#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];  // Definir tmp dentro del bucle
		tab[i] = tab[j];
		tab[j] = tmp;
		j--;
		i++;
	}
}

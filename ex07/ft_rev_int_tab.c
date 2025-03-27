#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int j = size - 1;

	while (i < j)
	{
		int tmp = tab[i];  // Definir tmp dentro del bucle
		tab[i] = tab[j];
		tab[j] = tmp;
		j--;
		i++;
	}
}

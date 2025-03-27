#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;
	int	swapped;  // Nueva variable para detectar si hubo intercambios

	i = 0;
	while (i < size - 1)
	{
		swapped = 0;  // Reiniciamos en cada iteración
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
				swapped = 1;  // Hubo intercambio
			}
			j++;
		}
		if (swapped == 0)  // Si no hubo intercambios, ya está ordenado
			break;
		i++;
	}
}

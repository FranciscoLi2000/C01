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
			break ;
		i++;
	}
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	size;
	int	i;
	int	*numbers;

	if (argc < 2)
	{
		printf("Usage: %s num1 num2 ...\n", argv[0]);
		return (1);
	}
	size = argc - 1;
	numbers = malloc(size * sizeof(int));
	if (!numbers)
	{
		fprintf(stderr, "Memory allocation error\n");
		return (1);
	}
	for (i = 0; i < size; i++)
		numbers[i] = atoi(argv[i + 1]);
	ft_sort_int_tab(numbers, size);
	for (i = 0; i < size; i++)
		printf("%d ", numbers[i]);
	printf("\n");
	free(numbers);
	return (0);
}

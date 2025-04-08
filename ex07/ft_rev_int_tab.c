#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		j--;
		i++;
	}
}

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
	ft_rev_int_tab(numbers, size);
	for (i = 0; i < size; i++)
		printf("%d ", numbers[i]);
	printf("\n");
	free(numbers);
	return (0);
}

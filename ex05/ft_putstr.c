#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0') /* 指针遍历数组或字符串 */
	{
		write(1, &(*str), 1);
		str++;
	}
	/* 这里不用加 NUL 字符，只是输出字符串就好 */
}

int	main(void)
{
	char	str[50];

	printf("Enter a string: ");
	scanf("%s", str);
	printf("Result: %s\n", str);
	return (0);
}

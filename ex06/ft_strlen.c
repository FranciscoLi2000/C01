#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;		/* 这里可以用一个循环计数器 */
	while (str[i] != '\0')
		i++;	/* 当i走完整个字符数组（字符串），我们就得到了输入字符串的长度 */
	return (i);
}

int	main(void)
{
	char	str[50];

	printf("Input a string: ");
	scanf("%s", str);
	printf("Original strlen %ld\n", strlen(str));
	printf("My function %d\n", ft_strlen(str));
	return (0);
}

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0') /* 指针遍历数组或字符串 */
	{
		write(1, &(*str), 1);
		str++;
	}
	/* 这里不用加 NUL 字符，只是输出字符串就好 */
}

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "123456";
	str_invalid = "123A56";
	printf("should be 1: %d\n", ft_str_is_numeric(str_valid));
	printf("should be 0: %d\n", ft_str_is_numeric(str_invalid));
}

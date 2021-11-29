#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "HELLO";
	str_invalid = "";
	printf("should be 1: %d\n", ft_str_is_uppercase(str_valid));
	printf("should be 1: %d\n", ft_str_is_uppercase(str_invalid));
}

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("ilk   : %s\n", src);
	ft_strcpy(dest, src);
	printf("ft_cpy : %s\n", dest);
}

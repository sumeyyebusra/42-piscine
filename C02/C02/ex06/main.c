#include <unistd.h>

int ft_str_is_printable(char *str);

int main(void){
	int i;
	char c;
	i = ft_str_is_printable("	");
	c = i + '0';
	write(1,&c,1);
	return(0);
}

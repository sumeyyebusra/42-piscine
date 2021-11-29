#include <unistd.h>

int ft_strlen(char *str){
	int i;

	i = 0;
	while (str[i] != '\0'){
		i++;
	}
	return (i);
}

void ft_putstr(char *str){
	int i;

	i = 0;
	while (str[i] != '\0'){
		write(1,&str[i],1);
		i++;
	}
}

int main(int ac, char **avg){
	
	int i;
	char tmp;
	int len;

	i = 0;
	if (ac == 2){
		len = ft_strlen(avg[1]);
		len--;
		while(i<len){
			tmp = avg[1][i];
			avg[1][i] = avg[1][len];
			avg[1][len] = tmp;
			len--;
			i++;
		}
		ft_putstr(avg[1]);
	}
	write(1,"\n",1);
	return (0);
}

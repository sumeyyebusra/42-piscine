#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src){
	int i = 0;
	int len = ft_strlen(src);
	char *p = (char*)malloc(len + 1 * sizeof(char));
	
	if (p == NULL)
		return (NULL);
	while (src[i] != '\0'){
		p[i] = src[i];
		i++;	
	}
	p[i] = '\0';
	return(p);
}

int main(){
	ft_strdup("busra");
}

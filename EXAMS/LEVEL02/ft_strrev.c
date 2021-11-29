int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *str){
	int i = 0;
	int len = ft_strlen(str) - 1;
	char tmp;

	while (i < len){
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
		i++;
	}
	return(str);
}

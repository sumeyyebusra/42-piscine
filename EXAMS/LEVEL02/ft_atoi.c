#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str){
	int i;
	int n;
	int result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] == '-'){
		n = -1;
		i++;
	}
	while (str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9'){
		result = (result*10) + (str[i] -'0');
		i++;
	}
	return(result * n);
}

int main(){
	int a;
	a = ft_atoi("-----+575");
	printf("%d",a);
}

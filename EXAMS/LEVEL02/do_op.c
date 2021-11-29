#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **avg){
	int a;
	int b;
	char op;
	int result;

	if(ac == 4){
		a = atoi(avg[1]);
		b  = atoi(avg[3]);
		op = avg[2][0];

		if (op == '+')
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
			result = a / b;
		else if (op == '%')
			result = a % b;
		printf("%d\n",result);

	}
	else
		write(1,"\n",1);
	return (0);
}

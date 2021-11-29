#include <unistd.h>

int main(int ac, char **avg){
	int i;

	i = 0;
	if (ac == 2){
		while (avg[1][i] != '\0'){
			if (avg[1][i] == 'a'){
				write(1,"a\n",2);
				return (0);
			}
			i++;
		}
		write(1,"\n",1);
		return(0);
	}
	write(1,"a\n",2);
	return (0);
}

#include <unistd.h>

int main(int ac, char **avg){
	int i;

	i = 0;
	if (ac > 1){
		while(avg[ac-1][i] != '\0'){
			write(1,&avg[ac-1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}

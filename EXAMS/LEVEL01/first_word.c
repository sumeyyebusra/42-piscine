#include <unistd.h>

int main(int ac, char **avg){
	int i;

	i = 0;
	if (ac == 2){
		while (avg[1][i] == ' ' || avg[1][i] == '\t')
			i++;
		while(avg[1][i] != '\0' && avg[1][i] != ' ' && avg[1][i] != '\t'){
			write(1,&avg[1][i],1);
			i++;
		}	
	}
	write(1,"\n",1);
	return (0);
}

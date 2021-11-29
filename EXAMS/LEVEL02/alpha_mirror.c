#include <unistd.h>

int main(int ac, char **avg){
	int i;

	i = 0;
	if (ac == 2){
		while(avg[1][i] != '\0'){
			if(avg[1][i] >= 'A' && avg[1][i] <= 'Z')
				avg[1][i] = 'M' - (avg[1][i] - 'N');	
			else if (avg[1][i] >= 'a' && avg[1][i] <= 'z')
				avg[1][i] = 'm' - (avg[1][i] - 'n');
			write(1,&avg[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);

}


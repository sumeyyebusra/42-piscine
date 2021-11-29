#include <unistd.h>

int main(int ac, char **avg){
	int i = 0;
	char *lw;

	if(ac == 2){
		while(avg[1][i] != '\0'){
			if (avg[1][i] <= 32 && avg[1][i+1] > 32){
				lw = &avg[1][i+1];
			}
			i++;
		}
		i = 0;
		while (lw && lw[i] > 32){
			write(1,&lw[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}

#include <unistd.h>

int main(int ac, char **avg){
	int i;

	i = 0;
	if(ac == 4){
		while(avg[1][i] != '\0'){
			if (avg[2][1] == '\0' && avg[3][1] == '\0'){
				if (avg[1][i] == avg[2][0])
					write(1,&avg[3][0],1);
				else
					write(1,&avg[1][i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}

#include <stdio.h>

int max(int* tab, unsigned int len){
	int i = 0;
	int tmp;

	while (i < len-1){
		if (tab[i] < tab[i+1]){
			tmp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = tmp;
			i = -1;
		}
		i++;
	}
	return(tab[0]);
}

int main(){
	int r;
	int t[4] = {1,5,8,12};
	int *tab = t;
	unsigned int len = 4;
	r = max(tab,len);
	printf("%d",r);
}


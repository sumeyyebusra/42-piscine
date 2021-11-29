int	    is_power_of_2(unsigned int n){
	unsigned long a = 1;
	while (a < n && a < 0xffffffff){
		if (a == n)
			return(1);
		a *= 2; 
	}
	return 0;
}

int main(){
	is_power_of_2(9);
}

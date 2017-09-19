#include <stdio.h>

int sum_one_to_n(int n){
	return n*(n+1)/2;
}

int problem1(){
	return 3*sum_one_to_n(1000/3) + 5*sum_one_to_n(1000/5)
		-15*sum_one_to_n(1000/15);
}
int main(){
	printf("%d \n",problem1());
}


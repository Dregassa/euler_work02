#include <stdio.h>

int sum_squares(int n){
	return n*(n+1)*(2*n+1)/6;
}

int sum_from_one (int n){
	return n*(n+1)/2;
}

int problem6(int n){
	return sum_from_one(n)*sum_from_one(n) - sum_squares(n);	
}
int main(){
	printf("%d \n", problem6(10));
	printf("%d \n", problem6(100));
}

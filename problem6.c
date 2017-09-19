#include <stdio.h>

int sum_squares(int n){
	return n*(n+1)*(2*n+1)/6;
}

int sum_from_one (int n){
	return n*(n+1)/2;
}

int main(){
	int result = sum_squares(100) - sum_from_one(100)*sum_from_one(100);
	printf("%d \n", result);
}

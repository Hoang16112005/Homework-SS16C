#include <bits/stdc++.h>

int sum(int x, int y, int *result);
int main(){
	int a = 2;
	int b = 3;
	int ketQua;
	sum(a, b, &ketQua);
	printf("Result is: %d", ketQua);
}

sum(int x, int y, int *result){
	*result = x + y;
}

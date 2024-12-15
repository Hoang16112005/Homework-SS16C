#include <bits/stdc++.h>

int main(){
	int a = 5;
	printf("a value is: %d\n", a);
	printf("a address is: %d\n", &a);
	int *ptr;
	ptr = &a;
	printf("a value is: %d\n", *ptr);
	printf("a adress is: %d", ptr);
	return 0;
}

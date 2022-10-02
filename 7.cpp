#include<stdio.h>
int main(){
	

	int a[3], i;
	for(i = 0; i<3; i++)
		a[i] =  i * 5; 
	for(i = 0; i<3; i++)
	printf("a[%d] = %d\n", i, a[i]);
}

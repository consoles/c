#include <stdio.h>

void change(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(int argc, char const *argv[])
{
	int a = 5,b = 3;
	change(&a,&b);
	printf("a = %d\nb = %d\n",a,b);
	return 0;
}
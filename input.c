#include <stdio.h>

int main(int argc, char const *argv[])
{
	int item,count = 0,sum = 0;
	while(1){
		scanf("%d",&item);
		if (item == -1) break;
		count++;
		sum += item;
	}
	printf("%d %d\n",sum,count);
	return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[]) {
	fprintf(stdout, "hello world\n");
	int n;
	fscanf(stdin,"%d",&n);
	if (n < 0) {
		fprintf(stderr, "the value must greater than 0\n");
		return -1;
	} 
	fprintf(stdout, "your input is %d\n", n);
	return 0;
}

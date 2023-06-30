#include <stdio.h>
#include <stdint.h>
#include "fread4b.h"

int main(int argc, char* argv[]){
	uint32_t n1, n2, result;
	if(argc <=2){
		printf("not enought parameters\n");
		return 0;
	}
	n1 = fread4b(argv[1]);
	n2 = fread4b(argv[2]);
	result = n1+n2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", n1, n1, n2, n2, result, result);
	return 0;
}

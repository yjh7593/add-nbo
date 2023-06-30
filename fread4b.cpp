#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int fread4b(char * fname){
	uint32_t ret;
	uint32_t read_buf;
	FILE* fp = fopen(fname,"r");
	if (fp == NULL){
		printf("open error\n");
		return 1;
	}
	fread(&read_buf, sizeof(uint32_t), 1, fp);
	fclose(fp);

	ret = htonl(read_buf);

	return ret;
}



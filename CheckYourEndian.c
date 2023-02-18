#include <stdio.h>

int main(void){
	int data = 0x1234567;

	if(*((char *)&data) == 0x67) puts("Little Endian");
	else puts("Big Endian");
}

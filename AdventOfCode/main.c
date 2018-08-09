#include "common.h"

int main(void) {
	char* string = getDynamicSizeString();
	char* string2 = getDynamicSizeString();
	char* string3 = getDynamicSizeString();
	startTime();

	freeFromGC(string3);
	//printf("Teste: %s\n", string);
	string2 = getDynamicSizeString();

	freeGC();
	endTime();
	
	return 0;
}
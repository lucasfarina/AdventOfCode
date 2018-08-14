#include "day1.h"
#include <ctype.h>

int FindSumOfEquals() {
	printf("Please input captcha test: \n");
	int size = 0;
	char* input = getDynamicSizeString(&size);
	int sum = 0;
	int fail = 0;
	for (int i = 0; i < size; i++) {
		if (!isdigit(input[i])) {
			printf("The captcha test must be made of numbers only.\n");
			fail = 1;
			break;
		}

		int next = (i + 1 == size) ? 0 : i + 1;
		if (input[i] == input[next]) {
			sum += (charToInt(input[i]));
		}
	}

	if (fail == 0) {
		printf("The solution to the captcha is: %d\n", sum);
	}

	return 0;
}

int FindSumOfEqualsHalf() {
	printf("Please input captcha test: \n");
	int size = 0;
	char* input = getDynamicSizeString(&size);
	int sum = 0;
	int fail = 0;
	for (int i = 0; i < size; i++) {
		if (!isdigit(input[i])) {
			printf("The captcha test must be made of numbers only.\n");
			fail = 1;
			break;
		}
		int next = i + size / 2;
		next = next % size;
		if (input[i] == input[next]) {
			sum += (input[i] - '0');
		}
	}

	if (fail == 0) {
		printf("The solution to the captcha is: %d\n", sum);
	}

	return 0;
}
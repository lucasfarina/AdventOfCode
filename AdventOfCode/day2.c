#include "day2.h"
#include <ctype.h>

int spreadsheetCheckSum()
{
	int size = 0;
	char* input = NULL;
	int sum = 0;
	int fail = 0;
	int stop = 0;
	int nextRow = 2;
	int largest = 0;
	int smallest = 0;
	int row = 0;
	do {
		printf("Digit the next number in the row %d: (press * to enter next row, and empty to stop)\n", row);
		input = getDynamicSizeString(&size);
		if (size < 1) { stop = 1; sum += largest - smallest; break; }
		if (input[0] == '*') { nextRow = 1; }
		if (nextRow == 1) {
			sum += largest - smallest;
			largest = 0;
			smallest = 0;
			nextRow = 2;
			row++;
		}
		else if(nextRow == 2) {
			int number = stringToInt(input, size);
			largest = number;
			smallest = number;
			nextRow = 0;
		}
		else {
			int number = stringToInt(input, size);
			if (number < smallest) { smallest = number; }
			if (number > largest) { largest = number; }
		}


	} while (stop == 0);

	if (fail == 0) {
		printf("The checksum for this spreadsheet is: %d\n", sum);
	}

	return 0;
}

int teste()
{
	int size = 0;
	char* input = getDynamicSizeString(&size);
	printf("testando:\n%s", input);

	return 0;
}

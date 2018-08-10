#include "common.h"
#include "day1.h"

int main(void) {
	printf("[Enter the day -42 to stop the program] : not the answer to life the universe and everything\n");
	int chosenDay = -1;
	while (chosenDay <= 0 || chosenDay > 25) {
		printf("Please select a day to execute: \n");
		scanf(" %d", &chosenDay);
		int i;
		while (getchar() != '\n') {
			i = 0;
		}
		if (chosenDay == -42) { break; }
		int half;
		printf("Please select the half(<0> -> first half, <anything else> -> second half): \n");
		scanf(" %d", &half);
		while (getchar() != '\n') {
			i = 0;
		}

		switch (chosenDay)
		{
		case 1:
			if (half != 0) {
				FindSumOfEqualsHalf();
			}
			else {
				FindSumOfEquals();
			}
		default:
			chosenDay = -1;
			break;
		}
		printf("--------------------------------\n\n");
		freeGC();
	}

	freeGC();

	return 0;
}
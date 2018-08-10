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

		switch (chosenDay)
		{
		case 1:
			FindSumOfEquals();
		default:
			chosenDay = -1;
			break;
		}
		printf("--------------------------------\n");
		freeGC();
	}

	freeGC();

	return 0;
}
#include "common.h"
#include "day1.h"

int main(void) {
	//Present the stop protocol
	printf("[Enter the day -42 to stop the program] : not the answer to life the universe and everything\n");

	int chosenDay = -1;
	while (chosenDay <= 0 || chosenDay > 25) {
		printf("Please select a day to execute: \n");
		//get day input
		getInt(&chosenDay);

		if (chosenDay == -42) { break; }
		printf("Please select the half(<0> -> first half, <not zero> -> second half): \n");
		//get half input
		int half;
		getInt(&half);
		//delegate functions
		switch (chosenDay)
		{
		case 1:
			if (half != 0) {
				FindSumOfEqualsHalf();
			}
			else {
				FindSumOfEquals();
			}
			break;
		default:
			break;
		}
		//At the end turn chosenDay back to a non-valid value so the loop goes on
		chosenDay = -1;
		//print a separation for better reading
		printf("--------------------------------\n\n");
		//free primitive garbageCollector
		freeGC();
	}
	//free primitive garbageCollector to be safe
	freeGC();

	return 0;
}
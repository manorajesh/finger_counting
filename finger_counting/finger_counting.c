#include <stdio.h>

void main()
{
	int finger = 0;											//variable for finger (i.e. 1 is thumb, 2 is pointer, etc.)
	int number = 0;											//varible for number

	while (number <= 2000) {								//the loop will end when number is at 2000
		if (finger < 5) {									//only counting on one "hand" or 5 fingers
			++number;										//increment the number variable as it counts up on the finger
			++finger;										//increment the finger to next one
			if (number % 20 == 0) { printf("finger %d: %d\n", finger, number); }		//print here since two loops
		}
		else if (finger >= 5) {								//if finger counter is at pinky, go back to ring
			while (finger != 1) {							//once finger is back at thumb, go back to pointer
				--finger;									//going backwards in finger count
				++number;									//increasing number
				if (number % 20 == 0) { printf("finger %d: %d\n", finger, number); }	//print here since two loops
			}
		}
	}
}
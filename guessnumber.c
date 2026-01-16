#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TRUE -1
#define FALSE 0



int main(){

	char name [20];
	printf("What is your name? ");
	scanf("%s", name);
	printf("Hi, %s! \n", name);

	int keepGoing TRUE
	char guess[10];
	int turns = 7;
	srand(time(NULL));

	while (keepGoing){
		turns++;
		printf("Please guess the correct number: ");
		scanf(%s", guess);

		if (stcmp(guess, correct) == 0){
			printf("Winner winner, chicken dinner!");
			keepGoing = FALSE;
		} else {
			if (turns > 7){
				printf("Not good.");
				keepGoing = FALSE;
			if (turns < 7)
				printf("Not bad, but not good.")
				keepGoing = FALSE;
			}
		} // end else
	} //end while
return 0;
} //end main


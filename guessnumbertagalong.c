#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE -1

int main(){
	
	char name[10];
	int guess;
	int correct;
	int turns = 0;
	int keepGoing = TRUE;

	srand(time(NULL));
	// where i got confused v
	correct = (rand() % 100) +1;

	printf("Correct: %d \n", correct);

	printf("Hello, what's your name? ");
	scanf("%s", name);

	printf("Nice to meet you %s. I am going to make you try to guess the number! \n", name);

	while (keepGoing == TRUE){
		turns++;
		printf("Turn %d. Guess the number: ", turns);
		scanf("%d", &guess);

		if (guess < correct){
			printf("Too low. \n");
		} else if (guess > correct)
			printf("Too high. \n");
		} else {
			printf("Nice one! \n");
			keepGoing = FALSE;
		} // ending if

	} // ending while
	return 0;
}


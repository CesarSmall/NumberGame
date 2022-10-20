#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int randomizereasy() {
	int MIN = 0;
	int MAX = 10;
	int MystNum;
	srand(time(NULL));
	MystNum = (rand() % (MAX - MIN + 1) + MIN);


	return MystNum;
}

int randomizermed() {
	int MIN = 0;
	int MAX = 100;
	int MystNum;
	srand(time(NULL));
	MystNum = (rand() % (MAX - MIN + 1) + MIN);


	return MystNum;
}

int randomizerhard() {
	int MIN = 0;
	int MAX = 1000;
	int MystNum;
	srand(time(NULL));
	MystNum = (rand() % (MAX - MIN + 1) + MIN);


	return MystNum;
}

int Continue() {
	//values
	int answer;
	bool replay;
	//to replay the game

	printf("Would you like to play again? ");

	while (answer) {
		scanf_s("%d", &answer);
		if (answer == 1) {
			printf("Time for another round!\n");
			answer = false;

		}
		else if (answer == 0) {
			printf("See you next time!\n");
			answer = true;
		}
		else {
			printf("Invalid answer!\n");
		}
	}
	replay = answer;
	return replay;
}

int main() {


	//values
	bool replay = true;
	int random;
	int difficulty = 0;
	random = randomizereasy();


	//opening
	printf("select a difficulty\nEasy:1\nMedium:2\nHard:3\n");
	scanf_s("%d", &difficulty);


	//game with difficulties
	while (replay) {


		//Games are contained in here, through the difficulties
		switch (difficulty) {
			//Easy
		case 1: {

			random = randomizereasy();

			int counter = 1;
			bool guess = true;
			printf("guess a number ");

			while (guess) {

				scanf_s("%d", &guess);

				if (random <= guess) {
					printf("Lower!\n");

				}
				else if (random >= guess) {
					printf("Higher!\n");
				}
				else {
					printf("Congratulations,you did it in %d tries!\n", counter);

					guess = false;
				}
				counter++;
			}

			break;
		}
			  //Medium
		case 2: {

			random = randomizermed();


			int counter = 1;
			bool guess = true;
			printf("guess a number between 1 and 100 ");

			while (guess) {

				scanf_s("%d", &guess);

				if (random < guess) {
					printf("Lower!\n");

				}
				else if (random > guess) {
					printf("Higher!\n");
				}
				else {
					printf("Congratulations,you did it in %d tries!\n", counter);

					guess = false;
				}
				counter++;
			}
			break;
		}
			  //Hard
		case 3: {

			int counter = 1;
			bool guess = true;
			printf("guess a number between 1 and 1000 ");

			while (guess) {

				scanf_s("%d", &guess);

				if (random < guess) {
					printf("Lower!\n");

				}
				else if (random > guess) {
					printf("Higher!\n");
				}
				else {
					printf("Congratulations,you did it in %d tries!\n", counter);

					guess = false;
				}
				counter++;

			}
			break;
		}
		}
	}



	//game was beaten
	printf("Play again?");
	scanf_s("%d", &replay);
	//replay = Continue();

}
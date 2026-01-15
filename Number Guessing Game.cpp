#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int main()
{
	int guess,tries,min,max,answer;tries=0;
	srand(time(NULL));
	printf("\n==========RANDOM NUMBER GUESS'R==========");
	printf("\n\n\nEnter the Minimum Number: ");
	scanf("%d",&min);
	printf("\nEnter the Maximum Number: ");
	scanf("%d",&max);
	answer=rand()%(max-min+1)+min;
	printf("\n=====Picking a random number=====");
	Sleep(3000);
	while(1)
	{
		printf("\nGuess: ");
		scanf("%d",&guess);
		if(guess<answer)
			{printf("\nTry a higher number!\n");
			tries++;
			}
		else if(guess>answer)
			{printf("\nTry a lower number!\n");
			tries++;
			}
		else
		{
			tries++;
			printf("\nYou Guessed the number!\n");
			printf("The Number is %d",answer);
			printf("\nYou took %d Tries",tries);
			break;
		}
	}
}

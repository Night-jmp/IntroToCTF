#include <stdio.h>
#include <string.h>
#include <stdlib.h>

__attribute__((constructor)) void ignore_me() {
	setbuf(stdin, NULL);
	setbuf(stdout, NULL);
	setbuf(stderr, NULL);
}

void print_flag()
{
	FILE* fd;
	char ch;
	char flag[100];
	fd = fopen("flag.txt", "r");

	do
	{
		ch = fgetc(fd);
		printf("%c", ch);
	} while (ch != EOF);
	printf("\n");
}

int main()
{
	int level = 0;

	while(1)
	{
		printf("\nEMVENT 2.3.4: Medical Emergency intervention made easy!\n");
		printf("Which medical emergency do you need treatment for?\n\n");
		printf("Options: \n");
		printf("1) Heartbreak\n");
		printf("2) My mom said no more mountain dew until I clean my room\n");
		printf("3) Caffinated heart palpitations\n");
		printf("4) My professor expects me to do work and I'm not about that life\n");
		printf("5) Stubbed my toe :(\n");
		printf("6) I think I'm dead\n");
		printf("7) WebMD says I have 3 weeks to live\n");
		printf("999) actually Im good\n");
		printf("> ");

		int opt;
		scanf("%i", &opt);
		
		if(opt == 1)
		{
			printf("\nPlease select from the following heartbreak options: \n");
			printf("7) My significant other decided to go to UCF :(\n");
			printf("8) This isn't my physics class. I think I'm in the wrong place?\n");
			printf("9) lorem ipsum dolor sit amet, consectetur...\n");

			scanf("%i", &opt);
			if(opt != 0)
			{
				printf("\nThere there\n");
			}
			else
			{
				level = 1;
			}
			
		}
		else if(opt == 2)
		{
			printf("\nDo you drink code red or normal mountain dew?\n");
			printf("10) Code red\n");
			printf("11) Regular\n");
			scanf("%i", &opt);
			if (opt == 10 && level == 1)
			{
				printf("\nC0d3_r3d_4_lyf3 amirite??\n");
				printf("But seriously, do what your mom says\n");
				level = 2;
			}
			else if(opt == 11)
			{
				printf("\nDo what your mom says\n");
			}
		}
		else if(opt == 3)
		{
			printf("\nSo you finally cleaned your room.\n");
			printf("Drink water.\n");
		}
		else if(opt == 4)
		{
			printf("\nAre you a procrastinator?\n");
			printf("12) Yes\n");
			printf("13) Also yes\n");
			scanf("%i", &opt);
			if ((opt == 12 || opt == 13) && level == 2)
			{
				printf("\nAt least you're honest\n");
				level = 3;
			}
			else if (opt == 12 || opt == 13)
			{
				printf("\nDo your homework\n");
			}
			else
				printf("\nThats not even an option...\n");
		}
		else if(opt == 5)
		{
			printf("\nDid you stub your toe running to the microwave to get your totinos pizza rolls?\n");
			printf("14) Yes\n");
			printf("15) No\n");
			printf("16) I don't even like those\n");
			scanf("%i", &opt);
			if(opt == 14 && level == 3)
			{
				printf("\nWorth it!\n");
				level = 4;
			}
			else if(opt == 15)
				printf("\nIt'd be cooler if you did\n");
			else
			{
				printf("\nRICE: Rest, Ice, Compress, Elevation\n");
				printf("Also, pizza rolls are a national treasure\n");
				printf("You should feel bad\n");
			}

		}
		else if(opt == 6)
		{
			printf("\nRIP\n");
		}
		else if (opt == 7)
		{
			if (level == 5)
			{
				printf("\nFor medical advice for this condition, you must unlock our DLC package!\n");
			}
			else
				printf("\nRub some dirt in it, you'll be alright\n");
		}
		else if(opt == 999)
		{
			printf("\nNice\n");
			if(level == 5)
				print_flag();
			exit(0);
		}
		else
		{
			printf("\noo00oooo...you like fuzzing things\n");
			if(level == 4)
				level = 5;
		}
	}
	return 0;
}

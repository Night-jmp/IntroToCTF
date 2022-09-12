#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

__attribute__((constructor)) void ignore_me() {
	setbuf(stdin, NULL);
	setbuf(stdout, NULL);
	setbuf(stderr, NULL);
}

void print_flag();

int main()
{
	signal(SIGSEGV, print_flag);
	char name[10];
	printf("Username: ");
	gets(&name);
	return 0;
}

void print_flag()
{
	printf("fitsec{s3gm3nt4t!0n_f4ult!!}\n");
	exit(1);
}

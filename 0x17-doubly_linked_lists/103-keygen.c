#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, b;
	size_t len, add;
	char *codex =
		"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char password[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	password[0] = codex[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	password[1] = codex[(add ^ 79) & 63];
	for (i = 0, b = 1; i < len; i++)
		b *= argv[1][i];
	password[2] = codex[(b ^ 85) & 63];
	for (b = argv[1][0], i = 0; i < len; i++)
		if ((char)b <= argv[1][i])
			b = argv[1][i];
	srand(b ^ 14);
	password[3] = codex[rand() & 63];
	for (b = 0, i = 0; i < len; i++)
		b += argv[1][i] * argv[1][i];
	password[4] = codex[(b ^ 239) & 63];
	for (b = 0, i = 0; (char)i < argv[1][0]; i++)
		b = rand();
	password[5] = codex[(b ^ 229) & 63];
	printf("%s\n", password);
	return (0);
}

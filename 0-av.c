#include <stdio.h>
int main (__attribute__((unused)) int argc, char *argv[])
{
	int i = 1; /*start first argument*/

	while(argv[i]) /*if argv exist do*/
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

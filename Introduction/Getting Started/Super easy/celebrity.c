//1124 - Celebrity jeopardy
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	char *buffer=(char*)malloc(2048);
	scanf("%[^EOF]", buffer);
	printf("%s", buffer);
	return 0;
}

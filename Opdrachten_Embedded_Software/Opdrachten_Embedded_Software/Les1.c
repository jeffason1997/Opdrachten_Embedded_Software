// Opdrachten_Embedded_Software.c : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>


char geefLaatsteChar(char  woord[]) {
	char laatsteLetter;
	laatsteLetter = woord[strlen(woord) - 1];
	return laatsteLetter;
}

int main()
{
	char mijnWoord[10] = "Yeah Boi";
	printf("%s\n", mijnWoord);
	printf("De laatste letter van mijnWoord is %c\n", geefLaatsteChar(mijnWoord));


	return 0;
}



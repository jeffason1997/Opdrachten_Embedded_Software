/*
* BinairyClock_Microcontrollers.c
*
* Created: 8-3-2018 14:37:26
* Author : jeffr
*/
#include "stdafx.h"
#include <time.h>
#pragma warning(disable : 4996)

#define F_CPU 8000000

unsigned int_to_int(unsigned k) {
	if (k == 0) return 0;
	if (k == 1) return 1;                       /* optional */
	return (k % 2) + 10 * int_to_int(k / 2);
}

int main()
{
	time_t rawtime;
	struct tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	printf("Current local time and date: %d", timeinfo->tm_min);

		time(&rawtime);
		timeinfo = localtime(&rawtime);

		int hour1 = timeinfo->tm_hour / 10;
		int hour2 = timeinfo->tm_hour % 10;
		int min1 = timeinfo->tm_min / 10;
		int min2 = timeinfo->tm_min % 10;
		int sec1 = timeinfo->tm_sec / 10;
		int sec2 = timeinfo->tm_sec % 10;
		

		printf(" %d", int_to_int(hour1));
		printf(" %d", int_to_int(hour2));
		printf(" %d", int_to_int(min1));
		printf(" %d", int_to_int(min2));
		printf(" %d", int_to_int(sec1));
		printf(" %d", int_to_int(sec2));
	
		while (1) {};

	return 0;
}


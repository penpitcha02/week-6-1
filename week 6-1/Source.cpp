#include <stdio.h>
int main()
{
	int shop, hour, min, cost;
	printf("Shopping cost: "); scanf_s("%d", &shop);
	printf("Hour: "); scanf_s("%d", &hour);
	printf("Minute: "); scanf_s("%d", &min);
	if (shop >= 1000) {
		if ((hour == 4 && min == 00) || (hour < 4 && min < 60))
		{
			printf("Free for the first 4 hours");
		}
		else
		{
			cost = (hour - 3) * 30;
			printf("%d baht", cost);
		}
	}
	else {
		if ((hour == 1 && min == 00) || (hour == 0 && min < 60))
		{
			printf("Free for the first hour");
		}
		else
		{
			cost = hour  * 30;
			printf("%d baht", cost);
		}
	}
	return 0;
}
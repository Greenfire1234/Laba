#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
unsigned int n = 0;
unsigned int min = 0;
unsigned int max = 0;
float randomnumber = 0;
int a = 0;
float b = 0;
int c = 0;
int d = 0;
float total = 0;

printf("enter amount of numbers below 100:"); scanf_s("%hu", &n);
printf("enter min:"); scanf_s("%hu", &min);
printf("enter max:"); scanf_s("%hu", &max);
if (n >= 100) {
	printf("You entered above 100 amount of numbers.Please enter below 100");

}
else {

	for (int i = 0;i < n;i++) {


		if (n < 10) {
			randomnumber = (float)rand() / RAND_MAX * (max - min) + min;
			//printf(" %lf", randomnumber);
			a = randomnumber;
			b = randomnumber - a;
			c = b * 10;
			//printf("c:%d", c);
		}
		else {
			randomnumber = (float)rand() / RAND_MAX * (max - min) + min;
			//printf(" %lf", randomnumber);
			a = randomnumber;
			b = randomnumber - a;
			c = b * 100;
			//printf("a:%d", a);
			//printf("b:%lf", b);
			//printf("c:%d", c);

		}
		d = 0;
		while (d <= n) {
			if (c < n) {
				total = total - randomnumber;
				////printf("total:%lf", total);
				break;
			}
			else {
				total = total + randomnumber;
				////printf("total:%lf", total);
				break;
			}
			d++;
		}

	}

	printf("total:%lf ", total);
	
}
return 0;
}
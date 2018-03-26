#include<stdio.h>
#define PI 3.1415926
int main()
{
	float r,area;
	printf("ÇëÊäÈëÔ²µÄ°ë¾¶£º");
	scanf_s("%f", &r);
	area = PI*r*r;
	printf("area=%.3f", area);
	return 0;
}
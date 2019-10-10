#include <stdio.h>

int f()
{
	int x,y;
	printf("Enter x: \n");
	scanf("%d",&x);
	printf("x value = %d\n", x);
	printf("Enter y: \n");
	scanf("%d",&y);
	printf("y value = %d\n", y);
	while(x > 10)
	{
		x = x - 10;
		if(x == 10)
			break;
	}
	if((y < 20) && (x%2==0))
		y = y + 20;
	else
		y = y - 20;
	return 2 * x + y;
}

int main()
{
	printf("output = %d\n", f());
	return 0;
}

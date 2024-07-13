#include<stdio.h>
#include<conio.h>
main()
{
	int a,i;
	printf("Enter any number");
	scanf("%d",&a);
	for(i=0;i<=10;i++)
	{
		printf("%d*%d=%d\n",a,i,a*i);
	}
	getch();
}

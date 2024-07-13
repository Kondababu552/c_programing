#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,k;
	printf("Enter the 2 values");
	scanf("%d%d",&a,&b);
	printf("\n1 Addition \n2 subraction \n3 multiplication \n4 division");
	printf("\n choose your option to perform");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			printf("\n addition of %d & %d values is %d",a,b,a+b);
			break;
		case 2:
			printf("\n subraction of %d & %d values is %d",a,b,a-b);
			break;
		case 3:
			printf("\n multiplication of %d & %d values is %d",a,b,a*b);
			break;
		case 4:
			printf("\n division of %d & %d values is %d",a,b,a/b);
			break;
		default:
			printf("\n wrong option try again");
			break;
	}
	getch();
}

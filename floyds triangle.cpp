#include<stdio.h>
#include<conio.h>
main()
{
int row,col,no,num=1;
printf("Rows:");
scanf("%d",&no);

for(row=1;row<=no;row++)
{
	for(col=1;col<=row;col++)
	{
		printf("%d",num);
		++num;
	}
	printf("\n");
}
}

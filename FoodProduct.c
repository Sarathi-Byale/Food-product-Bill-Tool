#include<stdio.h>
int main()
{
	int choice;
	printf("Enter Your Choice:\n 1:Pani Puri,RS.20 \n2:Bhel,RS.30 \n 3:Suki Puri,RS.15 \n 4:SPDP,Rs.40");
	scanf("%d",&choice);
	printf("Your Food Item and Prise is:");
	
	switch(choice)
	{
	
		case 1:
			printf("\nFood Item:Pani Puri \n Prise:20 ");
			break;
		case 2:
			printf("\nFood Item:Bhel \n Prise:30 ");
			break;
		case 3:
			printf("\nFood Item:Suki Puri \n Prise:15 ");
			break;
		case 4:
			printf("\nFood Item:SPDP \n Prise:40 ");
			break;
		default:
			printf("Invalid");
    }
}

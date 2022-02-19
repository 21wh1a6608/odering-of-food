#include<stdio.h>
int main()
{
	printf("pick an item");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("french fires,Rs-99\n");
			break;
			case 2:
				printf("burger,Rs-129\n");
				break;
				case 3:
					printf("sandwich,Rs-149\n");
					break;
					case 4:
						printf("pasta,Rs-179\n");
						break;
						case 5:
							printf("pizza,Rs-239\n");
							break;
							default : printf("wrong choice");
			
	}
}

#include<stdio.h>
int main()
{
	int a[10][3]={{101,2,2},{102,4,1},{103,2,1},{104,4,2},{105,4,2},{106,2,1},{107,2,2},{108,4,1},{109,4,1},{110,2,1}};
	//0-vehicle id;1-type; 2-avaibility.
	int n,i,j;
	int x,y,z;
	do
	{
		printf("\n1. Display Status of a Vehicle\n2. Issue for use\n3. Return\n4. Print All 2 Wheelers\n5. Print All 4-Wheelers\n6. Exit");
		printf("\n ENTER YOUR OPTION: ");
		scanf("%d",&n);
		printf("\n------------------------------------------------------------------\n");
		switch(n)
		{
			case 1:
			
				printf("\nENTER THE VEHICLE ID: ");
				scanf("%d",&x);
				for(i=0;i<10;i++)
				{
					if(a[i][0]==x)
					{
						if(a[i][2]==1)
						{
							printf("\nTHE vehicle %d is availble!!\n",a[i][0]);
						}
						else
						{
							printf("\nSORRY,THE vehicle %d is NOT availble!!\n ",a[i][0]);
						}
					}
				}
				break;
			
				
			case 2:
				printf("\n ENTER THE VEHICLE ID YOU WANT TO RENT: ");
				scanf("%d",&y);
				for(i=0;i<10;i++)
				{
						if(a[i][0]==y)
						{
							if(a[i][2]==1)
							{
								printf("\nTHE vehicle %d is availble!!\nTHANK YOU FOR RENTING",a[i][0]);
								a[i][2]=a[i][2]+1;
								
							}	//printf("\n %d",a[i][2]);
							else
							{
								printf("\nSORRY,THE vehicle %d is NOT availble!!\n ",a[i][0]);
							}
						}
				}
				break;
				
				case 3:
					printf("\n ENTER THE VEHICLE ID THAT IS RETURNED: ");
					scanf("%d",&z);
					for(i=0;i<10;i++)
				{
						if(a[i][0]==z)
						{
							if(a[i][2]==2)
							{
								printf("\nTHANK YOU RETURNING VEHICLE %d !!\n",a[i][0]);
								a[i][2]=a[i][2]-1;
								
							}	//printf("\n %d",a[i][2]);
							else
							{
								printf("\nSorry wrong input of vehicle ID ");
							}
						}
				}
				break;
				case 4:
					printf("\n STATUS OF 2 WHEELERS:[1-FREE////2-NOT AVAILABLE]\n)");
					printf("\n	VEHICLE ID		STATUS\n");
					for(i=0;i<10;i++)
					{
						if(a[i][1]==2)
						{
							printf("\n	%d			%d",a[i][0],a[i][2]);
						}
					}
				break;
				
				case 5:
					printf("\n STATUS OF 4 WHEELERS:[1-FREE////2-NOT AVAILABLE]\n)");
					printf("\n	VEHICLE ID		STATUS\n");
					for(i=0;i<10;i++)
					{
						if(a[i][1]==4)
						{
							printf("\n	%d			%d",a[i][0],a[i][2]);
						}
					}
					break;
				default:
				{  
					printf("\n Invalid input");
				}
				
				
				
		}
		
	}while(n!=6);
}

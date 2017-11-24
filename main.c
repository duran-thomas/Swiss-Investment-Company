#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null '\0'


int main()
{
	int choice, accountNumber[15] = {0};
	int investQuantity[15] = {0};
	char investCode[15] = {""};
	float ttlCost[15] = {0}, total = 0;

	char pass[15] = "@dm1n", invst, select;
	char password[15];
	int n = 1;
	int a,b,x,i, order, investSelect, search, qnty, minQuantity;
	int fiCount = 0, psCount = 0, viCount = 0;
	float fiOrders = 0, psOrders = 0, value;

	while(1) //While Loop For Login Screen.
    {
      //Beginning Of The Program.
      system("cls");
      printf(" =================================================================\n");
      printf("|             SWISS INVESTMENT ORDER MANAGEMENT SYSTEM            |\n");
      printf(" =================================================================\n");
      printf("       |                       LOGIN                       |\n");
      printf("        ===================================================\n");
      printf("                              (You have only three chances to enter)\n");
      printf("\n");
      printf("Enter Password: ");
      scanf("%s",password);
      a=strcmp(password,pass);
      if(a==0)
      {
        printf("You have been successfully logged in.\n");
        system("pause");
        break;
      }
      else
      {
      	printf("Wrong PASSWORD and/or USER ID entered. Now you have % d more chance/s.\n",3-n);
      	system("pause");
      }
      n++;
      if(n==4){
    	printf("You can't log in.\n");
    	exit(0);
    }
   }


    while(1){
    	system("cls");
		printf(" =================================================================\n");
   		printf("|             SWISS INVESTMENT ORDER MANAGEMENT SYSTEM            |\n");
      	printf(" =================================================================\n");
		printf("       |                     MAIN MENU                     |\n");
		printf("        ===================================================\n");
		printf("\n");
		printf("       *****************************************************\n");
		printf("       *    1. Prepare Investment Orders                   *\n");
		printf("       *    2. Display Investment Orders                   *\n");
		printf("       *    3. Search/Edit Investment Orders               *\n");
		printf("       *    4. Exit                                        *\n");
		printf("       *****************************************************\n");
		printf("\n");
		printf("Select Option: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				system("cls");
				printf(" =================================================================\n");
		   		printf("|             SWISS INVESTMENT ORDER MANAGEMENT SYSTEM            |\n");
		      	printf(" =================================================================\n");
				printf("       |              PREPARE INVESTMENT ORDER             |\n");
				printf("        ===================================================\n");
				printf("\n");
				while(1){
					printf("Number Of Orders To Be Processed? (Max 15 Orders) ");
            		scanf("%d", &order);
            		if(order<15){
            		    x = 0;
            			for(x;x<order;x++){
            				system("cls");
		                    printf(" =================================================================\n");
					   		printf("|             SWISS INVESTMENT ORDER MANAGEMENT SYSTEM            |\n");
					      	printf(" =================================================================\n");
							printf("       |                CREATE ORDER RECORD                |\n");
							printf("        ===================================================\n");
							printf("\n");
		                    printf("Enter Account Number: ");
		                    scanf("%d", &accountNumber[x]);
		                    printf("\n");
		                    printf("Investment Type");
		                    printf("\n");
		                    printf("1. Fixed Income (Minimum Units: 1000)\n");
		                    printf("2. Pooled Stock (Minimum Units: 4500)\n");
		                    printf("3. Variable Income (Minimum Units: 2400)\n");
		                    printf("\n");
		                    printf("Select Investment Type: ");
		                    scanf("%d", &investSelect);

		                    switch(investSelect)
		                    {
		                    case 1:
		                        strcpy(&investCode[x], "F");
		                        value = 52.69;
		                        minQuantity = 1000;
		                        fiCount++;
		                        break;
		                    case 2:
		                        strcpy(&investCode[x], "S");
		                        value = 59.24;
		                        minQuantity = 4500;
		                        psCount++;
		                        break;
		                    case 3:
		                        strcpy(&investCode[x], "X");
		                        value = 125.72;
		                        minQuantity = 2400;
		                        viCount++;
		                        break;
		                    default:
		                        printf("Invalid Selection\n");
		                        break;
		                    }
		                    printf("Enter Investment Quantity: ");
		                    scanf("%d", &investQuantity[x]);
                            while(investQuantity[x]<minQuantity){
                                printf("Invalid Amount\n");
                                printf("Please Enter Investment Quantity: ");
                                scanf("%d", &investQuantity[x]);
                                if(investQuantity[x]>=minQuantity){
                                    break;
                                }
                            }
		                    ttlCost[x] = investQuantity[x]*value;

            			}
            			x++;
            		break;
            		}
            		else{
            			printf("Number Of Records Exceeded (Max 15)");
            		}
            		break;
				}
				break;
			case 2:
				system("cls");
				printf(" =================================================================\n");
		   		printf("|             SWISS INVESTMENT ORDER MANAGEMENT SYSTEM            |\n");
		      	printf(" =================================================================\n");
				printf("       |                 DISPLAY INVESTMENT ORDER           |\n");
				printf("        ===================================================\n");
				printf("\n");
				for(i = 0; i<15;i++){
                    if(accountNumber[i] != null && investCode[i] != null && investQuantity[i] != null){
                        printf("********************\n");
                        printf("Account Number: %d\n", accountNumber[i]);
                        printf("Investment Code: %c\n", investCode[i]);
                        printf("Quantity: %d\n", investQuantity[i]);
                        printf("Order Cost: $%.2f", investQuantity[i]*value);
                        printf("\n");
                    }
				}
				printf("\n");
				printf("Total Number Of Orders By Category \n");
				printf("*********************\n");
				printf("Fixed Income: %d\n", fiCount);
				printf("Pooled Stock: %d\n", psCount);
				printf("Variable Income: %d\n", viCount);
				printf("Overall Totals\n");
				printf("*********************\n");
				printf("Total Number Of Orders: %d\n", fiCount+psCount+viCount);

				for(x=0;x<15;x++){
                    total = total + ttlCost[x];
				}

				printf("Total Cost Of Orders: %.2f\n", total);
				system("pause");
				break;
			case 3:
				system("cls");
				printf(" =================================================================\n");
		   		printf("|             SWISS INVESTMENT ORDER MANAGEMENT SYSTEM            |\n");
		      	printf(" =================================================================\n");
				printf("       |                 UPDATE INVESTMENT ORDER           |\n");
				printf("        ===================================================\n");
				printf("\n");
				printf("Enter Account Number You Wish To Search For: ");
				scanf("%d", &search);
                for(x=0;x<15;x++){
                    if(accountNumber[x] == search){
                        printf("********************\n");
                        printf("Account Number: %d\n", accountNumber[x]);
                        printf("Investment Code: %c\n", investCode[x]);
                        printf("Quantity: %d\n", investQuantity[x]);
                        printf("********************\n");
                        printf("\n");
                        printf("Would You Like To Edit This Order? (Y/N) ");
                        scanf("%s", &select);
                        if(select == 'Y' || select == 'y'){
                            printf("What Would You Like To Change?\n");
                            printf("1. Investment Code\n");
                            printf("2. Quantity\n");
                            printf("Select Option: ");
                            scanf("%d", &choice);
                            switch(choice){
                            case 1:
                                printf("For Fixed Asset: F\n");
                                printf("For Pooled Stock: S\n");
                                printf("For Variable Income: X\n");
                                printf("Enter New Investment Code: ");
                                scanf("%s", &invst);
                                investCode[x] = invst;
                                break;
                            case 2:
                                printf("Enter New Investment Quantity: ");
                                scanf("%d", &qnty);
                                investQuantity[x]= qnty;
                                break;
                            default:
                                printf("Invalid Selection");
                                break;
                            }
                        }
                        else{
                            break;
                        }
                        printf("Updated Values\n");
                        printf("********************\n");
                        printf("Account Number: %d\n", accountNumber[x]);
                        printf("Investment Code: %c\n", investCode[x]);
                        printf("Quantity: %.2f\n", investQuantity[x]);
                        printf("********************\n");
                    }

                }
                system("pause");
				break;
			case 4:
				printf("Exiting.......");
				exit(0);
				break;
			default:
				printf("Invalid Selection\n");
			}
    }
	return 0;
}

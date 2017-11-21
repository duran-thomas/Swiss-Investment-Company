#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int choice, accountNumber[15];
	float investQuantity[15], value;
	char investCode[15];

	char pass[15] = "@dm1n", user[15] = "admin";
	char username[15], password[15];
	int n = 0;
	int a,b, order, vIncome, investSelect;

	while(n<3) //While Loop For Login Screen.
    {
      //Beginning Of The Program.
      system("clear");
      printf(" =================================================================\n");
      printf("|             SWISS INVESTMENT ORDER MANAGEMENT SYSTEM            |\n");
      printf(" =================================================================\n");
      printf("       |                       LOGIN                       |\n");
      printf("        ===================================================\n");
      printf("                              (You have only three chances to enter)\n");
      printf("\n");
      printf("USERNAME: ");
      scanf("%s",username);
      printf("\n");
      printf("PASSWORD: ");
      scanf("%s",password);
      a=strcmp(username,user);
      b=strcmp(password,pass);
      if(a==0&&b==0)
      {
        printf("You have been successfully logged in.\n");
        system("pause");
        break;
      }
      else
      {
      	printf("Wrong PASSWORD and/or USER ID entered. Now you have % d more chance/s.\n",3-n);
      }
      n++;
   }
   if(n==4){
    	printf("\nYou can't log in.");
    	exit(0);
    }

    while(1){
    	system("clear");
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
				system("clear");
				printf(" =================================================================\n");
		   		printf("|             SWISS INVESTMENT ORDER MANAGEMENT SYSTEM            |\n");
		      	printf(" =================================================================\n");
				printf("       |              PREPARE INVESTMENT ORDER             |\n");
				printf("        ===================================================\n");
				printf("\n");
				while(1){
					printf("Number Of Orders To Be Processed? (Max 15 Orders) ");
            		scanf("%d", &order);
            		if(order<16){
            			for(int x = 0;x<order;x++){
            				system("clear");
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
		                    printf("1. Fixed Income (Minumun Units: 1000)\n");
		                    printf("2. Pooled Stock (Minumun Units: 4500)\n");
		                    printf("3. Variable Income (Minumun Units: 2400)\n");
		                    printf("\n");
		                    printf("Select Investment Type: ");
		                    scanf("%d", &investSelect);
		                    switch(investSelect)
		                    {
		                    case 1:
		                        strcpy(&investCode[x], "F");
		                        value = 52.69;
		                        break;
		                    case 2:
		                        strcpy(&investCode[x], "S");
		                        value = 59.24;
		                        break;
		                    case 3:
		                        strcpy(&investCode[x], "X");
		                        value = 125.72;
		                        break;
		                    default:
		                        printf("Invalid Selection\n");
		                        break;
		                    }
		                    printf("Enter Investment Quantity: ");
		                    scanf("%f", &investQuantity[x]);
            			}
            		break;
            		}
            		else{
            			printf("Number Of Records Exceeded (Max 15)");
            		}
            		break;
				}
				break;
			case 2:
				system("clear");
				printf(" =================================================================\n");
		   		printf("|             SWISS INVESTMENT ORDER MANAGEMENT SYSTEM            |\n");
		      	printf(" =================================================================\n");
				printf("       |                 DISPLAY INVESTMENT ORDER           |\n");
				printf("        ===================================================\n");
				printf("\n");
				for(int i = 0; i<16;i++){
					printf("********************\n");
					printf("Account Number: %d", accountNumber[i]);
					printf("Investment Code: %c", investCode[i]);
					printf("Quantity: %f", investQuantity[i]);
				}
				system("pause");
				break;
			case 3:
				printf("Search\n");
				break;
			case 4:
				printf("Exit\n");
				break;
			default:
				printf("Invalid Selection\n");
			}
    }

	return 0;
}
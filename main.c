#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int choice, accountNumber[15];
	float investQuantity[15];
	char investCode[15];

	char pass[15] = "@dm1n", user[15] = "admin";
	char username[15], password[15];
	int n = 0;
	int a,b, order;

	while(n<=3) //While Loop For Login Screen.
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
        printf("\nYou have been successfully logged in.");
        break;
      }
      else
      {
      	printf("\nWrong PASSWORD and/or USER ID entered. Now you have % d more chance/s.",3-n);
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
				printf("       |                 PREPARE INVESTMENT ORDER                 |\n");
				printf("        ===================================================\n");
				printf("\n");
				while(1){
					printf("Number Of Orders To Be Processed? (Max 15 Orders) \n");
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
		                    printf("Enter Investment Code: ");
		                    scanf("%s", &investCode[x]);
		                    printf("Enter Investment Quantity: ");
		                    scanf("%f", &investQuantity[x]);
            			}
            		break;
            		}
            		else{
            			printf("Number Of Records Exceeded (Max 15)");
            		}
				}
				break;
			case 2:
				printf("Display\n");
				break;
			case 3:
				printf("Search\n");
				break;
			case 4:
				printf("Exit\n");
				break;
			default:
				printf("Invalid\n");
			}
    }

	return 0;
}
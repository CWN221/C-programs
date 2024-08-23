//Currency converter
#include <stdio.h>
#include <stdlib.h>

//Conversion Rates
#define USdollar_to_KES 129.00
#define USdollar_to_yuan 7.15
#define USdollar_to_euro 0.90
#define USdollar_to_sterling 0.76
#define USdollar_to_swissFranc 0.8522
#define USdollar_to_saudiRiyal 3.75
#define USdollar_to_japaneseYen 146.31

#define KES_to_dollar (1.0 / USdollar_to_KES)
#define KES_to_yuan 0.05541
#define KES_to_euro 0.0070
#define KES_to_sterling 0.005928
#define KES_to_swissFranc 0.006608
#define KES_to_saudiRiyal 0.029
#define KES_to_japaneseYen 1.14

//Kenyan Shilling
void KES()
{
	float total;
	double amount;
	int choice;
	char response;
	
	
	//User Input
	printf("Enter amount(KES): ");
	scanf("%lf", &amount);
	
	//Choices
	printf("Choose an option to convert to: \n");
	printf(	"1. USD \n"
			"2. YUAN(CNY) \n"
			"3. EURO(EUR) \n"
			"4. STERLING(GBP) \n"
			"5. SWISS (CHF) \n"
			"6. SAUDI RIYAL \n"
			"7. JAPANESE YEN \n");
	printf("\n");
	
	//Choice Input
	printf("Enter choice: ");
	scanf("%d", &choice);
	printf("\n");
			
switch (choice)
{
case 1:
	total = amount * KES_to_dollar;
	printf("Amount in USD: %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 2:
	total = amount * KES_to_yuan;
	printf("Amount in YUAN(CNY): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 3:
	total = amount * KES_to_euro;
	printf("Amount in EURO(EUR): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 4:
	total = amount * KES_to_sterling;
	printf("Amount in STERLING(GBP): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 5:
	total = amount * KES_to_swissFranc;
	printf("Amount in SWISS FRANC(CHF): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 6:
	total = amount * KES_to_saudiRiyal;
	printf("Amount in SAUDI RIYAL(SAR): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 7:
	total = amount * KES_to_japaneseYen;
	printf("Amount in JAPANESE YEN(JPY): %.3f \n", total);
	break;

default:
	printf("Invalid entry! \n");
	break;
}

	printf("\n");	
	printf("Do you wish to proceed with conversion? (y/n) \n");
	scanf("%s", &response);
	if (response == 'y' || response == 'Y')
	{
		printf("\n");
		main();
	}
	else if (response == 'n' || response == 'N')
	{
		printf("Exiting.......... \n");
		abort();
	}
		
}


//US Dollar
void USD()
{
	float total;
	float amount;
	int choice;
	char response;
	
	
	//User Input
	printf("Enter amount(USD): ");
	scanf("%f", &amount);
	
	//Choices
	printf("Choose an option to convert to: \n");
	printf(	"1. KENYA SHILLING(KES): \n"
			"2. YUAN(CNY) \n"
			"3. EURO(EUR) \n"
			"4. STERLING(GBP) \n"
			"5. SWISS FRANC(CHF) \n"
			"6. SAUDI RIYAL(SAR) \n"
			"7. JAPANESE YEN(JPY) \n");
	printf("\n");
	
	//Choice Input
	printf("Enter choice: ");
	scanf("%d", &choice);
	printf("\n");
			
switch (choice)
{
case 1:
	total = amount * USdollar_to_KES;
	printf("Amount in USD: %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 2:
	total = amount * USdollar_to_yuan;
	printf("Amount in YUAN(CNY): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 3:
	total = amount * USdollar_to_euro;
	printf("Amount in EURO(EUR): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 4:
	total = amount * USdollar_to_sterling;
	printf("Amount in STERLING(GBP): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 5:
	total = amount * USdollar_to_swissFranc;
	printf("Amount in SWISS FRANC(CHF): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 6:
	total = amount * USdollar_to_saudiRiyal;
	printf("Amount in SAUDI RIYAL(SAR): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

case 7:
	total = amount * USdollar_to_japaneseYen;
	printf("Amount in JAPANESE YEN(JPY): %.3f \n", total);
	printf("Exchange rates updated on 8/22/2024 19:00EAT");
	printf("\n");
	break;

default:
	printf("Invalid entry! \n");
	break;
}

	printf("\n");

	printf("Do you wish to proceed with conversion? (y/n) \n");
	scanf("%s", &response);
	if (response == 'y' || response == 'Y')
	{
		printf("\n");
		main();
	}
	else if (response == 'n' || response == 'Y')
	{
		printf("Exiting.......... \n");
		abort();
	}	
		
}


void quit_program()
{
	char answer;
	printf("Do you wish to exit? (y/n) \n");
	scanf("%s", &answer);
	   
	   if (answer == 'y' || answer == 'Y')
	   {
	   	printf("Exiting.............. \n");
	   	abort();
	   }	
	   else if (answer == 'n' || answer == 'N')
	   {
			printf("\n");
	   	    main();
	   }
}


int main() {
    int ans;

    printf("Enter base currency: \n");
    printf( "	1. Kenyan Shilling(KES) \n"
	   	   	"	2. US Dollar(USD) \n"
			"	3. Exit \n");
	   	   	
	printf("Enter preferred base currency: ");
	scanf("%d", &ans);
	printf("\n");

switch (ans)
{
case 1:
    KES();
	break;

case 2:
	USD();
	break;

case 3:
	quit_program();
	break;

default:
	printf("Please enter a valid number! \n");
	printf("\n");
	main();	
}	

    return 0;
}

              
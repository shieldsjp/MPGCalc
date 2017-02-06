/*--------------------------------------------------------------------------------------------------------------
Author: 			John Shields
Objective:			This program determines the miles per gallon for 3 tanks of gasoline that a user fills in his/her car. 
					This program will prompt a user to enter the number of gallons used and the number of miles driven for each of the 3 tanks of gas.
					This program will calculate and display the miles per gallon obtained for each tank and an overall average for all 3 tanks. User input is required. 
-----------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
void main (void)
{
	
/*Variable Declarations*/
/*---------------------*/
	float gallons, miles, mpg, repeat, totalmile, totalgallon;
	
/*Setting Accumulators*/
/*---------------------*/
	totalmile = 0;
	totalgallon = 0;
	
/*Output display that provides an overall function of this program to the user*/
/*----------------------------------------------------------------------------*/

	printf ("Welcome to the mileage calculator.\n\n");
	printf ("This program will calculate the miles per gallon for you for three tanks of gas after you have entered the gallons used and miles driven.\n\n");
		
/*Setting loop statement for a total of 3 loops*/
/*---------------------------------------------*/

					for ( repeat = 1; repeat <= 3; ++repeat){

/*Output and input display that prompts user to provide data */
/*-----------------------------------------------------------*/

	printf ("Enter the number of gallons used for tank #%.0f: ",repeat);
	scanf ("%f", &gallons);
	printf ("Enter the number of miles driven: ");
	scanf ("%f", &miles);
	
/*Declaring value of mpg variable and printf statement will calculate miles per gallon */
/*-------------------------------------------------------------------------------------*/

	mpg = miles / gallons ;
	printf ("***The miles per gallon for this tank is %.1f\n\n", mpg);

/*Ending accumulators for all 3 trips */
/*------------------------------------*/

totalmile += miles;
totalgallon += gallons;
		}

/*Output of data to user for the average mpg of all 3 trips */
/*----------------------------------------------------------*/

printf("Your overall average miles per gallon for three tanks is %.1f\n\n", (float)totalmile/totalgallon);
printf("Thank you for using the program. Goodbye.\n\n");

	/*The following statement is used to pause the output*/
	/*---------------------------------------------------*/
		
	getchar ();
}  /* end main */

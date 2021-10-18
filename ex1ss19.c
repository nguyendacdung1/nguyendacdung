#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct strucintcal /* defines the structure */
	{
		char name[20];
		int numb;
		float amt;
	}; /* declares a variable */
    void main()
    {
    	struct strucintcal xyz; /* declares a variable*/
    	void intcal(struct strucintcal);
	/* accepts data into the structure */
	printf("\nEnter customer name: ");
	gets(xyz.name);
	
	printf("\nEnter customer number: ");
	scanf("%d",&xyz.numb);
	
	printf("\nEnter principal amount: ");
	scanf("%f", &xyz.amt);
	
	intcal(xyz); /*passes the structure to a function */
	getch();
}
void intcal(struct strucintcal abc)
{

float si, rate=5.5, yrs=2.5;
/* computes the interest*/
si=(abc.amt*rate*yrs)/100;
printf("\nThe customer name is %s", abc.name);
printf("\nThe customer number is %d", abc.numb);
printf("\nThe amount is %f", abc.amt);
printf("\nTHe interest is %f",si);
return;
}


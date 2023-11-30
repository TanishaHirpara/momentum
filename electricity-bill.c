#include<stdio.h>

main()

{
	int unit, ebill, sc, tbill;
	
	 printf("Enter unit = ");
	 scanf("%d" , &unit);
	 
	 if(unit<=50)
	 
	 	ebill = unit * 0.50;
	 }
	 else if(unit<=150)
	 {
	 	ebill = (unit-50) * 0.75 + 25;
	 }
	 else if(unit<=250)
	 {
	 	ebill = (unit-150) * 1.20 + 25 + 75;
	 }
	 else
	 {
	 
	 	ebill = (unit-250) * 1.50 + 25 + 75 + 300;
	 }
	 	
	 	printf("Electricity bill = %d\n", ebill);
	 	sc = ebill + 20/100;
	 	printf("surcharge = %d\n " , sc);
	 	tbill = ebill + sc;
	 	printf("Total electicity bill = %d\n" ,tbill);
	 	
	 
}

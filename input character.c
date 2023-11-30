#include<stdio.h>

main()

{
	char ch;
	printf("Enter any character = ");
	scanf("%c" ,&ch);
	
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	 {
	 
	 printf("The entered character is an alphabet");
	 
	 }
	 else if(ch>='0'&& ch<='9')
	 { 
	 printf("The entered chracter is a digit");
	 }
	 else
	 {
	 		 printf("The entered chracter is special character");
	 }
	 
	 
	 
}

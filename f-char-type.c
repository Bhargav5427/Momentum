#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter Character = ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("Character is alphabet");
	}
	else if( ch>='0' && ch<='9')
	{
		
		printf("Character is numaric");
	}
	else
	{
		printf("Character is special");
	}
}

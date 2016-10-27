#include<stdio.h>
int tower(int,char,char,char);
int main()
{
	int n;
	char s,t,d;
	printf("Enter the number of discs \n");
	scanf("%d",&n);
	tower(n,s,t,d);
	return;
}
void tower(int n,char source,char temp,char destination)
{
	if(n==1)
	{
		printf("Move %d disc from %c to %c \n",n,source ,destination);
	}
	
	tower(n-1,source,destination,temp);
	printf("Move %d disc from %c to %c \n",n-1,source ,temp);
	tower(n-1,temp,source,destination);
}
	
	
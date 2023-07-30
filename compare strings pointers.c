#include<stdio.h>
#include<string.h>
void main()
{
	char s[50],*p;
	int i,count=0;
	printf("enter string:\n");
	scanf("%s",s);
	p=s;
	while(*p!='\0')
	{
		count++;	
	}
	printf("length=%d",count);
}

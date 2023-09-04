#include<stdio.h>
int main()
{
	int i,c2=0,flag=0,c=0;
	char s1[100],s2[100];
	printf("enter the sentence : ");
	gets(s1);
		printf("enter the 2ndsentence : ");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		c++;
	}
		for(i=0;s2[i]!='\0';i++)
		{
			c2++;
		}
		if(c!=c2)
		printf(" not same");
		else
		{
			for(i=0;s1[i]!='\0';i++)
			{
				if(s1[i]!=s2[i]){
				flag=1;
				break;
			}
			
			}
			
		
		if (flag==1)
		{
				printf("not same");
					
		}
		else 
		{
				printf("  same");
				printf("the string is :%s",s1);
		}
		
			}
		}

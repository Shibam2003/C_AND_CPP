//Wap to count no. of vow and cons and no. of space
#include<stdio.h>
#include<stdlib.h>//for exit(0) function
int main(){
	FILE *fp1;
	int vow=0,con=0,sp=0;
	char ch;
	fp1 = fopen("vowel.txt","r");//opening the text file in read mode
	if(fp1==NULL){
		printf("There is error in opening the file");
		exit(0);
	}
	
	while(!feof(fp1))//checking whether the end of file marker has been reached or not
	{
		ch = getc(fp1);//the getc method is used to extract a character from the file
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
			vow++;
		}
		else if(ch==32){
			sp++;
		}
		else{
			con++;
		}
		if(ch==EOF)
		break;
	
		
	}
	printf("no.of vowel is: %d\n",vow);
	printf("no. of cons is: %d",con);
	printf("no. of space is: %d",sp);
	
	
	
	
	
	
	
	fclose(fp1);
	
	
	return 0;
}

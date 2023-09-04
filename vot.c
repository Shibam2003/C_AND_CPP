//WAP to calculate the total no. of vowels,consonants and spaces inside a string
#include<stdio.h>
int main(){
	char arr1[100];
	int i,vo=0,count=0,sp=0,con;
	printf("Enter the string:");
	gets(arr1);
	for(i=0;arr1[i]!='\0';i++){
		count++;//counting the total no. of elements inside the string
	}
	//converting all the elemnts into uppercase
    for(i=0;arr1[i]!='\0';i++){
		if(arr1[i]>='a'&& arr1[i]<='z'){
			arr1[i]=arr1[i]-32;
		}
	}
	for(i=0;arr1[i]!='\0';i++){
		if(arr1[i]=='A'||arr1[i]=='E'||arr1[i]=='I'||arr1[i]=='O'||arr1[i]=='U'){
			vo=vo+1;//counting the total no. of vowels
		}
		if(arr1[i]==32){
			sp=sp+1;//counting the total no. of space
		}
	}
	con=count-(vo+sp);//counting the total no. of consonants
	printf("Vowels present in the string is %d\n",vo);
	printf("space present in the string is %d\n",sp);
	printf("consonants present in the string is %d",con);
	return 0;
}

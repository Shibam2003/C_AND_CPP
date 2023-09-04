//compute absolute error relative error and relative percentage error in computation of (pie) using appxomation formula.
#include<stdio.h>
#include<math.h>
int main(){
	int i,k;
	float vt,va,ea,er,erp;
	printf("Enter the value of k: ");
	scanf("%d",&k);
	vt=3.141593;
	for(i=1;i<=k;i++){
		va=va+4*(pow(-1,i-1))*(1.0/(2*i-1));
	}
	ea=fabs(vt-va);
	er=ea/vt;
	erp=er*100;
	printf("%f",vt);
	printf("\nva=%f",va);
	printf("\nea=%f",ea);
	printf("\ner=%f",er);
	printf("\nerp=%f",erp);
	return 0;
	
}

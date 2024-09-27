#include<stdio.h>;
#include<math.h>
int main(){
	float c,r,p,t;
	printf("enter principal ammount");
	scanf("%f",&p);
	printf("enter rate");
	scanf("%f",&r);
	printf("enter time");
	scanf("%f",&t);

    c = p*(pow((1+r/100),t));
	printf("compound interest = %f",c);
		

}
	
   

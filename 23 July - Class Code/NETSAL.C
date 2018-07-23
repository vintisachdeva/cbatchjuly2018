#include<stdio.h>
#include<conio.h>
void main(){
	float sal, hra, da, ta, pf= 1400, netSal;
	clrscr();

	printf("Enter your basic salary = ");
	scanf("%f", &sal);	// 1000

	hra = .3*sal;  // int --> 299 float --> 300
	da = .2*sal;
	ta = .1*sal;

	netSal = (sal+hra+da+ta)-pf;
	printf("\nHRA is = %f", hra);
	printf("\nDA is = %f", da);
	printf("\nTA is = %f", ta);
	printf("\nNet Salary is = %f", netSal);
	getch();
}
//Avg time = Page Fault % ( Modified %( Time ) +  (1- Modified %) (Time)) + (1- Page Fault %) Memory time

#include<stdio.h>
#include<conio.h>
int main()
{
float avg_time=200,t1=20,t2=8,memoryt=100;
long double pf;
float m1=0.7,m2=0.3;	
pf=(avg_time-(1-(m2*t2*(10^6)))-memoryt)/((m1*t1*(10^6))-memoryt);
printf("Maximum acceptable page fault rate is :- %d ",pf);
}

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int fib(int a);
void *fun(void *a);

int main(){
int a;
pthread_t pthread;
printf("Enter number of Fibonacci Sequence : ");
scanf("%d",&a);
printf("\n");
pthread_create(&pthread,NULL,fun,(void *)a);
pthread_join(pthread,NULL);
return 0;
}

void *fun(void *a){
int d=(int)a;
int i;
for(i=0;i<d;i++){
printf("%d",fib(i));
}
}
int fib(int a){
if(a<=1){
return a;
}
else{
return fib(a-1)+fib(a-2);
}}

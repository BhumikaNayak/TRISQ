#include<stdio.h>
int main()
{
int Testcases;
scanf("%d\n",&Testcases); //number of testcases

for(int i=0;i<Testcases;i++) //using for loop
{
int base,count,msq; //dectaration of variables
scanf("%d\n",&base);
{
msq = (base-2)/2;
count=msq*(msq+1)/2;
}
printf("%d\n",count);
}
return 0;
}
//code by bhumika nayak

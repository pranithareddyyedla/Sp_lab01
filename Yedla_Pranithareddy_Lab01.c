#include<stdio.h>
int main()
 {
int givenNumber,i,count=0;
printf("enter the givenNumber\n");
scanf("%d",&givenNumber);
for(i=2;i<givenNumber;i++)
{
if(givenNumber%i==0)
{
count++;
}
}
if(count==0)
{
printf("The given number is prime");
}
else
printf("The given number is not prime");
return 0;
}
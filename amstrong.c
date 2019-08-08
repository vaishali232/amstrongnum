#include<stdio.h>
int main()
{
unsigned long long int n,tempnum,ams=0,rem;
scanf("%llu",&n);
tempnum=n;
while(n>0)
{
rem=n%10;
ams+=rem*rem*rem;
n/=10;
}
if(ams==tempnum)
{
printf("yes");
}
else
{
printf("no");
}

}

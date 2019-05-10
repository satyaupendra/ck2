#include<stdio.h>
int main()
{
	int num,powe;
	long long prd=1;
	scanf("%d%d",&num,&powe);
	if(powe>0)
	{
	while(powe!=0)
	{
	 prd=prd*num;
	 powe--;
	}
	printf("%lld",prd);
	}
	else if(powe==0)
	{
	    printf("1");
	}
	return 0;
}
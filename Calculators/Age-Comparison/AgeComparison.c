#include<stdio.h>

using namespace std;

int main()
{
	int ali, zia, jan;
	
	printf("enter the age of ali jan and zia: ");
	scanf("%d %d %d", &ali, &jan, &zia);
	
	if(ali <= jan && ali <= zia)
	{
		printf("ali is youngest");
	}
	
	if(jan <= ali && jan <= zia)
	{
		printf("jan is youngest");
	}
	
	if(zia <= ali && zia <= jan)
	{
		printf("zia is youngest");
	}

	return 0;
}
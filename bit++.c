#include<stdio.h>
int main()
{
	int n,i,j=0;
	scanf("%d",&n);
	char a[n][3];
	for(i=0 ; i<n ; i++)
		scanf("%s",a[i]);
	for(i=0 ; i<n ; i++)
	{
		if(a[i][0] == '+' || a[i][2] == '+')
			j += 1;
		else if(a[i][0] == '-' || a[i][2] == '-')
			j -= 1;
	}
	printf("%d",j);
	return 0;
}

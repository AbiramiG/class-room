#include<stdio.h>
#include<stdlib.h>
int find_max(int count[],int n)
{
	int i,id,max;
	max=0;
	for(i=0;i<n;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			id=i;
		}
	}
	return id;
}
int main()
{
	int *count,n,ch,i=0,j,t_c=0,max,invalid_c;
	char **parties;
	printf("\nenter the number of parties\n");
	scanf("%d",&n);
	count=(int *)calloc(n,sizeof(int));
	parties=malloc(n*sizeof(char *));
	for(i=0;i<n;i++)
	{
		parties[i]=malloc(50*sizeof(char));
	}
	printf("\nenter the parties name\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",parties[i]);
	}
	do
	{
		printf("\n1.want to vote\n2.want to quit\n");
		printf("\nenter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("\nenter the party name\n");
					for(i=0;i<n;i++)
					{
						printf("\n%d.%s",i+1,parties[i]);
					}
					scanf("%d",&j);
					if(j<=n)
					{
						count[j-1]++;
					}
					else
					{
						invalid_c++;
					}
					break;
			case 2:
					printf("\nthe individual votes\n");
					for(i=0;i<n;i++)
					{
						printf("\n%s=%d\n",parties[i],count[i]);
					}
					max=find_max(count,n);
					printf("\nthe party which has won is %s\twith\t%d\t\n",parties[max],count[max]);
					printf("\nthe number of invalid votes is %d",invalid_c);
		}
	}while(ch!=2);
return 0;
}
	
	

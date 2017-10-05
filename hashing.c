#include<stdio.h>
#include<math.h>
#define MAX_SIZE 10
int hash(int k)     //call hash function
{
	return k%MAX_SIZE;
}
	int linear_prob(int h)    //
	{
		return ++h%MAX_SIZE;
	}
	int quadratic_prob(int h,int i)
	{
	return (int)(h+pow(i,2))%MAX_SIZE;
	}
	int double_hash(int h,int i)
	{
		return (h+i*linear_prob(h))%MAX_SIZE;
	}
	void display(int a[])
	{
		int i;
		printf("\nThe Elements of Array are\n");
		for(i=0;i<MAX_SIZE;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	int main()
	{
		int a[MAX_SIZE],i,h,e,count,ch,i=0;
		for(i=0;i<10;i++)
		a[i]=-1;
		do
		{
			count=0;
			printf("\nEnter the number to be stored");
			scanf("%d",&e);
			h=hash(e);
			if(a[h]==-1)
			{
			a[h]=e;
			display(a);
		    }
			else
			{
				while(count<MAX_SIZE)
				{
					count++;
					printf("\nCollision occured at %d",h);
					printf("\nPlease enter your choice of resolution");
					printf("\n1.Linear probing\n2.Quadratic probing\n3.Double hashing\n");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1:
						h=linear_prob(h);
						break;
						case 2:
						h=quadratic_prob(h,count);
						break;
						case 3:
						h=double_hash(h,count);
						break;
						default:
						printf("\nInvalid choice");
						break;
					}
						
					h=linear_prob(h);
					if(a[h]==-1)
					{
						a[h]=e;
						display(a);
						break;
					}
					else
					break;
				}
			}
		}
			if(count==MAX_SIZE)
			{
			printf("\nArray is full or collision resolution not successfull");
			return 0;
            }
		}while(1);
	}

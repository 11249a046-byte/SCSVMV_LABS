//Aim: To implement tower of hanoi.
#include<stdio.h>
void TowerOfHanoi(int n,char s,char d,char a)
{
	if(n==1)
	{
		printf("move the disk %d from %c to %c\n",n,s,d);
		return ;
	}
	TowerOfHanoi(n-1,s,a,d);
	printf("move the disk %d from %c to %c \n",n,s,d);
	TowerOfHanoi(n-1,a,d,s);	
}
int main()
{
	int disks_count;
	printf("enter how may disks are there:\n");
	scanf("%d",&disks_count);
	printf("required moves:\n");
	TowerOfHanoi(disks_count,'s','d','a');
}

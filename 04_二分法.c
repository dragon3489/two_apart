#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int left,right,mid;
	int num;
	
	while(1)
	{	
		left=0;
		right=sizeof(a)/sizeof(a[1])-1;
		mid=(left+right)/2;
		printf("������Ҫ�ҵ���,����s����ѭ����\n");
		scanf("%d",&num);
		if(getchar()=='s')
			break;
		while(left<=right)
		{
			if(a[mid]==num)
			{
				printf("�ҵ��ˣ��±���:%d\n",mid);
				break;
			}
			else if(a[mid]>num)
			{
				right=mid-1;
			}
			else if(a[mid]<num)	
			{
				left=mid+1;
			}
			mid=(left+right)/2;
		}
		if(left>right)
			printf("���޴���!\n");
	}

}
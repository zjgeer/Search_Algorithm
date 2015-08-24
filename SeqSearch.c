#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXSIZE 10

typedef struct
{
	int r[MAXSIZE];
	int length;
}sqList;

/* 顺序查找，L为数组，n为要查找的数组个数，key为要查找的关键字 */
int SeqSearch_1(sqList *L,int n,int key)
{
	int i;
	for(i = 1;i <= n;i++)
	{
		if(L->r[i] == key)
		{
			return i;
		}
	}
	return 0;
}

int SeqSearch_2(sqList *L,int n,int key)
{
	int i;
	L->r[0] = key;
	i = n;
	while(L->r[i] != key)
	{
		i--;
	}
	return i;
}
/* 	折半查找技术，又称为二分查找。他的前提是线性表中的记录
	必须是关键码有序（通常从小到大有序），线性表必须采用顺序
	存储。折半查找的基本思路是：在有序表中，取中间记录作为比
	较对象，若给定值与中间记录的关键字相等，则查找成功；若给
	定值小于中间记录的关键字，则在中间记录的左半边区继续查找；
	若给定值大于中间记录的关键字，则在中间记录的右半区继续查找；
	不断重复上述过程，直到查找成功；获取没有该记录，则失败*/
int BinarySearch(sqList *L,int n,int key)
{
	int low,high,mid;
	low = 1;
	high = n;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(key < L->r[mid])
		{
			high = mid - 1;
		}
		else if(key > L->r[mid])
		{
			low = mid + 1;
		}
		else
		{
			return mid;
		}
	}
}

int main(int argc,char *argv[])
{
		return 0;
}
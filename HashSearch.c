#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SUCCESS 		1
#define UNSUCCESS	    0
#define NULLKEY		-32768
#define HASHSIZE 		12

#define OK 				1

typedef int Status;

typedef struct
{
	int *elem;
	int count;
}HashTable;

int m = 100; 				// 散列表表长，全局变量

Status InitHashTable(HashTable *H)
{
	int i;
	m = HASHSIZE;
	H->count = m;
	H->elem = (int *)malloc(m * sizeof(int));
	for(i = 0;i < m;i++)
	{
		H->elem[i] = NULLKEY;
	}
	return OK;
}
/* 散列函数 */
int Hash(int key)
{
	return key % m;
}
/* 插入关键字散列表 */
void InsertHash(HashTable *H,int key)
{
	int addr = Hash(key);
	while(H->elem[addr] != NULLKEY)
	{
		addr = (addr + 1) % m;
	}
	H->elem[addr] = key;
	
}

/* 
	散列表查找关键字(O(1))
 */
Status SearchHash(HashTable H,int key,int *addr)
{
	*addr = Hash(key);
	while(H.elem[*addr] != key)
	{
		*addr = (*addr + 1) % m;
		if(H.elem[*addr] == NULLKEY || *addr == Hash(key))
		{
			return UNSUCCESS;
		}
	}
	return SUCCESS;
}

int main(int argc,int *argv[])
{
	int i;
	int mykey = 1;
	HashTable myHashTable;
	
	srand((unsigned)time(NULL));	
	
	InitHashTable(&myHashTable);
	
	for(i = 0;i < m;i++)
	{
		InsertHash(&myHashTable,rand() % 100);
	}

	if(SearchHash(myHashTable,8,&mykey) == SUCCESS)
	{
		printf("The hash table search result is :%d\n",mykey);
		printf("The search result myHashTable.elem[%d] = %d\n",mykey,myHashTable.elem[mykey]);
	}
	else
	{
		printf("Unsuccess!\n");
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define OK    1
#define ERROR 0
#define TRUE  1
#define FALSE 0

#define MAXSIZE 20

typedef int Status;
typedef int ElemType;

Status visit(ElemType c)
{
	printf("%d ",c);
	return OK;
}

typedef struct
{
	ElemType data[MAXSIZE];
	int length;
}SqList;

Status InitList(SqList *L)
{
	L->length = 0;
	return OK;
}

Status ListEmpty(SqList L)
{
	if(0 == L.length)
		return TRUE;
	else
		return FALSE;
}

Status ClearList(SqList *L)
{
	L->length = 0;
	return OK;
}

int ListLength(SqList L)
{
	return L.length;
}




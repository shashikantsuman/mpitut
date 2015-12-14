#include "MPI.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __data__
{
	void* data;
	struct __data__* next;
}_DATA,*_PDATA;
typedef struct __V__
{
	_PDATA head;
	_PDATA tail;
	_PDATA current;
	int count;
}VECTOR,*PVECTOR;

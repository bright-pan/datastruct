/*********************************************************************
 * Filename:			sqlist.c
 *
 * Description:
 *
 * Author:              Bright Pan
 * Email:				loststriker@gmail.com
 * Date:				2014-03-14
 *
 * Modify:
 *
 * Copyright (C) 2014 Yuettak Co.,Ltd
 ********************************************************************/

#include "sqlist.h"
#include <stdio.h>

STATUS
sqlist_init(SQLIST_TYPEDEF *sqlist)
{
	sqlist->length = 0;
	return OK;
}
int
sqlist_locate(SQLIST_TYPEDEF *sqlist, ELEM_TYPEDEF elem)
{
	int i;

	if (sqlist_is_empty(sqlist) == OK)
	{
		return 0;
	}
	for (i = 0; i < sqlist->length; i++) {
		if (elem == sqlist->data[i])
			return i + 1;
	}
	return 0;

}
STATUS
sqlist_get(SQLIST_TYPEDEF *sqlist, int index, ELEM_TYPEDEF *elem)
{
	int i;
	if (sqlist->length == 0 || index < 1 || index > sqlist->length)
	{
		return ERROR;
	}
	*elem = sqlist->data[index-1];
	return OK;
}

STATUS
sqlist_insert(SQLIST_TYPEDEF *sqlist, int index, ELEM_TYPEDEF elem)
{
	int i;
	if (sqlist->length >= MAX_SIZE)
	{
		printf("sqlist is full, length >= MAX_SIZE\n");
		return ERROR;
	}
	if (index < 1)
	{
		printf("sqlist insert index is < 1\n");
		return ERROR;
	}
	if (index > sqlist->length + 1)
	{
		printf("sqlist insert index is > sqlist->length + 1\n");
		return ERROR;
	}
	if (index <= sqlist->length)
	{
		for (i = sqlist->length - 1; i >= index - 1; i--) {
			sqlist->data[i+1] = sqlist->data[i];
		}
	}
	sqlist->data[index-1] = elem;
	sqlist->length++;
	return OK;
}

static STATUS
data_print(ELEM_TYPEDEF data)
{
	printf("%d ", data);
	return OK;
}

STATUS
sqlist_traverse(SQLIST_TYPEDEF *sqlist)
{
	int i;
	printf("sqlist length is %d\n", sqlist->length);
	for (i = 0; i < sqlist->length; i++) {
		data_print(sqlist->data[i]);
	}
	printf("\n");
	return OK;
}
SQLIST_TYPEDEF *
sqlist_create(SQLIST_TYPEDEF *sqlist, int numbers)
{
	int i;
	srand((unsigned)time(NULL));

	if (numbers > MAX_SIZE)
	{
		numbers = MAX_SIZE;
	}
	for (i = 0; i < numbers; i++) {
		sqlist->data[i] = rand() % 100;
	}
	sqlist->length = numbers;
	return sqlist;
}

STATUS
sqlist_is_empty(SQLIST_TYPEDEF *sqlist)
{
	if (sqlist->length)
	{
		return ERROR;
	}
	else
	{
		return OK;
	}
}

STATUS
sqlist_clear(SQLIST_TYPEDEF *sqlist)
{
	sqlist->length = 0;
	return OK;
}

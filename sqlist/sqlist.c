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
	}
	if (i <= sqlist->length)
	{
		for (i = sqlist->length - 1; i >= index - 1; i--) {
			sqlist->data[i+1] = sqlist->data[i];
		}
	}
	sqlist->data[index-1] = elem;
	sqlist->length++;
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

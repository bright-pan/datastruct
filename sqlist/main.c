/*********************************************************************
 * Filename:			main.c
 *
 * Description:
 *
 * Author:				Bright Pan
 * Email:				lenovo@BRIGHT
 * Date:				2014-03-14
 *
 * Modify:
 *
 * Copyright (C) 2014 Yuettak Co.,Ltd
 ********************************************************************/

#include <stdio.h>
#include "sqlist.h"

int main(int argc, char *argv[])
{
	STATUS status;
	SQLIST_TYPEDEF sqlist;
	int i;
	status = sqlist_init(&sqlist);
	if (status == OK)
	{
		printf("sqlist initial success!!!\n");
		printf("sqlist`s lenght is %d \n", sqlist.length);
	}
	else
	{
		printf("sqlist initial failure!!!\n");
	}
	for (i = 1; i < 11; i++)
	{
		sqlist_insert(&sqlist, i, (ELEM_TYPEDEF)i);
	}
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
	sqlist_insert(&sqlist, 8, (ELEM_TYPEDEF)5);
	sqlist_traverse(&sqlist);
    return 0;
}

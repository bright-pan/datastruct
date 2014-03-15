/*********************************************************************
 * Filename:			list.h
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

#define MAX_SIZE 20

typedef int ELEM_TYPEDEF;

typedef enum {

	OK = 0,
	ERROR = 1,

}STATUS;

typedef struct {

	ELEM_TYPEDEF data[MAX_SIZE];
	int length;

}SQLIST_TYPEDEF;

STATUS
sqlist_init(SQLIST_TYPEDEF *sqlist);

STATUS
sqlist_insert(SQLIST_TYPEDEF *sqlist, int index, ELEM_TYPEDEF elem);

STATUS
sqlist_traverse(SQLIST_TYPEDEF *sqlist);

SQLIST_TYPEDEF *
sqlist_create(SQLIST_TYPEDEF *sqlist, int numbers);

STATUS
sqlist_is_empty(SQLIST_TYPEDEF *sqlist);

STATUS
sqlist_clear(SQLIST_TYPEDEF *sqlist);

STATUS
sqlist_get(SQLIST_TYPEDEF *sqlist, int index, ELEM_TYPEDEF *elem);

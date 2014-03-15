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
	char cmd;
	int pos;
	ELEM_TYPEDEF elm;
	int num;
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
	printf("Usage:\n1: list traverse\n2: list create\n3: list insert\n4: check sqlist is empty\n5: clear sqlist\n6: get list data\n7: list locate\n0: exit the program\n");
	while (1)
	{
		scanf("%c", &cmd);

		switch (cmd)
		{
			case '1' :
				{
					sqlist_traverse(&sqlist);
					printf("\n");
					break;
				}
			case '2':
				{
					printf("Please input list numbers :");
					scanf("%d", &num);
					sqlist_create(&sqlist, num);
					printf("\n");
					break;
				}
			case '3':
				{
					printf("Please input inset position :");
					scanf("%d", &pos);
					printf("Please input element value :");
					scanf("%d", &elm);
					sqlist_insert(&sqlist, pos, elm);
					printf("\n");
					break;
				}
			case '4' :
				{
					if (sqlist_is_empty(&sqlist) == OK)
					{
						printf("sqlist is empty!\n");
					}
					else
					{
						printf("sqlist is not empty!\n");
					}
					break;
				}
			case '5' :
				{
					if (sqlist_clear(&sqlist) == OK)
					{
						printf("sqlist is clear!\n");
					}
					else
					{
						printf("sqlist is not clear!\n");
					}
					break;
				}
			case '6' :
				{
					printf("Please input get list data index :");
					scanf("%d", &pos);
					if (sqlist_get(&sqlist, pos, &elm) == OK)
					{
						printf("get list data list[%d] : %d\n", pos, elm);
					}
					else
					{
						printf("get failure!\n");
					}
					break;
				}
			case '7' :
				{
					printf("Please input locate date:");
					scanf("%d", &elm);
					if (pos = sqlist_locate(&sqlist, elm))
					{
						printf("locate data %d`s index is %d\n", elm, pos);
					}
					else
					{
						printf("locate failure!!!\n");
					}
					break;
				}
			case '0' :
				{
					exit(0);
					break;
				}
			default:
				{
					break;
				}
		}
	}
    return 0;
}

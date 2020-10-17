#ifndef __FUN2_H
#define __FUN2_H
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"STRINGHEAP.h"
#include"TREENODE.h" 
void Fun21(FILE *fdat,Tree *t){
	int time,tag;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->child;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&time);
	while(1){
		if(time==-1){
			break;
		}
		else if(time==0){
			tag=0;
			fseek(fdat,12,SEEK_SET);
			fwrite(&time,sizeof(int),1,fdat);
			fseek(fdat,796,SEEK_SET);
			fwrite(&tag,sizeof(int),1,fdat);
			PrintString(t->p->data);
		}
		else if(time>0&&time<=INT_MAX){
			tag=1;
			fseek(fdat,12,SEEK_SET);
			fwrite(&time,sizeof(int),1,fdat);
			fseek(fdat,796,SEEK_SET);
			fwrite(&tag,sizeof(int),1,fdat);
			PrintString(t->p->data);
		}
		else{
			PrintString(t->p->sibling->data);
		}
		printf("\n\nPress \"enter\" to return\n\n");
		fflush(stdin);
		getchar();
		fflush(stdin);
		system("cls");
		PrintString(tmp->data);
		scanf("%d",&time);
	}
	return;
}
void Fun22(FILE *fdat,Tree *t){
	int map,level;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->child->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d,%d",&map,&level);
	while(1){
		if(map==-1){
			break;
		}
		else if(map>=1&&map<=5&&level>=1&&level<=10){
			fseek(fdat,4,SEEK_SET);
			level=(map-1)*10+level;
			fwrite(&level,sizeof(int),1,fdat);
			PrintString(t->p->data);
		}
		else{
			PrintString(t->p->sibling->data);
		}
		printf("\n\nPress \"enter\" to return\n\n");
		fflush(stdin);
		getchar();
		fflush(stdin);
		system("cls");
		PrintString(tmp->data);
		scanf("%d,%d",&map,&level);
	}
	return;
}
#endif

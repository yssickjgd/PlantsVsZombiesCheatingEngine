#ifndef __FUN4_H
#define __FUN4_H
#include<stdio.h>
#include<stdlib.h>
#include"STRINGHEAP.h"
#include"TREENODE.h" 
void Fun41(FILE *fdat,Tree *t){
	int game,time;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->child;
	system("cls");
	PrintString(tmp->data);
	scanf("%d,%d",&game,&time);
	while(1){
		if(game==-1){
			break;
		}
		else if(game>=1&&game<=10){
			fseek(fdat,216+4*(game-1),SEEK_SET);
			fwrite(&time,sizeof(int),1,fdat);
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
		scanf("%d,%d",&game,&time);
	}
	return;
}
void Fun42(FILE *fdat,Tree *t){
	int game,time;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->child->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d,%d",&game,&time);
	while(1){
		if(game==-1){
			break;
		}
		else if(game>=1&&game<=10){
			fseek(fdat,256+4*(game-1),SEEK_SET);
			fwrite(&time,sizeof(int),1,fdat);
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
		scanf("%d,%d",&game,&time);
	}
	return;
}
#endif

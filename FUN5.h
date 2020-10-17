#ifndef __FUN5_H
#define __FUN5_H
#include<stdio.h>
#include<stdlib.h>
#include"STRINGHEAP.h"
#include"TREENODE.h" 
void Fun51(FILE *fdat,Tree *t){
	int game,flag;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->child;
	system("cls");
	PrintString(tmp->data);
	scanf("%d,%d",&game,&flag);
	while(1){
		if(game==-1){
			break;
		}
		else if(game>=1&&game<=5){
			fseek(fdat,16+4*(game-1),SEEK_SET);
			fwrite(&flag,sizeof(int),1,fdat);
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
		scanf("%d,%d",&game,&flag);
	}
	return;
}
void Fun52(FILE *fdat,Tree *t){
	int game,flag;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->child->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d,%d",&game,&flag);
	while(1){
		if(game==-1){
			break;
		}
		else if(game>=1&&game<=5){
			fseek(fdat,36+4*(game-1),SEEK_SET);
			fwrite(&flag,sizeof(int),1,fdat);
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
		scanf("%d,%d",&game,&flag);
	}
	return;
}
void Fun53(FILE *fdat,Tree *t){
	int game,flag;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->child->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d,%d",&game,&flag);
	while(1){
		if(game==-1){
			break;
		}
		else if(game>=1&&game<=5){
			fseek(fdat,56+4*(game-1),SEEK_SET);
			fwrite(&flag,sizeof(int),1,fdat);
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
		scanf("%d,%d",&game,&flag);
	}
	return;
}
#endif

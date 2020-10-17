#ifndef __FUN84_H
#define __FUN84_H
#include<stdio.h>
#include<stdlib.h>
#include"STRINGHEAP.h"
#include"TREENODE.h" 
#include"GARDEN.h"
void Fun841(FILE *fdat,Tree *t,int n,int loc,plant p[]){
	int status,flag,mov;
	TreeNode *tmp;
	mov=0;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->sibling->sibling->child;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&status);
	while(1){
		if(status==-1){
			break;
		}
		else if(status==1){
			for(flag=loc+1;flag<n;flag++){
				mov=1;
				p[flag-1]=p[flag];
			}
			if(mov==1){
				n--;
				fseek(fdat,816,SEEK_SET);
				fwrite(&n,sizeof(int),1,fdat);
				fwrite(p,sizeof(plant),n,fdat);
				PrintString(t->p->data);
			}
			else{
				PrintString(t->p->sibling->data);
			}
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
		scanf("%d",&status);
	}
	return;
}
#endif

#ifndef __FUN8_H
#define __FUN8_H
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<time.h>
#include"STRINGHEAP.h"
#include"TREENODE.h" 
#include"GARDEN.h"
#include"AUTOARRAY.h" 
#include"FUN84.h"
void Fun81(FILE *fdat,Tree *t,List *l){
	int n,flag,status;
	plant p[48];
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child;
	system("cls");
	PrintString(tmp->data);
	fseek(fdat,816,SEEK_SET);
	fread(&n,sizeof(int),1,fdat);
	fread(p,sizeof(plant),n,fdat);
	printf("\n\nTotally %d plants\n\n",n);
	for(flag=0;flag<n;flag++){
		printf("plant%d:\n",flag+1);
		printf("name:");
		PrintString(l->data[p[flag].maintype]);
		printf("\n");
	}
	scanf("%d",&status);
	while(1){
		if(status==-1){
			break;
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
void Fun82(FILE *fdat,Tree *t){
	int status;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&status);
	while(1){
		if(status==-1){
			break;
		}
		else if(status==1){
			status=0;
			fseek(fdat,816,SEEK_SET);
			fwrite(&status,sizeof(int),1,fdat);
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
		scanf("%d",&status);
	}
	return;
}
void Fun83(FILE *fdat,FILE *fgdn,Tree *t){
	int n;
	plant pl,p[48];
	TreeNode *tmp;
	memset(p,0,sizeof(plant)*48);
	fseek(fdat,816,SEEK_SET);
	fread(&n,sizeof(int),1,fdat);
	fseek(fgdn,0,SEEK_SET);
	fread(&pl,sizeof(plant),1,fgdn);
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	fseek(fdat,816,SEEK_SET);
	fread(&n,sizeof(int),1,fdat);
	fread(p,sizeof(plant),48,fdat);
	scanf("%d,%d,%d,%d",&pl.place,&pl.x,&pl.y,&pl.maintype);
	while(1){
		if(pl.place==-1){
			break;
		}
		else if(pl.place>=1&&pl.place<=3){
			if(n==48){
				PrintString(t->p->sibling->sibling->data);
				break;
			} 
			else{
				if(pl.place==1||pl.place==2){
					pl.place=pl.place-1;	
				}
				pl.maintype=pl.maintype-1;
				pl.size=3;
				p[n]=pl;
				n++;
			}
			fseek(fdat,816,SEEK_SET);
			fwrite(&n,sizeof(int),1,fdat);
			fwrite(p,sizeof(plant),48,fdat);
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
		scanf("%d,%d,%d,%d",&pl.place,&pl.x,&pl.y,&pl.maintype);
	}
	return;
}
void Fun84(FILE *fdat,Tree *t){
	int status,n,flag;
	plant p[48];
	TreeNode *tmp;
	memset(p,0,sizeof(plant)*48);
	fseek(fdat,816,SEEK_SET);
	fread(&n,sizeof(int),1,fdat);
	fread(&p[flag],sizeof(plant),48,fdat);
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&status);
	while(1){
		if(status==-1){
			break;
		}
		else if(n>=1&&status>=0&&status<=n-1){
			Fun841(fdat,t,n,status,p);
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
void Fun85(FILE *fdat,Tree *t){
	int id,name,size,n,flag;
	plant p[48];
	TreeNode *tmp;
	memset(p,0,sizeof(plant)*48);
	fseek(fdat,816,SEEK_SET);
	fread(&n,sizeof(int),1,fdat);
	fread(&p[flag],sizeof(plant),48,fdat);
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d,%d,%d",&id,&name,&size);
	while(1){
		if(id==-1){
			break;
		}
		else if(id>=0&&id<=n-1){
			p[id].maintype=name-1;
			p[id].size=size;
			fseek(fdat,816,SEEK_SET);
			fwrite(&n,sizeof(int),1,fdat);
			fwrite(p,sizeof(plant),48,fdat);
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
		scanf("%d,%d,%d",&id,&name,&size);
	}
	return;
}
void Fun86(FILE *fdat,FILE *fgda,Tree *t){
	int status,n,flag;
	plant p[48];
	TreeNode *tmp;
	memset(p,0,sizeof(plant)*48);
	fseek(fgda,0,SEEK_SET);
	fread(&n,sizeof(int),1,fgda);
	fread(&p[flag],sizeof(plant),48,fgda);
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&status);
	while(1){
		if(status==-1){
			break;
		}
		else if(status==1){
			fseek(fdat,816,SEEK_SET);
			fwrite(&n,sizeof(int),1,fdat);
			fwrite(p,sizeof(plant),48,fdat);
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
		scanf("%d",&status);
	}
	return;
}
#endif

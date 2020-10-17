#ifndef __FUN_H
#define __FUN_H
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"STRINGHEAP.h"
#include"TREENODE.h" 
#include"FUN2.h"
#include"FUN4.h"
#include"FUN5.h"
#include"FUN8.h"
void Fun1(FILE *fdat,Tree *t){
	int coin;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&coin);
	while(1){
		if(coin==-1){
			break;
		}
		else if(coin>=0&&coin<=9999990){
			coin=coin/10;
			fseek(fdat,8,SEEK_SET);
			fwrite(&coin,sizeof(int),1,fdat);
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
		scanf("%d",&coin);
	}
	return;
} 
void Fun2(FILE *fdat,Tree *t){
	int menu;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&menu);
	while(1){
		if(menu==-1){
			break;
		}
		else if(menu==1){
			Fun21(fdat,t);
		}
		else if(menu==2){
			Fun22(fdat,t);
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
		scanf("%d",&menu);
	}
	return;
}
void Fun3(FILE *fdat,Tree *t){
	int game,time;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d,%d",&game,&time);
	while(1){
		if(game==-1){
			break;
		}
		else if(game>=1&&game<=20){
			fseek(fdat,76+4*(game-1),SEEK_SET);
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
void Fun4(FILE *fdat,Tree *t){
	int menu;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&menu);
	while(1){
		if(menu==-1){
			break;
		}
		else if(menu==1){
			Fun41(fdat,t);
		}
		else if(menu==2){
			Fun42(fdat,t);
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
		scanf("%d",&menu);
	}
	return;
}
void Fun5(FILE *fdat,Tree *t){
	int menu;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&menu);
	while(1){
		if(menu==-1){
			break;
		}
		else if(menu==1){
			Fun51(fdat,t);
		}
		else if(menu==2){
			Fun52(fdat,t);
		}
		else if(menu==3){
			Fun53(fdat,t);
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
		scanf("%d",&menu);
	}
	return;
}
void Fun6(FILE *fdat,Tree *t){
	int height;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&height);
	while(1){
		if(height==-1){
			break;
		}
		else if(height>=0&&height<=INT_MAX){
			fseek(fdat,212,SEEK_SET);
			fwrite(&height,sizeof(int),1,fdat);
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
		scanf("%d",&height);
	}
	return;
}
void Fun7(FILE *fdat,Tree *t){
	int item,status;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d,%d",&item,&status);
	while(1){
		if(item==-1){
			break;
		}
		else if(item>=1&&item<=28){
			if(item>=10&&item<=23){
				item++;
			}
			else if(item>=23){
				item++;
				item++;
			}
			fseek(fdat,416+4*(item-1),SEEK_SET);
			if((item>=1&&item<=9||item==14||item>=17&&item<=20||item==23||item==25||item==28||item==30)&&(status==0||status==1)){
				fwrite(&status,sizeof(int),1,fdat);
				PrintString(t->p->data);
			}
			else if(item>=11&&item<=13){
				if(status>0){
					status=0;
				}
				else{
					status=INT_MAX;
				}
				fwrite(&status,sizeof(int),1,fdat);
				PrintString(t->p->data);
			}
			else if(item==15||item==16||item==27||item==29){
				status=status+1000;
				fwrite(&status,sizeof(int),1,fdat);
				PrintString(t->p->data);
			}
			else if(item==22){
				fwrite(&status,sizeof(int),1,fdat);
				PrintString(t->p->data);
			}
			else if(item==26){
				fwrite(&status,sizeof(int),1,fdat);
				PrintString(t->p->data);
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
		scanf("%d,%d",&item,&status);
	}
	return;
}
void Fun8(FILE *fdat,FILE *fgdn,FILE *fgda,Tree *t,List *l){
	int menu;
	TreeNode *tmp;
	tmp=t->p->sibling->sibling->sibling->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling;
	system("cls");
	PrintString(tmp->data);
	scanf("%d",&menu);
	while(1){
		if(menu==-1){
			break;
		}
		else if(menu==1){
			Fun81(fdat,t,l);
		}
		else if(menu==2){
			Fun82(fdat,t);
		}
		else if(menu==3){
			Fun83(fdat,fgdn,t);
		}
		else if(menu==4){
			Fun84(fdat,t);
		}
		else if(menu==5){
			Fun85(fdat,t);
		}
		else if(menu==6){
			Fun86(fdat,fgda,t);
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
		scanf("%d",&menu);
	}
	return;
}
#endif

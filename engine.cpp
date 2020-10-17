//PVZ engine. 
//Success with 0, File error with 1
//Zhihao Ma 31rd, March, 2020 @USTC
#include<stdio.h>
#include<stdlib.h>
#include"STRINGHEAP.h" 
#include"TREENODE.h" 
#include"Fun.h"
main(){
	printf("\n\nThis is an exe file to change PVZ game.\nFor any bugs or crashes, you can contact me with information below.\nThank you for your cooperation!\n\nQQ:1345578933\nE-mail:yssickjgd@mail.ustc.edu.cn\n中国科学技术大学 西区 信息科学技术学院\n2020.06.01\n\n");
	printf("\n\n==================================================\n\n");
	
	
	//Variable
	int flag;
	FILE *fdat,*ftxt,*fplt,*fgdn,*fgda;
	String *serript,*serropr,*ssuc,*s,*s1,*s2,*s21,*s22,*s3,*s4,*s41,*s42,*s5,*s51,*s52,*s53,*s6,*s7,*s8,*s81,*s82,*s83,*s84,*s841,*s85,*s86; 
	Tree *t;
	TreeNode *tmp,*dad;
	List *l;
	int menu;
	
	
	//Initialize Plants Vs Zombies files
	fdat=fopen("C:\\ProgramData\\PopCap Games\\PlantsVsZombies\\userdata\\user1.dat","rb+");
	if(fdat==NULL){
		printf("\n\nCannot find file \"C:\\ProgramData\\PopCap Games\\PlantsVsZombies\\userdata\\user1.dat\"\n\n");
		return(1);
	}
	printf("\n\nOpen file \"C:\\ProgramData\\PopCap Games\\PlantsVsZombies\\userdata\\user1.dat\" success.\nFile pointer is 0x%x\n\n",fdat);
	ftxt=fopen("prompt.txt","r");
	if(ftxt==NULL){
		printf("\n\nCannot find file \"prompt.txt\"\n\n");
		return(1);
	}
	printf("\n\nOpen file \"prompt.txt\" success.\nFile pointer is 0x%x\n\n",ftxt);
	fplt=fopen("plants.txt","r");
	if(fplt==NULL){
		printf("\n\nCannot find file \"plants.txt\"\n\n");
		return(1);
	}
	printf("\n\nOpen file \"plants.txt\" success.\nFile pointer is 0x%x\n\n",fplt);
	fgdn=fopen("garden.dat","rb");
	if(fgdn==NULL){
		printf("\n\nCannot find file \"garden.dat\"\n\n");
		return(1);
	}
	printf("\n\nOpen file \"garden.dat\" success.\nFile pointer is 0x%x\n\n",fgdn);
	fgda=fopen("gardenall.dat","rb");
	if(fgda==NULL){
		printf("\n\nCannot find file \"gardenall.dat\"\n\n");
		return(1);
	}
	printf("\n\nOpen file \"gardenall.dat\" success.\nFile pointer is 0x%x\n\n",fgda);
	printf("\n\nInitialize files success\n\n");
	printf("\n\n==================================================\n\n");
	
	
	//Initialize Strings
	InitString(serript);
	InitString(serropr);
	InitString(ssuc);
	InitString(s);
	InitString(s1);
	InitString(s2);
	InitString(s21);
	InitString(s22);
	InitString(s3);
	InitString(s4);
	InitString(s41);
	InitString(s42);
	InitString(s5);
	InitString(s51);
	InitString(s52);
	InitString(s53);
	InitString(s6);
	InitString(s7);
	InitString(s8);
	InitString(s81);
	InitString(s82);
	InitString(s83);
	InitString(s84);
	InitString(s841);
	InitString(s85);
	InitString(s86);
	FileScanString(serript,ftxt);
	FileScanString(serropr,ftxt);
	FileScanString(ssuc,ftxt);
	FileScanString(s,ftxt);
	FileScanString(s1,ftxt);
	FileScanString(s2,ftxt);
	FileScanString(s21,ftxt);
	FileScanString(s22,ftxt);
	FileScanString(s3,ftxt);
	FileScanString(s4,ftxt);
	FileScanString(s41,ftxt);
	FileScanString(s42,ftxt);
	FileScanString(s5,ftxt);
	FileScanString(s51,ftxt);
	FileScanString(s52,ftxt);
	FileScanString(s53,ftxt);
	FileScanString(s6,ftxt);
	FileScanString(s7,ftxt);
	FileScanString(s8,ftxt);
	FileScanString(s81,ftxt);
	FileScanString(s82,ftxt);
	FileScanString(s83,ftxt);
	FileScanString(s84,ftxt);
	FileScanString(s841,ftxt);
	FileScanString(s85,ftxt);
	FileScanString(s86,ftxt);
	printf("\n\nInitialize strings success\n\n");
	printf("\n\n==================================================\n\n");
	
	
	//Create string tree
	InitTree(t);//ssuc
	tmp=t->p;
	tmp->data=ssuc;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//serript
	tmp=tmp->sibling;
	tmp->data=serript;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//serropr
	tmp=tmp->sibling;
	tmp->data=serropr;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s
	tmp=tmp->sibling;
	tmp->data=s;
	t->length++;
	tmp->child=(TreeNode *)malloc(sizeof(TreeNode));//s1
	tmp->sibling=NULL;
	tmp=tmp->child;
	tmp->data=s1;
	t->length++;
	t->depth++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s2
	dad=tmp->sibling;
	tmp=tmp->sibling;
	tmp->data=s2;
	t->length++;
	tmp->child=(TreeNode *)malloc(sizeof(TreeNode));//s21
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s3
	tmp=tmp->child;
	tmp->data=s21;
	t->length++;
	t->depth++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s22
	tmp=tmp->sibling;
	tmp->data=s22;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=NULL;
	tmp=dad->sibling;
	tmp->data=s3;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s4
	dad=tmp->sibling;
	tmp=tmp->sibling;
	tmp->data=s4;
	t->length++;
	tmp->child=(TreeNode *)malloc(sizeof(TreeNode));//s41
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s5
	tmp=tmp->child;
	tmp->data=s41;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s42
	tmp=tmp->sibling;
	tmp->data=s42;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=NULL;
	tmp=dad->sibling;
	tmp->data=s5;
	t->length++;
	tmp->child=(TreeNode *)malloc(sizeof(TreeNode));//s51
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s6
	dad=tmp;
	tmp=tmp->child;
	tmp->data=s51;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s52
	tmp=tmp->sibling;
	tmp->data=s52;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s53
	tmp=tmp->sibling;
	tmp->data=s53;
	tmp->child=NULL;
	tmp->sibling=NULL;
	tmp=dad->sibling;
	tmp->data=s6;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s7
	tmp=tmp->sibling;
	tmp->data=s7;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s8
	tmp=tmp->sibling;
	tmp->data=s8;
	t->length++;
	tmp->child=(TreeNode *)malloc(sizeof(TreeNode));//s81
	tmp->sibling=NULL;
	tmp=tmp->child;
	tmp->data=s81;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s82
	tmp=tmp->sibling;
	tmp->data=s82;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s83
	tmp=tmp->sibling;
	tmp->data=s83;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s84
	dad=tmp->sibling;
	tmp=tmp->sibling;
	tmp->data=s84;
	t->length++;
	tmp->child=(TreeNode *)malloc(sizeof(TreeNode));//s841
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s85
	tmp=tmp->child;
	tmp->data=s841;
	t->length++;
	t->depth++;
	tmp->child=NULL;
	tmp->sibling=NULL;
	tmp=dad->sibling;
	tmp->data=s85;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=(TreeNode *)malloc(sizeof(TreeNode));//s86
	tmp=tmp->sibling;
	tmp->data=s86;
	t->length++;
	tmp->child=NULL;
	tmp->sibling=NULL;
	
	
	
	//Create flower string
	InitList(l);
	l->data=(String **)calloc(sizeof(String *),52);
	l->length=52;
	l->size=52;
	for(flag=0;flag<52;flag++){
		InitString(l->data[flag]);
		FileScanString(l->data[flag],fplt);
	}
	
	
	//Prepare to run
	printf("\n\nPress \"enter\" to start the engine\n\n");
	fflush(stdin);
	getchar();
	fflush(stdin);
	system("cls");
	
	
	//Main function
	PrintString(s);
	scanf("%d",&menu);
	while(1){
		if(menu==-1){
			break;
		}
		else if(menu==1){
			Fun1(fdat,t);
		}
		else if(menu==2){
			Fun2(fdat,t);
		}
		else if(menu==3){
			Fun3(fdat,t);
		}
		else if(menu==4){
			Fun4(fdat,t);
		}
		else if(menu==5){
			Fun5(fdat,t);
		}
		else if(menu==6){
			Fun6(fdat,t);
		}
		else if(menu==7){
			Fun7(fdat,t);
		}
		else if(menu==8){
			Fun8(fdat,fgdn,fgda,t,l);
		}
		else{
			PrintString(t->p->sibling->data);
		}
		printf("\n\nPress \"enter\" to return\n\n");
		fflush(stdin);
		getchar();
		fflush(stdin);
		system("cls");
		PrintString(s);
		scanf("%d",&menu);
	}
	
	
	//Close
	fclose(fdat);
	fclose(ftxt);
	fclose(fplt);
	DestroyString(serript);
	DestroyString(serropr);
	DestroyString(ssuc);
	DestroyString(s);
	DestroyString(s1);
	DestroyString(s2);
	DestroyString(s21);
	DestroyString(s22);
	DestroyString(s3);
	DestroyString(s4);
	DestroyString(s41);
	DestroyString(s42);
	DestroyString(s5);
	DestroyString(s51);
	DestroyString(s52);
	DestroyString(s53);
	DestroyString(s6);
	DestroyString(s7);
	DestroyString(s8);
	DestroyString(s81);
	DestroyString(s82);
	DestroyString(s83);
	DestroyString(s84);
	DestroyString(s841);
	DestroyString(s85);
	DestroyString(s86);
	DestroyTree(t);
	for(flag=0;flag<52;flag++){
		DestroyString(l->data[flag]);
	}
}


#pragma once

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

#define HEADER1 "-----------------------BOOK TICKET-------------------------\n"
#define HEADER2 "|  number  |start city|reach city|takeofftime|receivetime|price|ticketnumber|\n"
#define HEADER3 "|-------|------|------|-------|--------|--------|------|-----|"
#define FORMAT  "|%-10s|%-10s|%-10s|%-10s|%-10s|%5d|  %5d        |\n"
#define DATA  p->data.num,p->data.startcity,p->data.reachcity,p->data.takeofftime,p->data.receivetime,p->data.price,p->data.tecketnum

struct train{
	char num[10];            //�г���
	char startcity[10];       //�������� 
	char reachcity[10];        //Ŀ�ĳ���
	char takeofftime[10];        //����ʱ��
	char receivetime[10];         //����ʱ��
	int price;                 //Ʊ��
	int ticketnum;              //Ʊ��
};

struct man
{
	char num[10];              //ID
	char name[10];           //����
	int bookNum;           //����Ʊ��
};


typedef struct node
{
	struct train data;
	struct node *next;
}Node, *Link;

typedef struct Man
{
	struct man data;
	struct Man *next;
}book, *bookLink;

int saveflag;

void menu();
void Traininfo(Link linkhead);
void printheader();
void printdata(Node *q);
void searchtrain(Link l);
void Bookticket(Link l, bookLink k);
void Modify(Link l);
void showtrain(Link l);
void SaveTrainInfo(Link l);
void SaveBookInfo(bookLink k);



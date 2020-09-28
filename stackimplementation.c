/*
 * stackimplementation.c
 * 
 * Copyright 2020 keerthi priya <keerthi priya@DESKTOP-LHLHAF9>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include<stdio.h>
#include<stdlib.h>
#define MAX 4	
int top=-1,stack[MAX];
void push();
void pop();
void display();
int main()
{
int ch;
while(1)	
{
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
printf("\n\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
			
default: printf("\nWrong Choice");
}
}
}
void push()
{
	int val;
	
if(top==MAX-1)
	{
printf("\nStack is full");
	}
	else
	{
printf("\nEnter element to push:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
 
void pop()
{
if(top==-1)
{
printf("\nStack is empty");
	}
	else
	{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}
 
void display()
{
int i;
if(top==-1)
	{
printf("\nStack is empty");
	}
	else
	{
printf("\nStack is:\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}


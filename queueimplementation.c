#include <stdio.h>
#include <stdlib.h>
#define MAX 3
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
 int main()
{
int choice;
  while (1)
{
printf("1:Insert element \n");
printf("2:Delete element  \n");
printf("3:Display the elements \n");
printf("Enter your choice : ");
scanf("%d", &choice);
   switch (choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
default:printf("Wrong choice \n");
} 
} 
} 
void insert()
{
int add_item;
if (rear == MAX - 1)
printf("Queue Overflow \n");
    else
{
if (front == - 1)
front = 0;
printf("Insert the element in queue : ");
scanf("%d", &add_item);
rear = rear + 1;
queue_array[rear] = add_item;
}
} 
void delete()
{
if (front == - 1 || front > rear)
{
printf("Queue Underflow \n");
return;
}
    else
{
printf("Element deleted is: %d\n", queue_array[front]);
front = front + 1;
}
} 
void display()
{
int i;
if (front == - 1)
printf("Queue is empty \n");
    else
{
printf("Queue is : \n");
for (i = front; i <= rear; i++)
printf("%d ", queue_array[i]);
printf("\n");
}
}

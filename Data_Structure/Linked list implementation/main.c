#include <stdio.h>
#include <stdlib.h>
#include "STDTYPE.h"
struct Node
{
    u8 data;
    struct Node *link;
};
struct Node* add_at_beg(struct Node *Head, u8 data);
struct Node* del_first(struct Node *Head);
void add_at_pos(struct Node **Head, u8 data , u8 pos);
void add_at_end(struct Node *Head, u8 data);
void del_at_pos(struct Node **Head , u8 Pos);
void display_node(struct Node *Head);
void del_last(struct Node *Head);

int main()
{
	
    u8 choice , data , pos;
    struct Node *Head = NULL;
    Head = (struct Node *)malloc(sizeof(struct Node));
    printf("First: Create list of 2 Nodes\n");
    printf("Enter Data of first node: ");
    scanf("%d",&Head->data);
    Head->link = NULL;

    struct Node *Current = NULL;
    Current = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Data of Second node: ");
    scanf("%d",&Current->data);
    Current->link = NULL;
    Head->link = Current;

    printf("Enter Desired Operation:\n 1.Display\t\t 2.Inserting at the beginning\n");
    printf(" 3.Inserting at the End\t 4.Insert at specified position\n");
    printf(" 5.Deleting first Node\t 6.Deleting last Node\n");
    printf(" 7.Deleting Node from certain position\t 8.Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
             case 1:
                 display_node(Head);
             break;
             case 2:
                 {
                     printf("Enter data of this node: ");
                     scanf("%d",&data);
                     Head = add_at_beg(Head,data);
                 }

             break;
             case 3:
                 {
                     printf("Enter data of this node: ");
                     scanf("%d",&data);
                      add_at_end(Head,data);
                 }
             break;
             case 4:
                 {
                     printf("Enter position of this node: ");
                     scanf("%d",&pos);
                     printf("Enter data to insert in this position: ");
                     scanf("%d",&data);
                     add_at_pos(&Head,data,pos);
                 }
             break;
             case 5:
                   {
                     Head = del_first(Head);
                   }
             break;
             case 6:
                   {
                     del_last(Head);
                   }
                  break;
             case 7:
                   {
                     printf("Enter position of Node you want to delete: ");
                     scanf("%d",&pos);
                     del_at_pos(&Head,pos);
                   }
             break;
                  break;
             case 8:
                  break;
             default:
                printf("Enter valid Choice\n");

        }
        if(choice == 8)
        {
            printf("Program is End\n");
            break;
        }

    }

}
//Function to display data of each Node
void display_node(struct Node *Head)
{
    if(Head == NULL)
    {
        printf("Linked List is Empty\n");
    }
    struct Node *Ptr = NULL;
    Ptr = Head;
    while(Ptr != NULL)
    {
        printf("%d  ",Ptr->data);
        Ptr = Ptr->link;
    }
    printf("\n");
}
//Function to add node at the end of the linked list
void add_at_end(struct Node *Head, u8 data)
{
    struct Node *Ptr = NULL, *Ptr2 = NULL;
    Ptr = Head ;
    Ptr2 = (struct Node *)malloc(sizeof(struct Node));
    Ptr2->data = data;
    Ptr2->link = NULL;
    while(Ptr->link !=NULL)
    {
        Ptr = Ptr->link;
    }
    Ptr->link = Ptr2;
}
//Function to add node at the beginning of the linked list
 struct Node* add_at_beg(struct Node *Head, u8 data)
{
    struct Node *Ptr2 = NULL;
    Ptr2 = (struct Node *)malloc(sizeof(struct Node));
    Ptr2->data = data;
    Ptr2->link = Head;
    Head = Ptr2;
    return Head;

}
//Function to add node at certain position in the linked list
void add_at_pos(struct Node **Head, u8 data , u8 pos)
{
    u8 i ;
    struct Node *Ptr = NULL, *New_Node = NULL;
    Ptr = *Head ;
    New_Node = (struct Node *)malloc(sizeof(struct Node));
    New_Node->data = data;
    New_Node->link = NULL;
    if(pos == 0)
    {
        *Head = add_at_beg(*Head,data);
        return;
    }
    else
    {

       for(i = 0 ; i < pos-1 ; i++)
       {
          Ptr = Ptr->link;
          if(Ptr == NULL)
             return;

       }

       New_Node->link = Ptr->link;
       Ptr->link = New_Node;

    }

}
//Function to delete node from the beginning of the linked list
struct Node* del_first(struct Node *Head)
{
    struct Node* Ptr = NULL;
    Ptr = Head;
    Head = Head->link;
    free(Ptr);
    Ptr = NULL;
    return Head;

}
void del_last(struct Node *Head)
{
  struct Node* Ptr = NULL;
  Ptr = Head;
  while(Ptr->link->link != NULL)
  {
      Ptr = Ptr->link;
  }
  free(Ptr->link);
  Ptr->link = NULL;
  Ptr = NULL;

}
void del_at_pos(struct Node **Head , u8 Pos)
{
    u8 i ;
    struct Node *Ptr = NULL;
    struct Node *Temp = NULL;

    if(Pos == 0)
    {
        Ptr = *Head ;
        *Head = (*Head)->link;
        free(Ptr);
        Ptr = NULL;
    }
    else
    {
       Ptr = *Head ;
       for(i = 0 ; i < Pos-1 ; i++)
       {
          Ptr = Ptr->link;
          if(Ptr == NULL)
             return;

       }

      Temp = Ptr->link;
      Ptr->link = Ptr->link->link;
      free(Temp);
      Temp = NULL;

    }

}









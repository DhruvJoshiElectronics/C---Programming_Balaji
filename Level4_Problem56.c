/******************************************************************************
        
            struct student {
int id;
int Maths;
int Science;
struct student *next;
}
        
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    struct student 
    {
    int id;
    int Maths;
    int Science;
    struct student *next;
    };
    struct student *head , *newnode , *temp ;
    head=0;
    
    while(1)
    {
        newnode = (struct student*)malloc(sizeof(struct student));  // allocation of memory for new newnode
        if (newnode == NULL) 
        {
            printf("Memory allocation failed\n");
            return -1;  // Return error if malloc fails
        }
        
        printf("Enter Student ID (-1 to exit): ");
        scanf("%d", &newnode->id);
        if (newnode->id == -1) 
        {
            free(newnode);  // Free the allocated memory for the unused node
            break;  // Exit the loop when id is -1
        }
        
        printf("Enter Maths Marks: ");
        scanf("%d", &newnode->Maths);
        printf("Enter Science Marks: ");
        scanf("%d", &newnode->Science);
        
        //Till here we have created the first node .
        // Now we will allot null to first node
        
        newnode->next = NULL;
        
        if(head==NULL)  // This would be only for first node 
        {
            head=newnode;
            temp = newnode;
        }
        else
        {
         temp->next=newnode;  
         temp = newnode;
        }
    }
    
    // To Display All 
    temp=head;
        printf("\n The Data entered is : ");
        while (temp != NULL) 
        {
        printf("ID: %d, Maths: %d, Science: %d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
        
    return 0;
}





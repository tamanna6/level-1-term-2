#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
    int i;
    struct Node *t, *last;
    first=(struct Node * )malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1; i<n; i++)
    {
        t=(struct Node * )malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
void Display(struct Node *p)
{
int c=0;
    while(p!=NULL)
    {

        printf("%d ",p->data);

         p=p->next;
        // printf("%d ",p->data);
        c++;
    }
    return c;

}
int count(struct Node *p)
{
    int c=0;
   if(p!=NULL)
   {
        c=count(p->next);
        return (c+1);
   }

       //c++;
     // p->next;
      //return 0;


  // else {
       // return count(p->next)+1;

  // }
   else
   {
        return c;
   }
      //return c;


}
int add(struct Node *p)
{
    //int sum=0;
    if(p!=NULL)
    {
      // sum=sum+p->data;
      // p=p->next;
      return (p->data)+add(p->next);
    }
    else
    return 0;

}
int max(struct Node *p)
{

    int m=-99999;
    if(p==NULL)
    {
       // if(p->data>m){
            //return m=p->data;
            //m=p->data;
           // p=p->next;
           return m;
        }
        //else{
          m=  max(p->next);
         // if(p->data>m)
         // {
              //return p->data;

         // }
         // else
            return (p->data>m)?p->data:m;
       // }

    //}
   // return (m);
}
void search(struct Node *p,int key)
{
    while(p!=NULL)
    {
        if(p->data==key)
        {
            printf("\nThe element is present in the linked list");
        }
        p=p->next;
       // else
           // printf("Not found");
    }

}
int main()
{
    int A[]= {3,5,7,10,15,20,70};
    create(A,7);
    Display(first);
    printf("\n");
    int tam=count(first);
    printf("%d\n",tam);
    int head=add(first);
    printf("%d\n",head);
    int maxi=max(first);
    printf("%d",maxi);
    search(first,20);

    return 0;
}

#include "liste.h"
int main()
{
    int n;
    scanf("%d",&n);
    Node *first,*last;
    first=(Node*)malloc(sizeof(Node));
    scanf("%d",&first->val);
    last=first;
    first->next=NULL;

    for(int i=1;i<n;i++)
    {
        Node* new_Node=(Node*)malloc(sizeof(Node));
        scanf("%d",&new_Node->val);
        /*new_Node->next=NULL;
        last->next=new_Node;
        last=new_Node;*/
        addAtEnd(&last,new_Node->val);
    }
    display(first);
    return 0;
}

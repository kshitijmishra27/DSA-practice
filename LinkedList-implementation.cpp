#include <iostream>
using namespace std;

//class of a node 
struct Node 
{
    public :
    int data;
    struct Node *next;
}*first=0,*last=0;


//function to create a node using an array
void create(int A[], int n)
{
    int i;
    struct Node *t,*last;

    //manually creating first node
    first = new Node;
    first->data=A[0];
    first->next=NULL;

    last=first;
    
    for (i=1;i<n;i++){
        t = new Node;
        t->data = A[i];
        last->next=t;
        last=t;
    }
}

//display function with while loop
void display(struct Node *p)
{
    while (p!=0){
        cout << p-> data << endl;
        p=p->next;
    }
}

//display function with use of recursion 
void recdisplay(struct Node *p)
{
    if(p!= 0){
        cout << p->data;
        display(p->next);
    }
}

//function for counting the number of nodes in a LL
int countlist(struct Node *p)
{
    int count = 0;
    while(p!= NULL){
        count += 1;
        p=p->next;
    }
    return count;
}

//function for sum of all elements in a LL
int sum(struct Node *p)
{
    int ans = 0;
    while(p!=0)
    {
        ans = ans + p->data;
        p=p->next;
    }
    return ans;
}

// function for finding max element of a LL
int findmax(struct Node *p)
{
    int max = -32768;
    
    while (p)
    {
        if(max < p->data){
            max = p->data;
        }
        p=p->next;
    }
    return max;
}

//function for searching a key 
Node* search (Node *p, int key)
{
    while (p)
    {
        if (key == p->data)
            return p;
        p= p->next;
    }
    return NULL;
}

//search function using recursion 
Node * Rsearch (Node *p, int key)
{
    if (p==NULL)
        return NULL;
    if (key == p->data)
        return p;
        return Rsearch(p->next , key);
}

//improved search function 
Node * searchmovetohead(Node *p, int key)
{
    Node *q =NULL;
    while(p)
    {
        if(key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

//function for inserting a new node
void insert(struct Node *p,int index, int x)
{
    struct Node *t;
    int i;
    //Checking index is valid or not 
    if (index <0 || index > countlist(p) )
        return;

    t= new Node;
    t->data = x;

    if(index==0)
    {
        t->next = first;
        first = t;
    }
    else if (index!=0)
    {
        for (i=0; i<index-1;i++)
            p= p->next;
        t->next = p->next;
        p->next = t;
    }
}

//Function for inserting in the last 
void insertlast(int x)
{
    Node * t = new Node;
    t->data = x;
    t->next = NULL;
    //if linked list is empty -> that means first and last both are null
    //so first and last must point on the new node i.e. t
    if(first==NULL)
        first = last = t;
    else 
        last->next = t;
        last = t;
}

//Function for checking if the linked list is sorted or not 
bool isSort(Node *p)
{
    Node *t;
    t = p;
    int x = -32768;
    while (t){
        if(t->data < x)
            return false;
        else
            x = t->data;
            t= t->next;    
    }
    return true;
}

//Function for deleting a Node
Node* deleteDuplicates(Node* head) {
        Node *p=head->next;
        Node *q=head;
        while(p!=NULL)
        {
            if(p->next != q->next)
            {
                q=p;
                p=p->next;
            }
            else{
                q->next = p->next;
                delete p;
                p=q->next;
            }
        }
        return head;
    }


int main()
{
           
    return 0;
}

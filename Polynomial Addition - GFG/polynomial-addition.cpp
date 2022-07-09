// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int coeff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
    
};


void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data, int new_data1)
{
    struct Node* new_node = new Node(new_data, new_data1);
    
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

void printList(struct Node *head)
{
    struct Node *temp = head;
    
    while (temp != NULL)
    {
       printf("%d %d ", temp->coeff, temp->pow);
       temp  = temp->next;
    }
}

Node* addPolynomial(Node *p1, Node *p2);


void create_node(int x, int y, struct Node **temp)
{
    struct Node *r, *z;
    z = *temp;
    if(z == NULL)
    {
        r = new Node(x, y);
        *temp = r;
        r->next = NULL;
    }
    else
    {
        r->next = new Node(x, y);
        r = r->next;
        r->next = NULL;
    }
}
 

/* Driver program to test above function*/

 // } Driver Code Ends
/* Structure of Node used
struct Node
{
    int coeff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
    
};
*/

class Solution{
 public:
   /* The below method print the required sum of polynomial
   p1 and p2 as specified in output  */
   Node* addPolynomial(Node *p1, Node *p2)
   {
       //Your code here
       
       if(p1==NULL)  return p2;
   
       if(p2==NULL)  return p1;
       
       Node *a=NULL;
       Node *b=NULL;
       

 //reverse both linked lists & have starting value in a &b
       reverse(p1,NULL,NULL,a);
       reverse(p2,NULL,NULL,b);

 

   
       Node *temp_ans= solve(a,b);
       Node *ans=NULL;
       
       reverse(temp_ans,NULL,NULL,ans);
       return ans;
   }
   
   Node* solve(Node *a,Node *b){
       
       if(a==NULL)  return b;
       
       if(b==NULL)   return a;
      

//if power is same add values
       if(a->pow==b->pow){
           a->coeff=b->coeff+a->coeff;
           a->next=solve(a->next,b->next);
           return a;
       }  

 

//if pow is different we have to take smaller power node 


     else  if(a->pow<b->pow){
           a->next=solve(a->next,b);
           return a;
       } 
      else{
           b->next=solve(a,b->next);
           return b;
       }   
   }
   
   void reverse(Node *head,Node *prev,Node *after,Node* &a){
       
       if(head->next==NULL){
           a=head;
           head->next=prev;
           return ;
       }
       after=head->next;
       head->next=prev;
       reverse(after,head,after->next,a);
   }
};


// { Driver Code Starts.
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
        struct Node *tail1  = NULL,*tail2 = NULL;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            	append(&poly1,&tail1,x,y);
        }
        
         int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            	append(&poly2,&tail2,x,y);
        }
        Solution obj;
        Node *sum = obj.addPolynomial(poly1,poly2);
        for(Node* ptr=sum ; ptr ; ptr=ptr->next  )
        {
            // printing polynomial
            cout<< ptr->coeff << "x^" << ptr->pow;
            if(ptr->next) cout<<" + ";
        }
        cout<<endl;
       
    }

}
  // } Driver Code Ends
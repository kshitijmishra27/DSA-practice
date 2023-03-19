/* Deletion from specified location of linked list */
// Algorithm

Algorithm DeleteFromLoc_DList(START, END, Loc) –

Node *Temp=START, *Temp1=START

If START==NULL || Loc<=0//checking Empty Linked list or invalid Loc

Print “Empty Linked List or Loc is invalid ”

Return

If(Loc==1) // Delete first node

If (START == END) // Single Node

START = END =NULL

ELSE

(Temp ->NEXT) -> PREV =NULL

START = START -> NEXT

Else if (Loc>=2 && Temp->NEXT!=NULL)

For (i=1; i<=Loc-2; i++)

Temp = Temp -> NEXT

If (Temp->NEXT==NULL)

Print “Loc is greater than total number of nodes”

Return

Temp1 = Temp ->NEXT

Temp -> NEXT = Temp1 -> NEXT

If Temp1->NEXT!=NULL

(Temp1->NEXT) ->PREV = Temp // only when LOC is not a last node

Else END=Temp

Else

Print “Loc is greater than total number of nodes”

Return

Free Temp1

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define tc int t; cin >> t; while(t--)

//..............###....****************************.....###..........//
//..............###....*......Kshitij Mishra .....*.....###..........//
//..............###....****************************.....###..........//

#define endl "\n"
#define all(x) x.begin(), x.end()
#define int long long int


void faster() {


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

}

class node{

public:

    int data;
    node* next;

    node(int val){

        data = val;
        next = NULL;

    }

};

// insertion at head;

void insertHead(node* &head, int val){

    node* temp = new node(val);

    temp->next = head;
    head = temp;
}

// printing

void print(node* head){

    node* temp = head;

    while(temp != NULL){

        cout << temp->data << " ";
        temp = temp-> next;

    }

}

// insert at tail

void insertTail(node* &head, int val){

    node* d = new node(val);

    node* temp = head;

    while(temp->next !=  NULL){  // temp ka next equal nhi hona chahiye null ke agar ho means ye last node hai 
        temp = temp->next;
    }

    temp-> next = d;

}

// to search on linked list

bool search(node* &head, int val){

    node* temp = head;

    while(temp != NULL){

        if(temp->data == val){
            return true;
        }
        else{
            temp = temp->next;
        }

    }

    return false;

}

void deleteNode(node* &head, int target){

    node* temp = head;


//  agar pehla element hi delete karna hai
    if(temp -> data == target){

        head = head->next;
        delete temp;
        return;

    }

    // agr linked list hi empty hui

    if(head == NULL){
        return;
    }

    // agar sirf 1 element hai aur whi delete karna hai

    if(head->next == NULL){
        head = head->next;
        delete temp;
        return;
    }

    // agr n node ko delte karna hai toh n-1 node ko pakadna hoga
    // n-1 node ka address ko n+1 ko point karna hoga

    while(temp->next->data != target){

        temp = temp->next;

    }

        node* n = temp->next;

        temp->next = temp->next->next;

        delete n;

}

signed main(){


    faster();


    node* a = new node(1);
    node* head = a;

    insertHead(head, 2);
    insertTail(head, 3);

    print(head);

   deleteNode(head, 2);
   cout << "\n";

    print(head);

    deleteNode(head,1);
    cout << endl;
    print(head);

    deleteNode(head,3);
    cout << endl;
    print(head);
  
}

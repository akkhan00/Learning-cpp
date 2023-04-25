#include <iostream>
using namespace std;

class node{
public:
  int data;
  node *next;
  node(int val){
    data = val;
    next = NULL;
  }
};

void insertAtTail(node*&head, int val);
void insertAtHead(node*&head, int val);
void display(node *head);
bool search(node*head, int key);
void deleteAtHead(node *& head);
void deletion(node *&head, int val);
node * reverse(node *&head);
node * reverseRecursive(node *&head);
node * reverseK(node *&head, int k);
void makeCycle(node *&head, int pos);
bool detectCycle(node *&head);
void removeCycle(node *&head);
// Put Even Position Nodes after Odd Position Nodes -
void evenAfterOdd(node *&head);


int main(int argc, char **argv){
  node *head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  insertAtTail(head, 4);
  insertAtTail(head, 5);
  display(head);
/*   cout << search(head, 7) << endl;
  deletion(head, 4);
  display(head);
  deleteAtHead(head);
  display(head); */

  // node *newHead = reverse(head);
  // node *newHead = reverseRecursive(head);
  // node *newHead = reverseK(head, 2);

  // makeCycle(head, 3);
  // cout << detectCycle(head) << endl;
  // removeCycle(head);
  // display(head);
  evenAfterOdd(head);
  display(head);

  return 0;
}
void evenAfterOdd(node *&head){
  node *odd = head;
  node *even = head->next;
  node *evenStart = even;
  while(odd->next != NULL && even->next != NULL){
    odd->next = even->next;
    odd = odd->next;
    even->next = odd->next;
    even = even->next;
  }odd->next = evenStart;
  if(odd->next != NULL)
    even->next = NULL;
}

void removeCycle(node *&head){
  node *slow = head;
  node *fast = head;
  do{
    slow = slow->next;
    fast = fast->next->next;
  }while(slow != fast);
  fast = head;
  while(slow->next != fast->next){
    slow = slow->next;
    fast = fast->next;
  }
  slow ->next = NULL;
}

bool detectCycle(node *&head){
  node *slow = head;
  node *fast = head;
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
    if(fast == slow)
      return true;
  }return false;
}
void makeCycle(node *&head, int pos){
  node *temp= head;
  node *startNode;
  int count = 1;
  while(temp ->next != NULL){
    if(count == pos){
      startNode = temp;
    }temp = temp->next;
    count ++;
  }temp->next = startNode;
}

node * reverseK(node *&head, int k){
  node *prevptr = NULL;
  node *currptr = head;
  node *nextptr;
  int count = 0;
  while(currptr != NULL && count < k){
    nextptr = currptr->next;
    currptr->next = prevptr;
    prevptr = currptr;
    currptr = nextptr;
    count ++;
  }
  if(nextptr!=NULL)
    head->next = reverseK(nextptr, k);
  return prevptr;
}

node * reverseRecursive(node *&head){
  if(head == NULL || head->next == NULL)
    return head;
  node *newhead = reverseRecursive(head->next);
  head->next->next = head;
  head->next = NULL;
  return newhead;
}

node * reverse(node *&head){
  node *prevPtr = NULL;
  node *currPtr = head;
  node *nextPtr;
  while(currPtr != NULL){
    nextPtr = currPtr->next;
    currPtr->next = prevPtr;
    prevPtr = currPtr;
    currPtr = nextPtr;
  }
  return prevPtr;
}

void insertAtTail(node *&head, int val){
  node *n = new node(val);
  if(head == NULL){
    head = n;
    return;
  }
  node *temp = head;
  while(temp->next != NULL)
    temp = temp->next;
  temp->next = n;
}

void insertAtHead(node *&head, int val){
  node *n = new node(val);
  n->next = head;
  head = n;
}

bool search(node *head, int key){
  node *temp = head;
  while(temp!=NULL){
    if(temp->data == key)
      return true;
    temp = temp->next;
  }
  return false;
}

void deleteAtHead(node *&head){
  node *todelete = head;
  head = head->next;
  delete todelete;
}
void deletion(node *&head, int val){
  if(head == NULL)return;
  if(head->next == NULL){
    deleteAtHead(head);
    return;
  }
  node *temp = head;
  while(temp->next->data != val)
    temp = temp->next;
  node *todelete = temp->next;
  temp->next = temp->next->next;
  delete todelete;
}

void display(node *head){
  node *temp = head;
  while(temp != NULL){
    cout << temp->data << "->";
    temp = temp->next;
  }cout << "NULL" << endl;
}

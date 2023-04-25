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

void insertAtTail(node *&head, int val);
void insertAtHead(node *&head, int val);
void display(node *head);
void deletion(node *&head, int pos);
void deleteAtHead(node *&head);

int main(int argc, char *argv[]){
  node *head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtHead(head, 3);
  insertAtTail(head, 4);
  // display(head);
  // deletion(head, 3);
  // deletion(head, 1);
  return 0;
}
void deleteAtHead(node *&head){
  node *temp = head;
  while(temp->next != head)
    temp = temp->next;
  node *todelete = head;
  temp->next = head->next;
  head = head->next;
  delete todelete;
}
void deletion(node *&head, int pos){
  if(pos == 1){
    deleteAtHead(head);
    return;
  }
  node * temp = head;
  int count = 1;
  while(count != pos-1){
    temp = temp->next;
    count ++;
  }
  node *todelete = temp->next;
  temp->next = temp->next->next;
  delete todelete;
}
void display(node *head){
  node *temp = head;
  do{
    cout << temp->data << " ";
    temp = temp->next;
  }while(temp != head);
  cout << endl;
}
void insertAtTail(node *&head, int val){
  if(head == NULL){
    insertAtHead(head, val);
    return;
  }
  node *n = new node(val);
  node *temp = head;
  while(temp->next != head)
    temp = temp->next;
  temp->next = n;
  n->next = head;
}
void insertAtHead(node *&head, int val){
  node *n = new node(val);
  if(head == NULL){
    n->next = n;
    head = n;
    return;
  }
  node *temp = head;
  while(temp->next != head)
    temp = temp->next;
  temp->next = n;
  n->next = head;
  head = n;
}


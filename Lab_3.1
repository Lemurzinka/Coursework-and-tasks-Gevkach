#include <iostream>
#include <vector>

using namespace std;

struct Node {
char data;
Node* next;
};

struct DNode {
char data;
DNode* next;
DNode* prev;

};


class LinkedList{
private:
Node* head;

public:
LinkedList(): head(nullptr){}

void addToStart (char value){
Node* newNode = new Node;
newNode->data = value;
newNode->next = head;
head = newNode;
}

void addToEnd (char value){
Node* newNode = new Node;
newNode->data = value;
newNode->next = nullptr;

if (head == nullptr){
    head = newNode;
}else {
        Node* temp = head;
while (temp->next != nullptr){
       temp= temp->next;}
       temp->next = newNode;
}}

void addAfterValue (char value, char target){
Node* temp = head;
while (temp != nullptr){
    if (temp->data == target){
        Node* newNode = new Node;
        newNode->data = value;
newNode->next = temp->next;
temp->next = newNode;
return;
    }
    temp = temp->next;
}
cout << "There is no" << target << " In the list"<<endl;
}


void dell (char key){
Node* temp = head;
Node* prev = nullptr;
if (temp != nullptr && temp->data == key){
    head = temp->next;
    delete temp;
    return ;
}
while (temp != nullptr && temp->data != key){
    prev = temp;
    temp = temp->next;

}

if (temp == nullptr) return;



prev->next = temp->next;
delete temp;
}

bool find(char value){
Node* temp = head;

while(temp){
    if (temp->data ==value){
        return true;
    }
   temp = temp ->next;
}
return false;
}

void printList(){
Node* temp = head;
while (temp != nullptr){
    cout<< temp->data << " ";
    temp = temp->next;
}
cout << endl;
}



Node* getHead(){
return head;}
};

class DoubleLinkedList {
private:
    DNode* head;

   public:
       DoubleLinkedList(): head(nullptr) {}



   void addToStart (char value){
   DNode* newNode = new DNode;
   newNode->data = value;
   newNode->next = head;
   newNode->prev = nullptr;

   if (head != nullptr){
    head->prev = newNode;
   }

   head = newNode;
   }

void addToEnd(char value) {
    DNode* newNode = new DNode;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
    } else {
        DNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}




   void addAfterValue (char value, char target){
       if (head == nullptr){
        cout << "The list is empty"<< endl;
        return;
       }
       DNode* temp = head;
       while (temp != nullptr){
        if (temp->data == target){
            DNode* newNode = new DNode;
            newNode->data = value;
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != nullptr){
                temp->next->prev = newNode;
            }
            temp->next = newNode;
            return;
        }
        temp=temp->next;
       }
       cout << "There is no '" << target << "' element in the list"<< endl;
   }


   void dell(char key){
  DNode* temp = head;

        while (temp != nullptr && temp->data != key) {
            temp = temp->next;
        }

        if (temp == nullptr) return;

        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        } else {
            head = temp->next;
        }

        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }

        delete temp;
   }

   bool find (char value){
   DNode* temp = head;
   while(temp){
   if (temp->data == value){
    return true;
   }
   temp= temp->next;
   }
return false; }



void printList() {
    DNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


    DNode* getHead() { return head; }
};



class CombinedList {
public:
    Node* combinedValues;

    CombinedList() {
        combinedValues = nullptr;
    }

    void printCombinedValues() {
        cout << "Combined values: ";
        Node* temp = combinedValues;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

void combineList(LinkedList &slist, DoubleLinkedList &dlist, char value) {
    Node* temp_s = slist.getHead();
    DNode* temp_d = dlist.getHead();
    Node* combinedListHead = nullptr;
    Node* combinedListTail = nullptr;

    while (temp_s != nullptr) {
        if (temp_s->data > value) {
            Node* newNode = new Node;
            newNode->data = temp_s->data;
            newNode->next = nullptr;
            if (combinedListHead == nullptr) {
                combinedListHead = newNode;
                combinedListTail = newNode;
            } else {
                combinedListTail->next = newNode;
                combinedListTail = combinedListTail->next;
            }
        }
        temp_s = temp_s->next;
    }

    while (temp_d != nullptr) {
        if (temp_d->data > value) {
            Node* newNode = new Node;
            newNode->data = temp_d->data;
            newNode->next = nullptr;
            if (combinedListHead == nullptr) {
                combinedListHead = newNode;
                combinedListTail = newNode;
            } else {
                combinedListTail->next = newNode;
                combinedListTail = combinedListTail->next;
            }
        }
        temp_d = temp_d->next;
    }

    combinedValues = combinedListHead;
}

};


int main (){
LinkedList slist;
DoubleLinkedList dlist;
DNode* head = nullptr;

char input;
cout << "Enter the characters to add the singly linked list (for competition enter '.')"<< endl;

while (cin>>input && input != '.'){
    slist.addToStart(input);
}

cout << "Enter the characters to add to the end of the singly linked list(for competition enter '.')" << endl;
while (cin >> input && input != '.') {
    slist.addToEnd(input);
}

cout << "Singly linked list (ver.1):"<< endl;
slist.printList();


char value, target;
cout <<"Enter the value for new element: ";
cin >> value;
cout << "Enter the value of the element, we will add new element after it: ";
cin >> target;
slist.addAfterValue(value, target);

cout << "Singly linked list (ver.2):"<< endl;
slist.printList();


cout<< "Enter the values of elements you want to delete (for competition enter '.')"<<endl;
while (cin >> input && input != '.'){
    slist.dell(input);
}

cout << "Singly linked list (ver.3):"<< endl;
slist.printList();

cout << "What element do you want to check for in the list? ";
cin >> target;
if(slist.find(target)){
    cout << "Yes, this element is found in the list"<< endl;
}
else {
    cout<< "There is no '"<< target << "' in the list"<< endl;
}


cout << "Enter the characters to add the double linked list (for competition enter '.')"<< endl;
while (cin >> input && input != '.'){
    dlist.addToStart(input);

}

cout <<"Enter the characters to add to the end of the double linked list (for competition enter '.'" << endl;
while (cin >> input && input != '.'){
    dlist.addToEnd(input);
}

cout << "Double linked list (ver.1):"<< endl;
dlist.printList();

cout<< "Enter the value for new element: ";
cin>> value;
cout << "Enter the value of the element, we will add new element after it: ";
cin >> target;
dlist.addAfterValue(value, target);

cout << "Double linked list (ver.2): "<< endl;
dlist.printList();

cout << "Enter the values of elements you want to delete (for competition enter '.'"<< endl;
while (cin >> input && input != '.'){
    dlist.dell(input);
}
cout << "Double linked list (vet.3): "<< endl;
dlist.printList();

cout << "What element do you want to check for in the list? ";
cin >> target;
if(dlist.find(target)){
    cout << "Yes, this element is found in the list" << endl;
}
else {
    cout<< "There is no '"<< target << "' in the list"<< endl;
};

cout << endl;

char forCombined;
cout << "Enter the value for combined list: ";
cin >> forCombined;
CombinedList clist;
clist.combineList(slist, dlist, forCombined);
clist.printCombinedValues();



return 0;}

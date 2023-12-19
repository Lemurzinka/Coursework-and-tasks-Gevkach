#include <iostream>
#include <vector>

using namespace std;
// Структура для вузла в однонаправленому списку
struct Node {
char data;
Node* next;
};
// Реалізація однонаправленого списку
struct DNode {
char data;
DNode* next;
DNode* prev;

};
// Реалізація однонаправленого списку
class LinkedList{
private:
Node* head;

public:
public:
    // Конструктор для ініціалізації порожнього списку
LinkedList(): head(nullptr){}
  // Функція для додавання нового вузла на початок списку
void addToStart (char value){
Node* newNode = new Node;
newNode->data = value;
newNode->next = head;
head = newNode;
}
  // Функція для додавання нового вузла в кінець списку
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
// Функція для додавання нового вузла після вузла зі специфічним значенням
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

 // Функція для видалення вузла зі специфічним значенням
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
 // Функція для пошуку значення в списку
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
 // Функція для отримання початкового вузла
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
// Реалізація двонаправленого списку
class DoubleLinkedList {
private:
    DNode* head;

   public:
       // Конструктор для ініціалізації порожнього списку
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

   void addToEnd (char value, DNode*& head){
   DNode* newNode = new DNode;
   newNode->data = value;
   newNode->next = nullptr;
   newNode->prev = head;

   if(head == nullptr){
    head = newNode;
   }
   else {
    DNode* temp = head;
    while(temp->next != nullptr){
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
   if (head == nullptr)return;
   DNode* temp = head;

   if(temp != nullptr && temp->data != key){
    temp = temp->next;
   }

if (temp == nullptr) return;

if (temp->prev == nullptr){
 temp->prev->next = temp ->next;
}else {head = temp->next; }


if (temp->next == nullptr){
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
   while (temp != nullptr){
          cout << temp->data << " ";
          temp= temp->next;
          }
          cout<< endl;
   }

   DNode* getHead(){
return head;}
};


// Реалізація комбінованого списку
class CombinedList {
public:
    Node* combinedValues;

    CombinedList() {
        combinedValues = nullptr;
    }

    void addToCombinedList(char value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = combinedValues;
        combinedValues = newNode;
    }

    void dell(char key) {
        Node* temp = combinedValues;
        Node* prev = nullptr;

        while (temp != nullptr) {
            if (temp->data == key) {
                if (prev == nullptr) {
                    combinedValues = temp->next;
                    delete temp;
                    return;
                } else {
                    prev->next = temp->next;
                    delete temp;
                    return;
                }
            }
            prev = temp;
            temp = temp->next;
        }
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
};


// Функція main для демонстрації використання списків
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
    dlist.addToEnd(input, head);
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
    cout << "Yes, this element is found in the list";
}
else {
    cout<< "There is no '"<< target << "' in the list"<< endl;
}




CombinedList clist;
clist.dell('a');
clist.printCombinedValues();



return 0;}

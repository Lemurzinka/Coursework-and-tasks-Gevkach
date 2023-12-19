#include <iostream>

using namespace std;


struct Node {
int data;
Node *left;
Node *right;


Node(int val): data(val), left(nullptr), right (nullptr){}
};


int countElement(Node *root, int el){

if (root == nullptr){
    return 0;
}
int counter = 0;
if (root->data == el){
    counter++;
}
counter+=countElement(root->left, el);
counter+=countElement(root->right, el);
return counter;

}

int main (){
Node *root = new Node(1);
root->right = new Node (3);
root->left = new Node (3);
root->right->right = new Node  (3);
root->right->left = new Node (3);
root->left->left = new Node(1);
root->left->right =new Node (6);


int el=3;


int my_count = countElement(root, el);
cout << "The number '" << el <<"' in the tree: "<< my_count<< endl;


return 0;}

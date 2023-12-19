#include <iostream>
#include <stack>
#include <string>

using namespace std;



bool isBalanced(string &st){
stack<char> my_stack;
char el;

for (int i = 0; i< st.length(); i++){
    if(st[i] == '(' || st[i]== '{' || st[i] == '['){
        my_stack.push(st[i]);
        continue;
       }
       if(st.empty()){
        return false;
       }

       switch(st[i]){
   case ')':
    el = my_stack.top();
   my_stack.pop();
   if (el == '{'|| el== '['){
    return false;
    break;



   case '}':
       el = my_stack.top();
       my_stack.pop();
       if(el == '(' || el == '['){
            return false;
            break;
          }
   case']':
    el = my_stack.top();
    my_stack.pop();
    if(el == '(' || el == '{'){
        return false;
        break;
       }

    return my_stack.empty();

   }
       }
}
}

int main (){
string st = "[8908{}]";

if(isBalanced(st)){
   cout<< "Your string is balanced";}
   else {
    cout<<"Your string is not balanced";
   }


return 0;}

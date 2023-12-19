#include <iostream>
#include <queue>

using namespace std;

int main (){
queue<int> first, second;

for (int i = 0; i <5; i++){
    first.push(i+3);
    second.push(i*3);
}




while(!second.empty()){
    first.push(second.front());
    second.pop();
}

cout << "United queue:" << endl;
while (!first.empty()){
    cout<< first.front();
    first.pop();
}


}

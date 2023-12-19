#include <iostream>
#include <ctime>

using namespace std;

void Shell (int A[], int size_of_A){
int tmp, i, j, step;
for (step = size_of_A/2; step>0; step/=2){
    for(i = step; i < size_of_A; i++){
        tmp = A[i];
        for (j = i; j>=step ; j-=step){
            if (tmp < A[j-step])
            A[j]=A[j-step];
            else break;
        }
   A[j]=tmp;
    }
}

}

int main (){

srand(static_cast<unsigned>(time(nullptr)));

int A[30];

for (int i = 0; i < 30; i++){
    A[i] = rand() % 91 + 10;
    cout << A[i] << " ";
}

cout<< endl;

Shell(A, 30);

for (int i = 0; i<30; i++){
    cout<< A[i] << " ";
}


return 0;}

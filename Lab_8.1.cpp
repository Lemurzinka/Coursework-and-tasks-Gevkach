#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Quicksort (int arr[], int first, int last){

int middle = arr[(first + last)/2];
int i = first;
int j = last;

do {
    while(arr[i] < middle)
        i++;

    while(arr[j] > middle)
        j--;

    if (i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
while (i<=j);
if (j>first){
    Quicksort(arr, first, j);
}
if (i < last ){
    Quicksort(arr, i, last);
}

}

int main () {

srand(static_cast<unsigned>(time(nullptr)));

int A[30];

for (int i = 0; i < 30; i++){
    A[i] = rand() % 91 + 10;
    cout << A[i] << " ";
}

cout<<endl<<"Sorting..."<<endl;

Quicksort(A, 0, 29);

for (int i = 0; i < 30; i++){
    cout << A[i] << " ";
}



return  0;}

#include <iostream>
#include <ctime>

using namespace std;

void bubble (int arr[], int size_of_arr){
for (int i = 0; i < size_of_arr - 1; i ++){
    for (int j = size_of_arr -1; j > i; j --){
        if (arr[i] > arr[j]){
            swap(arr[i], arr[j]);
        }
    }
}
};

int main () {
srand(static_cast<unsigned>(time(nullptr)));
int A[30];

for(int i=0 ; i<30; i++){
    A[i] = rand() % 91 + 10;
}

bubble(A, 30);
for (int i = 0; i < 30; i++){
    cout << A[i] << " ";
}

return 0;}

#include <iostream>
#include <ctime>

using namespace std;

void insertion (int arr[], int size_of_arr){
for (int i = 1; i < size_of_arr; i++){
    int key = arr[i];

    int j;
    for (j= i - 1; j>=0&& arr[j]>key ; j--)
        arr[j+1] = arr[j];
        arr[j+1] = key;
}
}

int main (){

srand(static_cast<unsigned>(time(nullptr)));

int A [30];
for (int i = 0; i < 30; i ++){
    A[i] = rand() % 91 + 10;

}
cout<< endl;
insertion(A, 30);
for (int i = 0; i < 30; i++){
    cout << A[i] << " ";}

return 0;}

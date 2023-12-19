#include <iostream>
#include <ctime>


using namespace std;

void merges (int totalArr[], int arr1[], int arr2[], int size1, int size2){

int arr1Min = 0;
int arr2Min = 0;
int totalMin = 0;

while (arr1Min < size1 && arr2Min < size2) {
if (arr1[arr1Min] <= arr2[arr2Min]){
   totalArr[totalMin]=arr1[arr1Min];
   arr1Min++;
}
else{
    totalArr[totalMin]=arr2[arr2Min];
    arr2Min++;
}
totalMin++;}

while (arr1Min < size1){
    totalArr[totalMin] = arr1[arr1Min];
    arr1Min++;
    totalMin++;
};
while (arr2Min < size2){
totalArr[totalMin]= arr2[arr2Min];
arr2Min++;
totalMin++;}
}




void mergeSort (int arr [], int size_of_arr){

    if (size_of_arr < 2){
        return;
    }
int mid = size_of_arr/2;
int* left = new int[mid];
int* right = new int[size_of_arr-mid];

for (int i = 0; i < mid; i++){
    left[i]= arr[i];
    }
    for (int i = mid; i < size_of_arr; i++){
        right[i-mid] = arr[i];
    }
    mergeSort(left, mid);
    mergeSort(right, size_of_arr-mid);
    merges(arr, left, right, mid, size_of_arr-mid);
}

int main () {

srand(static_cast<unsigned>(time(nullptr)));

int A[30];

for (int i = 0; i < 30; i++){
    A[i] = rand() % 91 + 10;
    cout << A[i] << " ";
}

cout << endl << "Sorting..."<< endl;
mergeSort(A, 30);
for (int i = 0; i < 30; i++){
    cout << A[i] << " ";
}


return 0;}

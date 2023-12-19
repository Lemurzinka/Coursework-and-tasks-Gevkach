#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main (){
srand(time(NULL));
int elements = 11;
int array[elements];
int sum = 0;
int product= 1;

 for (int i = 0; i < elements; i++)
 {
     array[i]= 100 - rand()%201;
     if (i % 2 == 0){
        sum += array[i];
     }

     if (i % 2 != 0 && array[i] < 0) {
        product *= array[i];
     }
cout << setw(4)<< "arr["<< i+1 << "] = "<<  array[i] << endl;
 }

 cout << endl;
 cout << "Sum of elements with even indices "<< sum << endl;
 cout << "Product of negative elements with odd indices: " << product << endl;


return 0;
}


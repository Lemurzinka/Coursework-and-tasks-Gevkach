#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;


int  main (){
int N;
cin >> N;
int M;
cin >> M;
 int arr[N][M];
 int oneDimensionalArr [N*M];

srand(time(NULL));

for (int n = 0; n<N; n++){
    for(int m =0; m<M; m++){
        arr[n][m]= 100- rand()%201;

    }
}
cout<< "Array [N][M]:"<<endl;
for (int n = 0; n<N; n++){
    for(int m=0; m<M; m++){
        cout << setw(6)<<"arr["<<n<<"]["<<m<<"] = "<<arr[n][m]<< " ";
    }
    cout<<endl<<endl;
}
cout<<endl;
int index = 0;
for (int m = 0; m<M; m++){
    if(m % 2 == 0){
            for (int n = 0; n <N; n++){
        oneDimensionalArr[index++] = arr[n][m];
        }
     }
    else {for(int n = N-1; n>=0; n--){
    oneDimensionalArr[index++]= arr[n][m];
    }
  }
}
cout<<"New one dimensional array: "<<endl;
    for (int i = 0; i<N*M; i++){
        cout << "arr["<<i<<"]= "<<oneDimensionalArr[i]<< " ";
    }
cout<<endl;

return 0;}

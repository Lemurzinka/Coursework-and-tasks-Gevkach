import java.util.Random;

public  class Main {


    public static void main(String[] args) {
        int N = (int) (20+0.6 * 6);
       int[] array = new int [N];
        Random random = new Random();
       for(int i = 0; i <N; i++){

    int number = random.nextInt(91)+10;
    array[i] = number;
    System.out.print(array[i] + " ");
}
bubbleSort(array);
        System.out.println("\n");
for( int i = 0; i < N; i++){
    System.out.print(array[i] + " ");
}
        System.out.println("\n");


int key = array[N/4];
        System.out.println("Key = " + key +"\n");
int bin = binSearch(array, key);
        System.out.println(bin);
    }
    public static void bubbleSort(int[] arr) {
for (int i = 0; i < arr.length -1; i++){
    for(int j = 0; j < arr.length - i - 1; j++ ){
if (arr[j]>arr[j+1]){
    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
}
    }
    }

}
public  static int binSearch (int[] arr, int findElement){
        int good = arr.length;
        int bad = -1;
        while (good - bad >1){
            int m = ((good+bad)/2);
            if (arr[m] == findElement) {
                return m;
            } else if (arr[m] < findElement) {
                bad = m;
            } else {
                good = m;
            }
        }
    System.out.print("No element, code of the error: ");
        return -1;
}

}

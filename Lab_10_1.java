
public class Main {
public static void main(String[]args){
        int[] S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int[] P = {5, 6, 7};

        int index = lin(S, P);

        if (index != -1){
                System.out.println("Index: " + index);
        }else{
                System.out.println("Do not found");
        }

}
        public static int lin (int[]arrS,int[]arrP){
for (int i = 0; i <= arrS.length - arrP.length; i++){
        int j;
        for (j = 0; j<arrP.length; j++){
                if (arrS[i+j] != arrP[j]){
                        break;
                }
        }
        if (j== arrP.length){
                return  i;
        }
                }
return  -1;
        }
        }


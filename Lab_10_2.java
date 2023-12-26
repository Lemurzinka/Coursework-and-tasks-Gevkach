public class Main {

    private static int[] computePrefixFunction(char[] pattern) {
        int m = pattern.length;
        int[] prefixFunction = new int[m];
        prefixFunction[0] = 0;
        int k = 0;

        for (int i = 1; i < m; i++) {
            while (k > 0 && pattern[k] != pattern[i]) {
                k = prefixFunction[k - 1];
            }

            if (pattern[k] == pattern[i]) {
                k++;
            }

            prefixFunction[i] = k;
        }

        return prefixFunction;
    }


    public static int search(String text, String pattern) {
        char[] textArray = text.toCharArray();
        char[] patternArray = pattern.toCharArray();

        int n = textArray.length;
        int m = patternArray.length;

        int[] prefixFunction = computePrefixFunction(patternArray);

        int q = 0;

        for (int i = 0; i < n; i++) {
            while (q > 0 && patternArray[q] != textArray[i]) {
                q = prefixFunction[q - 1];
            }

            if (patternArray[q] == textArray[i]) {
                q++;
            }

            if (q == m) {
                return i - m + 1;
            }
        }

        return -1; // Не знайдено входження
    }

    public static void main(String[] args) {
        String text = "i am not a bubble sort";
        String pattern = "bubble";

        int result = search(text, pattern);

        if (result != -1) {
            System.out.println("Position: " + result);
        } else {
            System.out.println("Not found");
        }
    }
}

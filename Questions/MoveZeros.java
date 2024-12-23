package Questions;

public class MoveZeros {
    public static void pushZerosToEnd(int[] arr) {
        int n = arr.length;
        int temp[] = new int[n];
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                temp[j] = arr[i];
                j++;
            }
        }
        for (int i = j + 1; i < n; i++) {
            temp[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }

    public static void main(String args[]) {
        int arr[] = { 1, 2, 0, 4, 3, 0, 5, 0 };
        pushZerosToEnd(arr);

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

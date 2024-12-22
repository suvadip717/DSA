package Questions;

public class RotateArray2 {
    public static void rotateArray(int arr[], int d) {
        int n = arr.length;
        int temp[] = new int[n];

        // If d>n
        d = d % n;

        for (int i = 0; i < n - d; i++) {
            temp[i] = arr[d + i];
        }

        for (int i = 0; i < d; i++) {
            temp[n - d + i] = arr[i];
        }

        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }

    public static void main(String args[]) {
        int arr[] = { 1, 2, 3, 4, 5, 6 };

        rotateArray(arr, 4);

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

}

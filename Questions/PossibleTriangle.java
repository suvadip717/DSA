package Questions;

import java.util.Arrays;

public class PossibleTriangle {
    public static int countTriangles(int arr[]) {
        Arrays.sort(arr);
        int count = 0;
        int n = arr.length;

        for (int k = n - 1; k >= 2; k--) {
            int i = 0, j = k - 1;
            while (i < j) {
                if (arr[i] + arr[j] > arr[k]) {
                    count += j - i;
                    j--;
                } else {
                    i++;
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int[] arr = { 10, 21, 22, 100, 101, 200, 300 };
        System.out.println("Number of triangles: " + countTriangles(arr));
    }
}

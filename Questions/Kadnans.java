package Questions;

public class Kadnans {
    public static int sumSubArray(int arr[]) {
        int sum = arr[0];
        int sub = arr[0];
        for (int i = 1; i < arr.length; i++) {
            sum += arr[i];
            int temp = arr[i];
            // sub array
            if (temp > sum) {
                sum = temp;
            }
            // sum sub array
            if (sub < sum) {
                sub = sum;
            }
        }
        return sub;
    }

    public static void main(String[] args) {
        int arr[] = { 5, 4, 1, 7, 8 };
        System.out.println("The sum of sub array is: " + sumSubArray(arr));
    }
}

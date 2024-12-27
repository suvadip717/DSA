package Questions;

public class MaxiProduct {
    public static int maxProduct(int[] arr) {
        // code here
        int n = arr.length;
        int maxProd = Integer.MIN_VALUE;
        int leftToRight = 1;
        int rightToLeft = 1;

        for (int i = 0; i < n; i++) {
            if (leftToRight == 0) {
                leftToRight = 1;
            }
            if (rightToLeft == 0) {
                rightToLeft = 1;
            }
            leftToRight *= arr[i];
            rightToLeft *= arr[n - 1 - i];
            maxProd = Math.max(rightToLeft, Math.max(leftToRight, maxProd));
        }
        return maxProd;
    }

    public static void main(String[] args) {
        int arr[] = { -1, -3, -10, 0, 60 };
        System.out.println("The sum of sub array is: " + maxProduct(arr));
    }
}

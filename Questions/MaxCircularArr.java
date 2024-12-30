package Questions;

public class MaxCircularArr {
    public static int circularSubarraySum(int arr[]) {
        // Your code here
        int currMax = 0, currMin = 0;
        int maxSum = arr[0], minSum = arr[0];
        int total = 0;
        for (int i = 0; i < arr.length; i++) {
            currMax = Math.max(currMax + arr[i], arr[i]);
            maxSum = Math.max(maxSum, currMax);

            currMin = Math.min(currMin + arr[i], arr[i]);
            minSum = Math.min(minSum, currMin);
            total += arr[i];
        }
        int circularSum = total - minSum;
        if (total == minSum) {
            return total;
        }
        return Math.max(circularSum, maxSum);
    }

    public static void main(String[] args) {
        int arr[] = { -1, 40, -14, 7, 6, 5, -4, -1 };
        System.out.println("Max sub array is " + circularSubarraySum(arr));
    }
}

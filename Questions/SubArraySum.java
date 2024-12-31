package Questions;

import java.util.ArrayList;

public class SubArraySum {
    static ArrayList<Integer> subarraySum(int[] arr, int target) {
        ArrayList<Integer> arrl = new ArrayList<>();
        int sum = 0, start = 0;

        for (int end = 0; end < arr.length; end++) {
            sum += arr[end];

            while (sum > target && start < end) {
                sum -= arr[start];
                start++;
            }
            if (sum == target) {
                arrl.add(start + 1);
                arrl.add(end + 1);
                return arrl;
            }
        }
        arrl.add(-1);
        return arrl;
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        ArrayList<Integer> arrList = subarraySum(arr, 15);
        for (int i : arrList) {
            System.out.print(i + " ");
        }
    }
}

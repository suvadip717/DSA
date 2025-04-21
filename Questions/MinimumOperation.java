package Questions;

import java.util.Arrays;

public class MinimumOperation {
    public static int minOperation(int nums[], int k) {
        Arrays.sort(nums);
        int bigNum = nums[nums.length - 1];
        int count = 0;
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
        }
        while (bigNum > 0) {
            if (sum % k == 0) {
                return count;
            }
            sum--;
            count++;
        }
        return count;
    }

    public static void main(String[] args) {
        int nums[] = { 3, 9, 7 };
        System.out.println("Number is " + minOperation(nums, 5));
    }
}
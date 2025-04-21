package Questions;

public class BoyerMoora {
    public static int majorElement(int nums[]) {
        int element = -1, count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (count == 0) {
                element = nums[i];
                count++;
            } else {
                if (element == nums[i]) {
                    count++;
                } else {
                    count--;
                }
            }
        }
        count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == element) {
                count++;
            }
        }
        if (count > nums.length / 2) {
            return element;
        } else {
            return -1;
        }
    }

    public static void main(String[] args) {
        int arr[] = { 7, 4, 3, 4, 2, 4, 4 };
        int number = majorElement(arr);
        System.out.println(number);
    }
}

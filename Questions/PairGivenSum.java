package Questions;

public class PairGivenSum {
    static int countPairs(int arr[], int target) {
        // Complete the function
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] + arr[j] == target) {
                    count++;
                    System.out.println("Count is " + count);
                    System.out.println(i + " " + j);
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int arr[] = { -1, 1, 5, 5, 7 };
        int target = 6;
        System.out.println("Count is " + countPairs(arr, target));

    }
}

package Questions;

public class SecondLarge {
    public static int secondLarge(int arr[]) {
        int l = arr.length;
        if (l < 2) {
            return -1;
        }
        // Find largest elelment
        int large = arr[0];
        for (int i = 1; i < l; i++) {
            if (arr[i] > large) {
                large = arr[i];
            }
        }
        int second = -1;
        for (int i = 0; i < l; i++) {
            if (arr[i] > second && arr[i] < large) {
                second = arr[i];
            }
        }
        return second;
    }

    public static void main(String args[]) {
        int arr[] = { 28078, 19451, 935, 28892, 2242, 3570, 5480, 231 };
        // int arr[] = { 10, 5, 10 };
        System.out.println("Second large number is: " + secondLarge(arr));
    }

}

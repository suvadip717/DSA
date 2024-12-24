package Questions;

import java.util.*;

public class AssignMaxEven {
    public static ArrayList<Integer> reArrange(ArrayList<Integer> arr) {
        Collections.sort(arr);
        int n = arr.size();
        ArrayList<Integer> result = new ArrayList<>(Collections.nCopies(n, 0));
        int num1 = 0, num2 = n - 1;
        for (int i = 0; i < n; i++) {
            if ((i + 1) % 2 == 0) {
                result.set(i, arr.get(num2--));
            } else {
                result.set(i, arr.get(num1++));
            }
        }
        return result;
    }

    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(1, 2, 3, 5, 2, 1));
        ArrayList<Integer> newArray = reArrange(arr);
        for (int i = 0; i < newArray.size(); i++) {
            System.out.print(newArray.get(i) + " ");
        }
        System.out.println();
    }
}

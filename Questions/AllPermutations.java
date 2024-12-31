package Questions;

import java.util.ArrayList;
import java.util.List;

public class AllPermutations {
    static void swap(int arr[], int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static List<Integer> convertArrayToList(int arr[]) {
        List<Integer> list = new ArrayList<>();
        for (int num : arr) {
            list.add(num);
        }
        return list;
    }

    static void permutation(List<List<Integer>> res, int arr[], int idx) {
        if (idx == arr.length) {
            res.add(convertArrayToList(arr));
            return;
        }
        for (int i = idx; i < arr.length; i++) {
            swap(arr, idx, i);
            permutation(res, arr, idx + 1);
            swap(arr, idx, i);
        }
    }

    static List<List<Integer>> permute(int arr[]) {
        List<List<Integer>> res = new ArrayList<>();
        permutation(res, arr, 0);
        return res;
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3 };
        List<List<Integer>> res = permute(arr);

        for (List<Integer> x : res) {
            for (int y : x) {
                System.out.print(y + " ");
            }
            System.out.println();
        }
    }
}
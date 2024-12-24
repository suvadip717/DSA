package Questions;

public class PlusOne {
    public static int[] plusOne(int arr[]) {
        for (int i = arr.length - 1; i >= 0; i--) {
            if (arr[i] + 1 != 10) {
                arr[i] += 1;
                return arr;
            }
            arr[i] = 0;
        }

        int temp[] = new int[arr.length + 1];
        temp[0] = 1;
        return temp;
    }

    public static void main(String args[]) {
        int arr[] = { 9, 9, 9 };
        int temp[] = plusOne(arr);
        for (int i = 0; i < temp.length; i++) {
            System.out.print(temp[i] + " ");
        }
        System.out.println();
    }
}

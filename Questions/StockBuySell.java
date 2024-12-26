package Questions;

public class StockBuySell {
    public static int maxOne(int arr[]) {
        int sellPrice = 0;
        int min = arr[0];
        for (int i = 1; i < arr.length; i++) {
            min = Math.min(min, arr[i]);
            sellPrice = Math.max(sellPrice, arr[i] - min);
        }
        return sellPrice;
    }

    public static void main(String[] args) {
        int arr[] = { 7, 10, 1, 3, 6, 9, 2 };
        int price = maxOne(arr);
        System.out.println("Maximum profit is " + price);
    }
}

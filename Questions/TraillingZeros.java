package Questions;

public class TraillingZeros {
    public static void main(String[] args) {
        int num = 30;
        int res = 0;

        for (int i = 5; i <= num; i *= 5) {
            res = res + num / i;
        }
        System.out.println(res);
    }
}

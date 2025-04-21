package Questions;

import java.util.Scanner;

public class DecimalToBainary {
    public static void main(String[] args) {
        System.out.print("Enter a Decimal number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int deci = 0;
        int j = 1;
        while (num != 0) {
            int rem = num % 2;
            deci += rem * j;
            j *= 10;
            num /= 2;
        }
        System.out.println("The decimal number is: " + deci);
    }
}
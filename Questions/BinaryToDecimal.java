package Questions;

import java.util.Scanner;

public class BinaryToDecimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a binary number: ");
        int num = sc.nextInt();
        int deci = 0;
        int j = 0;
        while (num != 0) {
            int rem = num % 10;
            deci += rem * Math.pow(2, j);
            num /= 10;
            j++;
        }
        System.out.println("The decimal number is: " + deci);
    }
}

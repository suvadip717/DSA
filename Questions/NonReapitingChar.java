package Questions;

public class NonReapitingChar {
    static char nonRepeatingChar(String s) {
        // Your code here
        int n = s.length();
        for (int i = 0; i < n; i++) {
            boolean found = false;
            for (int j = 0; j < n; j++) {
                if (s.charAt(i) == s.charAt(j) && i != j) {
                    found = true;
                    break;
                }
            }
            if (found == false) {
                return s.charAt(i);
            }
        }
        return '$';
    }

    public static void main(String[] args) {
        String s = "geeksforgeeks";
        char ch = nonRepeatingChar(s);
        System.out.println(ch);
    }
}

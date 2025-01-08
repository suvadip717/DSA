package Questions;

public class DataType {
    static int dataTypeSize(String str) {
        // code here
        int size = -1;
        if (str.equals("Character")) {
            size = 1;
        }
        if (str.equals("Integer")) {
            size = 4;
        }
        if (str.equals("Long")) {
            size = 8;
        }
        if (str.equals("Float")) {
            size = 4;
        }
        if (str.equals("Double")) {
            size = 8;
        }
        return size;
    }

    public static void main(String[] args) {
        System.out.println("The size is " + dataTypeSize("Character"));
    }
}

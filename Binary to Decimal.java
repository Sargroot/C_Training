import java.io.*;
import java.util.*;
import java.util.Scanner;

public class BinaryToDecimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String binaryStr = sc.nextLine();

        int decimal = Integer.parseInt(binaryStr, 2);

        System.out.println(decimal);
        sc.close();
    }
}

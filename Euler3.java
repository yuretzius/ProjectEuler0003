import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Euler3 {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long number = in.nextLong();
            for (long f = 2; f*f <= number; f++) {
                while (number % f == 0 && number != f) number /= f;
            }
            System.out.println(number);
        }
    }
}
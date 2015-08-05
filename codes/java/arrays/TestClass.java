import java.util.Arrays;
import java.util.Scanner;

public class TestClass {

  static void plus1(int   a) { 
    a    += 1; 
  }

  static void plus2(int[] a) { 
    a[0] += 2; 
    }

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int[] a = new int[2];
    a[0]    = in.nextInt();
    a[1]    = in.nextInt();
    plus1(a[1]);
    plus2(a);
    System.out.println(Arrays.toString(a));
  }

}

import java.util.Scanner;
import java.text.DecimalFormat;

public class Main{
  public static void main(String args[]){
    Scanner input = new Scanner(System.in);
    int a = input.nextInt();
    int b = input.nextInt();
    String sum = new DecimalFormat(",###").format(a+b);
    System.out.println(sum);
    input.close();
  }
}

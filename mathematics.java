import java.util.Scanner;
import java.lang.Math;
class mathematics{
  public static void main(String args[]){
    Scanner scan=new Scanner(System.in);
    System.out.println("Enter A:-");
    int a=scan.nextInt();
    System.out.println("Enter B:-");
    int b=scan.nextInt();
    System.out.println("Square root of "+a+" is "+Math.sqrt(a));
    System.out.println(a+" raise to the power "+b+" is "+Math.pow(a,b));
    
  }
}

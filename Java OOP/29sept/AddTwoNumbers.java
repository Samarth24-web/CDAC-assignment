import java.util.Scanner;

class AddTwoNumbers{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Num1");
    int num1=sc.nextInt();
    System.out.println("Enter Num2");
    int num2=sc.nextInt();
    System.out.println("Addition of two numbers is :"+(num1+num2));
  }
}
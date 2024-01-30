import java.util.*;
public class Sum_of_two_num 
{
    public static void main(String args[])
{
   System.out.println("Enter the value of a and b:");
   Scanner sc = new Scanner(System.in);
   int a = sc.nextInt();
   int b = sc.nextInt();
   int sum = a+b;
   System.out.print(" Your sum is: " +sum);
   // ("sum") will print on screen sum so be careful.
   sc.close();
}

}

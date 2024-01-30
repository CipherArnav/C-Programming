import java.util.*;
public class Input_from_user 
{
    public static void main(String args [])
    {
        System.out.println("Enter the your name:");
        // Input from the user
       Scanner sc = new Scanner(System.in);
       String name = sc.nextLine();
       System.out.println(name);
       // nextInt() -> to take integer type input
       // nextFloat() -> to take float type input 
    }
}

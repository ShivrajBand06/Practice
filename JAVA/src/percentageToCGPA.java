import java.util.Scanner;
public class percentageToCGPA
{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Percentage to convert it into CGPA: ");
        double percent = sc.nextDouble();

        System.out.println("Calculated CGPA is: "+percent/9.5+66);


    }
}

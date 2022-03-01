import java.util.Scanner;

public class Scholar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int maths,sci,eng,history,geo,arts;
        System.out.println("Enter the marks of Maths: ");
        maths=sc.nextInt();
        System.out.println("Enter the marks of Science: ");
        sci=sc.nextInt();

        System.out.println("Enter the marks of English: ");
        eng=sc.nextInt();

        System.out.println("Enter the marks of History; ");
        history=sc.nextInt();

        System.out.println("Enter the marks of Geo: ");
        geo=sc.nextInt();

        System.out.println("Enter the marks of arts: ");
        arts=sc.nextInt();

        double sum = sci+eng+maths+arts+history+geo;

        System.out.println("Total percentage are "+ (sum/600)*100);
    }
}
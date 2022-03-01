import java.util.Scanner;
/*

j   0 1 2 3
i 0 *        00
  1 * *      01 11
  2 * * *    02 12  22
  3 * * * *  03 13  23  33
 */

public class Pattern1 {
    static void patterPrint(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j<=i) {
                    System.out.print("*");
                }
            }
            System.out.print("\n");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of Lines: ");
        int c= sc.nextInt();
        patterPrint(c);
    }
}

import java.util.Scanner;
import  java.util.Random;

public class RandomNUMBER {
    public static void main(String[] args){
        Scanner sc  = new Scanner(System.in);
        System.out.println("Choose the Number: ");
        int userInput = sc.nextInt();
        Random rand = new Random();
        int compInput= rand.nextInt(100);

        int count = 0;
        while(userInput != compInput){
            if(userInput>compInput){
                System.out.println("Please guess lesser number!");
                userInput= sc.nextInt();
                count++;
            }
            else{
                System.out.println("Please guess greater number!");
                userInput= sc.nextInt();
                count++;
            }
        }
    System.out.println("Congratulations you have guess the number in "+count+" chances");
    }
}

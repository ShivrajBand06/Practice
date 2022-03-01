import java.util.Random;
import java.util.Scanner;

class Game{
   public int number;
   public int CompNumber;
   public  int No_of_guesses;

    public void set_No_of_Guesses(int No_of_guesses){
        this.No_of_guesses = No_of_guesses;
    }

    public int get_No_of_Guesses(){ return this.No_of_guesses;}

    Game(){
        Random rand = new Random();
        CompNumber = rand.nextInt(100);
    }
    void take_user_input(){
        System.out.println("Guess any Number: ");
        Scanner sc = new Scanner(System.in);
        this.number = sc.nextInt();
    }
    boolean isCorrectNumber(){
        No_of_guesses++;
        if(number==CompNumber){
            System.out.format("Congratulations you have guessed the number, it was %d,it was guessed in %d chances",CompNumber,No_of_guesses);
            return true;
        }
        else if(number>CompNumber){
            System.out.println("Number is higher choose lower number");
        }
        else if(number<CompNumber){
            System.out.println("Number is lower please choose higher number");
        }
        return false;
    }
}

public class Game_oop {
    public static void main(String[] args){
    Game g = new Game();
    boolean b = false;
    while(!b){
        g.take_user_input();
        b=g.isCorrectNumber();
    }
    }
}

import java.util.Scanner;

class Day{
    public void Morning(){
        System.out.println("Good Morning....");
    }
    public void Evening(){
        System.out.println("Good Evening....");
    }
}

class Night extends  Day{
    public void Evening(){
        System.out.println("Good Evening Boys....");

    }
    public void Night(){
        System.out.println("Good Night......");
    }
}

public class Dynamic_method {
    public static void main(String[] args){
        Day d = new Day();
        d.Evening();

    }
}

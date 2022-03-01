abstract class Monkey{
    int x =90;
    abstract void Jump();
    abstract void bite();
    void climbing(){
        System.out.println("climbing Pipelines.....");
    }
}


interface basic_activity{
    void sleep();
    default void eat(){
        System.out.println("Eating banana....");
    }

}

class Humans extends Monkey implements basic_activity{
    //int x;
    void Setx(int a){
        x = a;
    }
    void Jump(){
        System.out.println("Jumping.....");
    }
    void bite(){
        System.out.println("Biting...");
    }
    void climbing(){
        System.out.println("Climbing rope...");
    }
    public void sleep(){
        System.out.println("Sleeping.....");
    }
   // public void eat(){
     //   System.out.println("Eating Pasta...");
    //}
}

public class Interface_eg_1 {
    public static void main(String[] args) {
    Humans H = new Humans();
    H.bite();
    H.eat();
    //H.Setx(5);
      //  System.out.println(H.x);
    }
}


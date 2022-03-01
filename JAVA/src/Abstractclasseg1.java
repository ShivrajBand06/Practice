
abstract class Pen{
    abstract void write();
    abstract void refill();
    abstract void changeNIb(int x);

}

class TRIMAX extends Pen{
    void write(){
        System.out.println("Writing....");
    }
    void refill(){
        System.out.println("Refilling....");
    }
    void Empty(){
        System.out.println("Pen is empty");
    }
    void changeNIb(int x){
        System.out.println("Changing NIb...."+x);
    }
}

public class Abstractclasseg1 {
    public static void main(String[] args) {
    TRIMAX T = new TRIMAX();
    T.write();
    T.refill();
    T.Empty();
    T.changeNIb(8);
    }
}

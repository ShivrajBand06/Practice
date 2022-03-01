import java.util.Scanner;

class Base{
    private int x=8;
    private int y;
   Base(){

    }
   Base(int a ){
        this.y = a;

    }

    public void Getsum() {
        System.out.println(x+y);
    }
}

class Derived extends Base{
    private int u;
    private int t;
    Derived(){}
    Derived(int x, int y){
        super(y);
        this.u =x;
    }

    public int getT() {
        return t;
    }
}


public class inheritance {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        //Base b = new Base(5);
        //b.Getsum();
        Derived d= new Derived(4,8);
        d.Getsum();

    }
}

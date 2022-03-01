import java.util.Scanner;
class Employee{
 private
int salary ;
String name;
public int getSalary(){
    return salary;
}
public String getName(){
    return name;
}
public void setName(String s){
    name =s;
}
}

public class oops1 {

    public static void main(String[] args){
        Employee Emp1 = new Employee();
        Emp1.setName("Bunty");
        System.out.println(Emp1.name);
    }
}

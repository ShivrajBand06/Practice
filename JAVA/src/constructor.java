import java.util.Scanner;

class Employee1{
    private int EmpID ;
    private int Salary;
    public int GetName(){
        return EmpID;
    }
    public void SetName(int c){
         EmpID = c;
    }
    public int GetSalary(){
        return Salary;
    }
    public void SetSalary(int v){
        Salary  =v;

    }
    public Employee1(){
        EmpID = 56;
        Salary = 960000;
    }
    public Employee1(int x ){
        EmpID = x;
    }
    public Employee1(int x, int y){
        EmpID = x;
        Salary = y;

    }

}

public class constructor {
    public static void main(String[] args){
        Scanner sc =  new Scanner(System.in);

        int id = sc.nextInt();
        int salary = sc.nextInt();
        Employee1 emp = new Employee1(id, salary);

        //emp.SetName(id); emp.SetSalary(salary);

        System.out.println("EmployID "+emp.GetName()+" Salary is: "+ emp.GetSalary());
    }
}

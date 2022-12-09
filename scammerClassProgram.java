import java.util.Scanner;

class EmployeeDetails {
    Scanner scan = new Scanner(System.in);

    // Declaring variables to store values
    int ID, age;
    String name;
    float salary;

    // Getting input from the keyboard with the help of scanner class
    void inputData() {
        System.out.print("Enter Employee ID : ");
        ID = scan.nextInt();
        System.out.print("Enter Employee Name : ");
        name = scan.next();
        System.out.print("Enter Employee Age : ");
        age = scan.nextInt();
        System.out.print("Enter Employee Salary : ");
        salary = scan.nextFloat();
    }
    void display() {
        System.out.println();
        System.out.println("Employee ID : " + ID);
        System.out.println("Employee Name : " + name);
        System.out.println("Employee age : " + age);
        System.out.println("Employee salary : " + salary);
    }
}
public class scammerClassProgram {
    public static void main(String[] args) {
        EmployeeDetails e1 = new EmployeeDetails();
        // Getting data from the user
        e1.inputData();

        // Display the accepted data to the screen
        e1.display();
    }
}

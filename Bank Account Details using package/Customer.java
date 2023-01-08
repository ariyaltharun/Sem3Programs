package BankAccount;

public class Customer {
    String name;
    private double balance;

    public Customer(String name, double balance) {
        this.name = name;
        this.balance = balance;
    }

    public void display() {
        System.out.println("Customer Name : " + name);
        System.out.println("Available Balance : " + balance);
    }
}

import java.util.Scanner;

// a) Create a abstract class called Vehicle
abstract class Vehicle {
    String hasHelmet;
    int yearOfManufacture;

    abstract void getData();

    abstract void putData();

    Vehicle(String hasHelmet) {
        this.hasHelmet = hasHelmet;
    }

    Vehicle(int yearOfManufacture) {
        this.yearOfManufacture = yearOfManufacture;
    }
}


// b) Create two derived classes called "TwoWheeler" and "FourWheeler"
class TwoWheeler extends Vehicle {
    String Brand, EngineType, Color;
    double Cost;

    TwoWheeler(String hasHelmet) {
        super(hasHelmet);
    }


    void putData() {
        this.Brand = "Hero";
        this.Cost = 1.5;
        this.EngineType = "2 Stroke";
        this.Color = "Sports Red";
    }

    void getData() {
        System.out.println("Two Wheeler Vehicle details");
        System.out.println("Brand = " + Brand);
        System.out.println("Cost = " + Cost);
        System.out.println("Engine Type = " + EngineType);
        System.out.println("Color = " + Color);
        System.out.println("Has Helmet? " + hasHelmet);
    }
}


final class FourWheeler extends Vehicle {
    Scanner scan = new Scanner(System.in);
    String Brand, EngineType, Color;
    double Cost;

    FourWheeler(int yearOfManufacture) {
        super(yearOfManufacture);
    }


    void putData() {
        System.out.println("\nEnter the Details of Four Wheeler Vehicle");
        System.out.print("Enter the brand : ");
        Brand = scan.next();
        System.out.print("Enter the cost : ");
        Cost = scan.nextDouble();
        System.out.print("Enter the Engine Type : ");
        EngineType = scan.nextLine();
        System.out.print("Enter the Color : ");
        Color = scan.next();
    }

    void getData() {
        System.out.println("\nFour Wheeler Details");
        System.out.println("Year of Manufacture = " + yearOfManufacture);
        System.out.println("Brand = " + Brand);
        System.out.println("Cost = " + Cost);
        System.out.println("Engine Type = " + EngineType);
        System.out.println("Color = " + Color);
    }
}





class MyTwoWheeler extends TwoWheeler {
    String ownerName;

    MyTwoWheeler() {
        super("Yes");
        super.putData();
        this.ownerName = "Witch";
    }

}


class Main {
    public static void main(String[] args) {
        MyTwoWheeler twoWheeler = new MyTwoWheeler();
        FourWheeler four = new FourWheeler(2022);

        System.out.println("Two Wheeler owner name : " + twoWheeler.ownerName);
        twoWheeler.getData();

        four.putData();
        four.getData();

    }
}

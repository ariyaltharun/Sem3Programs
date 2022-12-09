import java.util.Scanner;

abstract class Vehicle {
    String hashelmet;
    int yearOfManufacture;

    Vehicle(String hashelmet, int yearOfManufacture) {
        this.hashelmet = hashelmet;
        this.yearOfManufacture = yearOfManufacture;
    }

    abstract void getData();

    abstract void putData();
}


class TwoWheeler extends Vehicle {
    Scanner scan = new Scanner(System.in);

    String Brand, EngineType, Color;
    float Cost;

    TwoWheeler(String  hashel, int year) {
        super(hashel, year);
    }
    @Override
    void getData() {
        System.out.println("Enter the Brand name, Cost, EngineType, Color");
        Brand = scan.nextLine();
        Cost = scan.nextFloat();
        EngineType = scan.nextLine();
        Color = scan.nextLine();
    }

    @Override
    void putData() {
        System.out.println("Details of Two Wheeler");
        System.out.println(super.hashelmet);
        System.out.println(super.yearOfManufacture);
        System.out.println(Brand);
        System.out.println(Cost);
        System.out.println(EngineType);
        System.out.println(Color);
    }
}



final class FourWheeler extends Vehicle {
    FourWheeler(String h, int yr) {
        super(h, yr);
    }
    @Override
    void putData() {

    }

    @Override
    void getData() {

    }
}
public class VehicleInheritence {
    public static void main(String[] args) {
        System.out.println("Hello world!");

        Vehicle v = new Vehicle();

        TwoWheeler bike = new TwoWheeler("Yes", 2030);

        bike.getData();

        bike.putData();
    }
}

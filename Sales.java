import java.util.Scanner;

public class Sales {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        float totalSales = 0;
        int[] ID = new int[5];
        float[] sales = new float[5];

        int max_id = 0, min_id = 0;
        float max=0, min=1000000000;
        for (int i=0; i<5; i++) {
            System.out.print("Enter the id of person " + (i + 1) + " : ");
            ID[i] = scan.nextInt();
            System.out.print("Enter the sales of person with ID " + ID[i] + " : ");
            sales[i] = scan.nextFloat();

            // Computing totalSales price
            totalSales += sales[i];

            // Finding a person with the highest sales price
            if (max < sales[i]) {
                max = sales[i];
                max_id = ID[i];
            }

            if (min > sales[i]) {
                min = sales[i];
                min_id = ID[i];
            }
        }



        for (int i=0; i<5; i++) {
            System.out.println("------------------------------");
            System.out.println("Person ID = " + ID[i]);
            System.out.println("Person sales = " + sales[i]);
        }
        System.out.println("------------------------------");
        System.out.println("Total sales = " + totalSales);


        // Compute and print the average sale price
        System.out.println("------------------------------");
        float avgSalesPrice = (totalSales) / 5;
        System.out.println("Average Sales price = " + avgSalesPrice);


        // Printing a salesperson id and sales price who has max and min sales price
        System.out.println("------------------------------");
        System.out.println("Salesperson " + max_id + " had the maximum sale with " + max);
        System.out.println("Salesperson " + min_id + " had the minimum sale with " + min);


        // Prompt a user to enter a value
        System.out.println("------------------------------");
        System.out.print("Enter a value : ");
        float value = scan.nextFloat();

        int salesExceedsValue=0;
        for (int i=0 ;i<5 ;i++)
            if (sales[i] > value)
                salesExceedsValue++;

        System.out.println("Number of sales people who exceeds " + value + " = " + salesExceedsValue);
        System.out.println("------------------------------");
    }
}


import java.util.Scanner;

class Matrix {
    Scanner scan = new Scanner(System.in);
    // Declaring row and col variables to store number of rows and cols in the matrix
    int row, col;

    // Declaring 2d for storing elements and performing multiplication
    int[][] matrix = new int[100][100];

    void getRowCol() {
        System.out.print("Enter number of rows : ");
        row = scan.nextInt();
        System.out.print("Enter number of cols : ");
        col = scan.nextInt();
    }

    void fillElements() {
        for (int i=0; i<row; i++)
            for (int j=0; j<col; j++) {
                System.out.print("Enter " + i + ", " + j + " element : ");
                matrix[i][j] = scan.nextInt();
            }
    }

}


public class MatrixMultiplication {
    public static void main(String[] args) {
        Matrix A = new Matrix();
        Matrix B = new Matrix();

        // Accepting no of row and col from the user
        A.getRowCol();
        B.getRowCol();

        // Checking validity
        if (A.col != B.row) {
            System.out.println("Matrix multiplication is not valid");
            System.exit(0);
        }

        // Accepting elements from the user
        A.fillElements();
        B.fillElements();

        // Manipulating matrix for matrix multiplication
        for (int i = 0; i < A.row; i++) {
            for (int j = 0; j < B.col; j++) {
                int temp = 0;
                for (int h = 0; h < A.row; h++)
                    temp += A.matrix[i][h] * B.matrix[h][j];
                System.out.print(temp + " ");
            }
            System.out.println();
        }

    }
}

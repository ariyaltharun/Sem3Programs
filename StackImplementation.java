class Stack {
    int[] stack = new int[10];
    int top = -1;

    boolean isEmpty() {
        return top == -1;
    }


    boolean isFull() {
        return top == 9;
    }


    void push(int item) {
        if(isFull()) {
            System.out.println("[ ERROR ] Can't add the element to the stack.");
            System.out.println("[ REASON ] Stack is full!!!");
        }
        else {
            stack[++top] = item;
            System.out.println("[ INFO ] Element added successfully");
        }
    }

    int pop() {
        if (isEmpty()) {
            System.out.println("[ ERROR ] Can't remove the element to the stack.");
            System.out.println("[ REASON ] Stack is Empty!!!");
            return -1;
        } else {
            System.out.println("[ INFO ] Element poped successfully");
            return stack[top--];
        }
    }

    void display() {
        if (isEmpty())
            System.out.println("Stack is Empty");
        else {
            System.out.println("\nCurrent Elements in the stack");
            for (int i = 0; i <= top; i++)
                System.out.println(stack[i]);
        }
    }
}

public class StackImplementation {
    public static void main(String[] args) {
        Stack stack = new Stack();

        // Push an item to a stack
        stack.push(10);

        // Pop an item from the stack
        System.out.println("Poped element = " + stack.pop());

        // Display the items in the stack
        stack.display();
    }
}

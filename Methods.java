import java.util.Scanner;

class demo {
    public static void add(int a,int b){
        System.out.println("Addition is "+(a+b)+" ");
    }
    public static void sub(int a,int b){
        System.out.println("Difference is "+(a-b)+" ");
    }
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter a");
        int a = obj.nextInt();
        System.out.println("Enter b");
        int b = obj.nextInt();
        add(a,b);
        sub(a,b);
    }
}


// Design a class namely circle. Construct 3 circle objects with radius 5,6.8,12 and display their corresponding area 
// along with radius. A non argument constructor sets the default value of radius 1.
// Calculate area and display the area


// How can you copy the values from one object to another in java..

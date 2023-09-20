import java.util.*;
public class Bank {
    static String account_number;
    static String new_acc="12345678";
    static String pin;
    static String new_pin="0000";
    static double balance=0.0;
    static double amount;

    static void create(){
        Scanner scan = new Scanner(System.in);
        new_acc = random();
        System.out.println("Your Account Number: "+ new_acc);
        System.out.println("Enter new PIN");
        new_pin = scan.nextLine();
        System.out.println("New account created successfully.");
    }

    static String random(){
        Random obj = new Random();
        long num = obj.nextLong()%100000000L;
        if(num<0){
            num = -num;
        }
        account_number = String.format("%08d",num);
        return account_number;
    }
    
    static void login(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter Account Number");
        account_number = scan.nextLine();
        if(account_number.equals(new_acc)){
            System.out.println("Enter PIN");
            pin = scan.nextLine();
            if(pin.equals(new_pin)){
                System.out.println("Login Successful");
            }
            else{
                System.out.println("Login failed");
                System.exit(0);
            }
        }
        else{
            System.out.println("Account number does not match");
            System.exit(0);
        }
    }
    
    static void Transactions(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter 1 for deposit, Enter 2 for withdrawl, Enter 3 for checking balance");
        int ch = scan.nextInt();
        switch(ch){
            case 1: {
                boolean checker = true;
                do{
                System.out.println("Enter amount to add");
                amount = scan.nextDouble();
                scan.nextLine();
                System.out.println("Enter PIN");
                pin = scan.nextLine();
                if(pin.equals(new_pin)){
                    balance+=amount;
                    System.out.println("Money deposited successfully");
                    Transactions();
                }
                else{
                    System.out.println("Wrong PIN,Try again");
                    checker = false;
                }
            } while(!checker);
        
                System.out.println("Balance: "+ balance); 
                break;
            }
            case 2: {
                boolean checker = true;
                do{
                System.out.println("Enter withdrwal amount");
                amount = scan.nextDouble();
                if(amount>balance){
                    System.out.println("Insufficient Balance");
                    System.exit(0);
                }
                else{
                    System.out.println("Enter PIN");
                    scan.nextLine();
                    pin = scan.nextLine();
                    if(pin.equals(new_pin)){
                        balance-=amount;
                        System.out.println("Money withdrawn successfully");
                        System.out.println("Balance: "+ balance);
                        Transactions();
                    }
                    else{
                        System.out.println("Wrong PIN,Try again");
                        checker = false;
                    }
                }
                } while(!checker); 
                break;
            }
            case 3: {
                System.out.println("Balance: "+ balance);
                break;
            }
            default: {
                System.out.println("Wrong input");
            }
        }
    }
    
    public static void main(String[] args){
        System.out.println("Welcome to ABC Bank");
        System.out.println("Enter 1 for opening new account , Enter 2 for Login");
        Scanner scan = new Scanner(System.in);
        int ch = scan.nextInt();

        switch(ch){
            case 1: {
                create();
                login();
                break;
            }
            case 2: {
                login();
                break;
            }
            default: {
                System.out.println("Wrong input");
                System.exit(0);
            }
        }
        Transactions();
    }
}

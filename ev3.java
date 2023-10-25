import java.io.*;

class Product implements Serializable {
    String name;
    double price;
    int quantity;

    public Product(String name, double price, int quantity) {
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    @Override
    public String toString() {
        return name + " Price: " + price + " Quantity: " + quantity;
    }

    public void Serialize() {
        try (FileOutputStream fileOut = new FileOutputStream(name);
             ObjectOutputStream out = new ObjectOutputStream(fileOut)) {
            out.writeObject(this);
            System.out.println(name + " saved");
        } catch (Exception e) {
            System.out.println("Wrong");
            e.printStackTrace();
        }
    }

    public static Product Deserializable(String filename) {
        try (FileInputStream fileIn = new FileInputStream(filename);
             ObjectInputStream in = new ObjectInputStream(fileIn)) {
            Product product = (Product) in.readObject();
            System.out.println(product.name + " loaded");
            return product;
        } catch (Exception e) {
            System.out.println("Wrong");
            e.printStackTrace();
            return null;
        }

    }
}

public class Main {
    public static void main(String[] args) {
        Product obj = new Product("pen", 10.0, 20);
        obj.Serialize();
        Product loader = Product.Deserializable("pen");
        System.out.println(loader.toString());
    }
}

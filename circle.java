public class circle{
    double radius;
    circle(){
        radius=1;
        area(radius);
    }
    circle(double r){
        radius = r;
        area(r);
    }
     void area(double r){
        radius = r;
        System.out.println("Area " + (3.14*r*r));
    }
public static void main(String  [] a){
    circle c1=new circle(5);
    circle c2=new circle(6.8);
    circle c3=new circle(12);
    circle c = new circle();
}
}
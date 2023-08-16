class copycon{
    int age;
    copycon(){
        age = 80;
    }
    copycon(copycon o){
        age = o.age;
    }
    public static void main(String[] args){
        copycon obj = new copycon();
        copycon o = new copycon(obj);
        System.out.println("Age is "+o.age);
    }
}
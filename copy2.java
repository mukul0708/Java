class copy2{
    String name;
    int uid;
    copy2(String name,int uid){
        this.name=name;
        this.uid=uid;
    }
    copy2(copy2 s2){
        this.name=s2.name;
        this.uid=s2.uid;
    }
    void disp(){
        System.out.println("Name: "+name);
        System.out.println("UID: "+uid);
    }
    public static void main(String[] a){
        copy2 s1 = new copy2("Mukul",36);
        copy2 s2 = new copy2(s1);
        s2.disp();
    }
}
package javavarsity;

public class MultipleInheri {

    public void M1() {
        System.out.println("Base Class Method");
    }
}

class Derived extends MultipleInheri {

    public void M2() {
        System.out.println("Derived Class Methods");
    }
}

class Derived2 extends Derived {

    public void M3() {
        System.out.println("Derived Class3 Methods");
    }
}

class Test {

    public static void main(String[] args) {
        Derived2 d = new Derived2(); // creating object 
        d.M1(); // print Base Class Method 
        d.M2(); 
        d.M3();

    }
}

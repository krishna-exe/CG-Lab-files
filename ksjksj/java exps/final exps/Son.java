class GrandFather {
  GrandFather() {
    System.out.println("I am the grandfather!");
  }
}

class Father extends GrandFather {
  String familyName;
  String houseaddress;
  Father() {
    System.out.println("I am the father! I inherit from Grandfather");
  }
}
public class Son extends Father {

  Son() {
    System.out.println("I am the son and I inherit from my father.");
  }

  public static void main(String[] args) {
    Son s1 = new Son();

  }
}

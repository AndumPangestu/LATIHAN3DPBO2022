package latihan3.java;

public class Processor {

    private String name;
    private int price;

    public Processor(String name, int price) {
        this.name = name;
        this.price = price;
    }

    public Processor() {
    }

    public int getPrice() {
        return price;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setPrice(int price) {
        this.price = price;
    }

}

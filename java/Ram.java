package latihan3.java;

public class Ram {

    private int capacity;
    private int price;

    public Ram(int capacity, int price) {
        this.capacity = capacity;
        this.price = price;
    }

    public Ram() {
    }

    public int getPrice() {
        return price;
    }

    public int getCapacity() {
        return capacity;
    }

    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }

    public void setPrice(int price) {
        this.price = price;
    }

}

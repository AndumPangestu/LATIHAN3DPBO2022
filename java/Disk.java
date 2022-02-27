package latihan3.java;

/**
 * Disk
 */
public class Disk {

    private String type;
    private int capacity;
    private int price;

    public Disk(String type, int capacity, int price) {
        this.setType(type);
        this.setCapacity(capacity);
        this.setPrice(price);
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getCapacity() {
        return capacity;
    }

    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public Disk() {
    }

}
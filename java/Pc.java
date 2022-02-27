package latihan3.java;

public class Pc {

    private Disk disk;
    private Processor processor;
    private Ram ram;
    private int totalPrice;

    public Pc() {
    }

    public Pc(Disk disk, Processor processor, Ram ram) {
        this.disk = disk;
        this.processor = processor;
        this.ram = ram;
        this.totalPrice = this.ram.getPrice() + this.processor.getPrice() + this.disk.getPrice();
    }

    public int getTotalPrice() {
        return totalPrice;
    }

    public void setTotalPrice(int totalPrice) {
        this.totalPrice = totalPrice;
    }

    public Disk getDisk() {
        return disk;
    }

    public void setDisk(Disk disk) {
        this.disk = disk;
    }

    public Processor getProcessor() {
        return processor;
    }

    public void setProcessor(Processor processor) {
        this.processor = processor;
    }

    public Ram getRam() {
        return ram;
    }

    public void setRam(Ram ram) {
        this.ram = ram;
    }

}

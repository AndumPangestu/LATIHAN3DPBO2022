package latihan3.java;

public class Main {

    public static void main(String[] args) {

        Pc pc = new Pc();
        pc.setProcessor(new Processor("AMD", 1000000));
        pc.setDisk(new Disk("SSD", 1000, 1500000));
        pc.setRam(new Ram(16, 1000000));
        pc.setTotalPrice(pc.getProcessor().getPrice() + pc.getDisk().getPrice() + pc.getRam().getPrice());

        System.out.println("=============================================");
        System.out.println("DATA PC : ");
        System.out.println("=============================================");
        System.out.println("- Processor   : ");
        System.out.println("  - Name       = " + pc.getProcessor().getName());
        System.out.println("  - Price      = Rp." + pc.getProcessor().getPrice());
        System.out.println("- Disk        : ");
        System.out.println("  - Type       = " + pc.getDisk().getType());
        System.out.println("  - Capacity   = " + pc.getDisk().getCapacity());
        System.out.println("  - Price      = Rp." + pc.getDisk().getPrice());
        System.out.println("- Ram         : ");
        System.out.println("  - Capacity   = " + pc.getRam().getCapacity());
        System.out.println("  - Price      = Rp." + pc.getRam().getPrice());
        System.out.println("- Total Price :  Rp." + pc.getTotalPrice());
        System.out.println("=============================================");

    }
}
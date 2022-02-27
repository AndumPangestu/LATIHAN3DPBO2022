from Disk import Disk
from Ram import Ram
from Processor import Processor
from Pc import Pc


pc = Pc()
pc.setProcessor(Processor("AMD", 1000000))
pc.setDisk(Disk("SSD", 1000, 1500000))
pc.setRam(Ram(16, 1000000))
pc.setTotalPrice(pc.getProcessor().getPrice() +
                 pc.getDisk().getPrice() + pc.getRam().getPrice())

print("=============================================")
print("DATA PC : ")
print("=============================================")
print("- Processor   : ")
print("  - Name       = " + pc.getProcessor().getName())
print("  - Price      = Rp." + str(pc.getProcessor().getPrice()))
print("- Disk        : ")
print("  - Type       = " + pc.getDisk().getType())
print("  - Capacity   = " + str(pc.getDisk().getCapacity()))
print("  - Price      = Rp." + str(pc.getDisk().getPrice()))
print("- Ram         : ")
print("  - Capacity   = " + str(pc.getRam().getCapacity()))
print("  - Price      = Rp." + str(pc.getRam().getPrice()))
print("- Total Price :  Rp." + str(pc.getTotalPrice()))
print("=============================================")

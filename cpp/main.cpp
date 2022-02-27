#include <bits/stdc++.h>
#include "Pc.cpp"
using namespace std;

int main()
{
    Pc pc;
    pc.setProcessor(Processor("AMD", 1000000));
    pc.setDisk(Disk("SSD", 1000, 1500000));
    pc.setRam(Ram(16, 1000000));
    pc.setTotalPrice(pc.getProcessor().getPrice() + pc.getDisk().getPrice() + pc.getRam().getPrice());

    cout << "=============================================\n";
    cout << "DATA PC : \n";
    cout << "=============================================\n";
    cout << "- Processor   : \n";
    cout << "  - Name       = " << pc.getProcessor().getName() << "\n";
    cout << "  - Price      = Rp." << pc.getProcessor().getPrice() << "\n";
    cout << "- Disk        : \n";
    cout << "  - Type       = " << pc.getDisk().getType() << "\n";
    cout << "  - Capacity   = " << pc.getDisk().getCapacity() << "\n";
    cout << "  - Price      = Rp." << pc.getDisk().getPrice() << "\n";
    cout << "- Ram         : \n";
    cout << "  - Capacity   = " << pc.getRam().getCapacity() << "\n";
    cout << "  - Price      = Rp." << pc.getRam().getPrice() << "\n";
    cout << "- Total Price :  Rp." << pc.getTotalPrice() << "\n";
    cout << "=============================================\n";

    return 0;
}

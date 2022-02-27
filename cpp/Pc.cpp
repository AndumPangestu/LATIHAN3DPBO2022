#include <bits/stdc++.h>
#include "Disk.cpp"
#include "Processor.cpp"
#include "Ram.cpp"

using namespace std;

class Pc
{
private:
    Disk disk;
    Processor processor;
    Ram ram;
    int totalPrice;

public:
    Pc()
    {
        this->disk = Disk();
        this->processor = Processor();
        this->ram = Ram();
        this->totalPrice = 0;
    }

    Pc(Disk disk, Processor processor, Ram ram)
    {
        this->disk = disk;
        this->processor = processor;
        this->ram = ram;
        this->totalPrice = disk.getPrice() + processor.getPrice() + ram.getPrice();
    }

    void setDisk(Disk disk)
    {
        this->disk = disk;
    }

    void setProcessor(Processor processor)
    {
        this->processor = processor;
    }

    void setRam(Ram ram)
    {
        this->ram = ram;
    }

    void setTotalPrice(int totalPrice)
    {
        this->totalPrice = totalPrice;
    }

    Disk getDisk()
    {
        return this->disk;
    }

    Processor getProcessor()
    {
        return this->processor;
    }

    Ram getRam()
    {
        return this->ram;
    }

    int getTotalPrice()
    {
        return this->totalPrice;
    }

    ~Pc(){};
};

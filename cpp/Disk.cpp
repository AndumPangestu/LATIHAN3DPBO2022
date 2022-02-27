#include <bits/stdc++.h>

using namespace std;

class Disk
{
private:
    string type;
    int capacity, price;

public:
    Disk()
    {
        this->type = "-";
        this->capacity = 0;
        this->price = 0;
    }

    Disk(string type, int capacity, int price)
    {
        this->type = type;
        this->capacity = capacity;
        this->price = price;
    }

    void setType(string type)
    {
        this->type = type;
    }

    void setCapacity(int capacity)
    {
        this->capacity = capacity;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    string getType()
    {
        return this->type;
    }

    int getCapacity()
    {
        return this->capacity;
    }

    int getPrice()
    {
        return this->price;
    }

    ~Disk(){};
};

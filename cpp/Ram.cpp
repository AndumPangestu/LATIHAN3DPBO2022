#include <bits/stdc++.h>

using namespace std;

class Ram
{
private:
    int capacity, price;

public:
    Ram()
    {

        this->capacity = 0;
        this->price = 0;
    }

    Ram(int capacity, int price)
    {

        this->capacity = capacity;
        this->price = price;
    }

    void setCapacity(int capacity)
    {
        this->capacity = capacity;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    int getCapacity()
    {
        return this->capacity;
    }

    int getPrice()
    {
        return this->price;
    }

    ~Ram(){};
};

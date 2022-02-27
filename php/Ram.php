<?php


class Ram
{
    private $capacity, $price;


    public function __construct($capacity = 0, $price = 0)
    {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    public function setCapacity($capacity)
    {
        $this->capacity = $capacity;
    }

    public function setPrice($price)
    {
        $this->price = $price;
    }

    public function getCapacity()
    {
        return $this->capacity;
    }

    public function getPrice()
    {
        return $this->price;
    }
}
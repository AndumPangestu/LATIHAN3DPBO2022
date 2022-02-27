<?php

class Disk
{
    private $type, $capacity, $price;


    public function __construct($type = "-", $capacity = 0, $price = 0)
    {
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }


    public function setType($type)
    {
        $this->type = $type;
    }

    public function setCapacity($capacity)
    {
        $this->capacity = $capacity;
    }

    public function setPrice($price)
    {
        $this->price = $price;
    }

    public function getType()
    {
        return $this->type;
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
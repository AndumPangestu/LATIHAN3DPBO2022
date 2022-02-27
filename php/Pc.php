<?php

include "Disk.php";
include "Processor.php";
include "Ram.php";


class Pc
{
    private $disk, $ram, $processor, $totalPrice;

    public function __construct()
    {
        $this->disk = new Disk();
        $this->ram = new Ram();
        $this->processor = new Processor();
        $this->totalPrice = 0;
    }

    public function setDisk($disk)
    {
        $this->disk = $disk;
    }

    public function setRam($ram)
    {
        $this->ram = $ram;
    }

    public function setProcessor($processor)
    {
        $this->processor = $processor;
    }

    public function setTotalPrice($totalPrice)
    {
        $this->totalPrice = $totalPrice;
    }

    public function getDisk()
    {
        return $this->disk;
    }

    public function getRam()
    {
        return $this->ram;
    }

    public function getProcessor()
    {
        return $this->processor;
    }

    public function getTotalPrice()
    {
        return $this->totalPrice;
    }
}
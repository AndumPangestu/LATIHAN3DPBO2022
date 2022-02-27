<?php

include "Pc.php";

$pc = new Pc();
$pc->setProcessor(new Processor("AMD", 1000000));
$pc->setDisk(new Disk("SSD", 1000, 1500000));
$pc->setRam(new Ram(16, 1000000));
$pc->setTotalPrice($pc->getProcessor()->getPrice() + $pc->getDisk()->getPrice() + $pc->getRam()->getPrice());

echo ("=============================================<br>");
echo ("DATA PC : <br>");
echo ("=============================================<br>");
echo ("- Processor   : <br>");
echo ("  - Name       = " . $pc->getProcessor()->getName() . "<br>");
echo ("  - Price      = Rp." . $pc->getProcessor()->getPrice() . "<br>");
echo ("- Disk        : <br>");
echo ("  - Type       = " . $pc->getDisk()->getType() . "<br>");
echo ("  - Capacity   = " . $pc->getDisk()->getCapacity() . "<br>");
echo ("  - Price      = Rp." . $pc->getDisk()->getPrice() . "<br>");
echo ("- Ram         : <br>");
echo ("  - Capacity   = " . $pc->getRam()->getCapacity() . "<br>");
echo ("  - Price      = Rp." . $pc->getRam()->getPrice() . "<br>");
echo ("- Total Price :  Rp." . $pc->getTotalPrice() . "<br>");
echo ("=============================================<br>");

<?php
require_once('Car.php');
class uberBan extends Car
{
    public $typeCarAccetd;
    public $seatMaterial;

    public function __construct($license, $driver, $typeCarAccetd, $seatMaterial)
    {
        parent::__construct($license, $driver);
        $this->typeCarAccetd = $typeCarAccetd;
        $this ->seatMaterial = $seatMaterial;
    }


}
?>
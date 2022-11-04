<?php
require_once('Account.php');
class Car
{
    public $id;
    public $lisence;
    public $driver;
    public $passengenger;

    public function __construct($lisence, $driver)
    {
        $this->lisence = $lisence;
        $this->driver = $driver;
    }

    public function __printDataCar()
    {
        echo 'Licencia: ' + $this->lisence + '<br/>';
        echo 'Conductor: ' + $this->driver->name + '<br/>';
    }
}
?>
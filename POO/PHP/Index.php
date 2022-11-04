<?php
require_once("Account.php");
require_once("Car.php");
require_once("uberX.php");

$uberX = new uberX( "AMD159", new Account("Dasket Rapley", "DNS321"), "Chevrolet", "Spark");
$uberX->printDataCar();
?>
var jf = require("johnny-five");
var circuito = new jf.Board();
circuito.on("ready", prender);

function prender()
 {
   var ledA = new jf.Led(13);
   var ledR = new jf.Led(9);
   ledA.blink(200);
   ledR.blink(700);
 }

var d = document.getElementById("dibujito");
var lienzo = d.getContext("2d");
var linea = 50;
var conteo = 0;
var yi;
var xf;
while(conteo < linea)
 {
   yi = 10 * (50 - conteo);
   xf = 10 * (49 - conteo);
   dibujarLinea("black",500,yi,xf,0);
   console.log ("linea" + 1);
   conteo = conteo + 1;
 }

 function dibujarLinea(color,x_inicial,y_inicial,x_final,y_final)
  {
    lienzo.beginPath();
    lienzo.strokeStyle = color;
    lienzo.moveTo(x_inicial,y_inicial);
    lienzo.lineTo(x_final,y_final);
    lienzo.stroke();
    lienzo.closePath();
  }
dibujarLinea("grey",1,1,1,500);
dibujarLinea("grey",1,500,500,500);
dibujarLinea("grey",1,1,500,1);
dibujarLinea("grey",500,1,500,500);

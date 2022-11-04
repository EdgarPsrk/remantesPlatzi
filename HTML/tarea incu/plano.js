var d = document.getElementById("dibujo");
var lienzo = d.getContext("2d");
var linea = 30;
var conteo = 0;
var conteo1 = 60;
var linea1 = 90;
var yi1;
var xf1;
var yi2;
var xf2;
var yi3;
var xf3;
var colorido;

function dibujarLinea(color,x_inicial,y_inicial,x_final,y_final)
  {
    lienzo.beginPath();
    lienzo.strokeStyle = color;
    lienzo.moveTo(x_inicial,y_inicial);
    lienzo.lineTo(x_final,y_final);
    lienzo.stroke();
    lienzo.closePath();
  }
dibujarLinea("grey",1,1,1,600);
dibujarLinea("grey",1,600,600,600);
dibujarLinea("grey",1,1,600,1);
dibujarLinea("grey",600,1,600,600);
dibujarLinea("grey",300,0,300,600);
dibujarLinea("grey",0,300,600,300);

for (conteo = 0; conteo < linea ; conteo++)
 {
  yi1 = 10 * conteo;
  xf1 = 10 * (conteo + 31);
  dibujarLinea("black",300,yi1,xf1,300);
  conteo = conteo++;
 }

for (conteo = 0; conteo < linea ; conteo++)
  {
   yi2 = 10 * conteo;
   xf2 = 10 * (29 - conteo);
   dibujarLinea("black",300,yi2,xf2,300);
   conteo = conteo++;
  }

for (conteo = 0; conteo < linea ; conteo++)
   {
    yi3 = 10 * (conteo1 - conteo);
    xf3 = 10 * (conteo + 31);
    dibujarLinea("black",300,yi3,xf3,300);
    conteo = conteo++;
   }

  for (conteo = 0; conteo < linea ; conteo++)
    {
     yi1 = 10 * (conteo1 - conteo);
     xf1 = 10 * (29 - conteo);
     dibujarLinea("black",300,yi1,xf1,300);
     conteo = conteo++;
    }

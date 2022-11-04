var texto = document.getElementById("texto_lineas");
var boton= document.getElementById("botoncito");
boton.addEventListener("click", dibujoporclick);

var d = document.getElementById("dibujito");
var ancho = d.width;
var lienzo = d.getContext("2d");

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

function dibujoporclick()
 {
   var linea = parseInt(texto.value);
   var conteo = 0;
   var yi;
   var xf;
   var espacio = ancho / linea;
   while(conteo < linea)
    {
      yi = espacio * conteo;
      xf = espacio * (conteo + 1);
      dibujarLinea("black",0,yi,xf,500);
      conteo = conteo + 1;
    }
 }

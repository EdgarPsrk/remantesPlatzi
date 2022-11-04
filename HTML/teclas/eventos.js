var teclas =
 {
   UP: 38,
   DOWN: 40,
   LEFT: 37,
   RIGHT: 39
 };
 console.log(teclas);
 document.addEventListener("keydown",dibujarTeclado);
 var cuadrito = document.getElementById("flechas");
 var papel = cuadrito.getContext("2d");
 var x = 100;
 var y= 100;
 dibujarLinea("red",x - 1,y - 1,x + 1,y + 1,papel);

 function dibujarLinea(color,x_inicial,y_inicial,x_final,y_final,lienzo)
  {
    lienzo.beginPath();
    lienzo.strokeStyle = color;
    lienzo.lineWidth = 4;
    lienzo.moveTo(x_inicial,y_inicial);
    lienzo.lineTo(x_final,y_final);
    lienzo.stroke();
    lienzo.closePath();
  }

function dibujarTeclado(evento)
 {
   var col = "black" ;
   var movimiento = 2;
   switch (evento.keyCode)
    {
     case teclas.UP:
     dibujarLinea(col, x, y, x, y - movimiento, papel);
     y = y - movimiento;
     console.log("arriba");
       break;
       case teclas.DOWN:
       dibujarLinea(col, x, y, x, y + movimiento, papel);
       y = y + movimiento;
       console.log("abajo");
       break;
       case teclas.LEFT:
       dibujarLinea(col, x, y, x - movimiento, y, papel);
       x = x - movimiento;
       console.log("izquierda");
       break;
       case teclas.RIGHT:
       dibujarLinea(col, x, y, x + movimiento, y, papel);
       x = x + movimiento;
       console.log("derecha");
       break;
       default:
       console.log("otra tecla");
       break;

   }

 }

var vp = document.getElementById("villaPlatziV2");
var papel = vp.getContext("2d");

var x = 0;
var y = aleatorio(0,420);
var x1;
var y1;
var cantidadV = aleatorio(10,30);
//var cantidadP = aleatorio(0,15);
//var cantidadC = aleatorio(0,15);


var fondo = {
  url: "tile.png",
  cargado: false
};

var vaca = {
   url : "vaca.png",
   cargado: false
 };

 var cerdo = {
   url: "cerdo.png",
   cargado: false
 };



fondo.imagen = new Image();
fondo.imagen.src = fondo.url;
fondo.imagen.addEventListener("load", cargarFondo);

vaca.imagen = new Image();
vaca.imagen.src = vaca.url;
vaca.imagen.addEventListener("load", cargarVaca);

cerdo.imagen = new Image();
cerdo.imagen.src = cerdo.url;
cerdo.imagen.addEventListener("load", cargarCerdo);


function cargarFondo()
 {
   fondo.cargado = true;
   //dibujar();
 }
function cargarVaca()
 {
    vaca.cargado = true;
    //dibujar();
 }
function cargarCerdo()
 {
     cerdo.cargado = true;
     dibujar();
     //moverCerdo();
 }


function dibujar(x,y)
 {
  if (fondo.cargado)
   {
    papel.drawImage(fondo.imagen,0,0);
   }
  if (vaca.cargado)
    {

      console.log("v" + cantidadV);
      for(var i = 0; i < cantidadV; i++)
       {
         var x1 = aleatorio(0, 420);
         var y1 = aleatorio(0, 420);
         //var x1 = x1 * 60
         //var y1 = y1 * 60
         papel.drawImage(vaca.imagen, x1, y1);
       }
    }

    if (cerdo.cargado)
       {
        papel.drawImage(cerdo.imagen, x, y);
       }
 }

 //comienza el codigo para mover
 var teclas =
  {
    UP: 38,
    DOWN: 40,
    LEFT: 37,
    RIGHT: 39
  };
  console.log(teclas);
  document.addEventListener("keydown",dibujarTeclado);

  //dibujarLinea("red",x - 1,y - 1,x + 1,y + 1,papel);

 function dibujarTeclado(evento)
  {
    //if (cerdo.cargado)
       //{
        //papel.drawImage(cerdo.imagen, x, y);
        //console.log(papel.drawImage);
    //var col = "black" ;
    var movimiento = 10;
    switch (evento.keyCode)
     {
      case teclas.UP:
      //dibujarLinea(x, y, x, y - movimiento, papel);
      //y = y - movimiento;
      y = y - movimiento;
      dibujar(x,y);
      console.log("arriba");
        break;
        case teclas.DOWN:
        //dibujarLinea(x, y, x, y + movimiento, papel);
        //y = y + movimiento;
        y = y + movimiento;
        dibujar(x,y);
        console.log("abajo");
        break;
        case teclas.LEFT:
        //dibujarLinea(x, y, x - movimiento, y, papel);
        x = x - movimiento;
        dibujar(x,y);
        console.log("izquierda");
        break;
        case teclas.RIGHT:
        //dibujarLinea(x, y, x + movimiento, y, papel);
        x = x + movimiento;
        dibujar(x,y);
        console.log("derecha");
        break;
        default:
        console.log("otra tecla");
       }
    //}
  }
    //if (cerdo.cargado)
       //{
        //papel.drawImage(cerdo.imagen, x, y);
       //}



function aleatorio(maxi, mini)
 {
   var resultado;
   resultado = Math.floor(Math.random() * (maxi - mini + 1)) + mini;
   return resultado;
 }

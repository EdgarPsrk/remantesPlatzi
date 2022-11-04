var vp = document.getElementById("villaPlatzi");
var papel = vp.getContext("2d");

var x1;
var y1;
var cantidadV = aleatorio(0,15);
var cantidadP = aleatorio(0,15);
var cantidadC = aleatorio(0,15);


 function dibujarLinea(color,x_inicial,y_inicial,x_final,y_final)
  {
    papel.beginPath();
    papel.strokeStyle = color;
    papel.lineWidth = 4;
    papel.moveTo(x_inicial,y_inicial);
    papel.lineTo(x_final,y_final);
    papel.stroke();
    papel.closePath();
  }
  dibujarLinea("grey",1,1,1,700);
  dibujarLinea("grey",1,700,1200,700);
  dibujarLinea("grey",1,1,1200,1);
  dibujarLinea("grey",1200,1,1200,700);

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

 var pollo = {
   url: "pollo.png",
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

pollo.imagen = new Image();
pollo.imagen.src = pollo.url;
pollo.imagen.addEventListener("load", cargarPollo);

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
     //dibujar();
 }
function cargarPollo()
 {
   pollo.cargado = true;
   dibujar();
 }

function dibujar()
 {
  if (fondo.cargado)
   {
    papel.drawImage(fondo.imagen,350,100);
   }
  if (vaca.cargado)
    {

      console.log("v" + cantidadV);
      for(var i = 0; i < cantidadV; i++)
       {
         var x1 = aleatorio(43, 96);
         var y1 = aleatorio(12, 65);
         var x1 = x1 * 8
         var y1 = y1 * 8
         papel.drawImage(vaca.imagen, x1, y1);
       }
    }
  if (cerdo.cargado)
     {

       console.log("c" + cantidadC);
       for(var i = 0; i < cantidadC; i++)
        {
          var x1 = aleatorio(21, 48);
          var y1 = aleatorio(6, 32);
          var x1 = x1 * 16
          var y1 = y1 * 16
          papel.drawImage(cerdo.imagen, x1, y1);
        }
     }
  if (pollo.cargado)
      {

        console.log("p" + cantidadP);
        for(var i = 0; i < cantidadP; i++)
         {
           var x1 = aleatorio(14, 32);
           var y1 = aleatorio(4, 21);
           var x1 = x1 * 24
           var y1 = y1 * 24
           papel.drawImage(pollo.imagen, x1, y1);
         }
      }
 }

function aleatorio(maxi, mini)
 {
   var resultado;
   resultado = Math.floor(Math.random() * (maxi - mini + 1)) + mini;
   return resultado;
 }

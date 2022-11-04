class Billete
 {
  constructor(value, much)
   {
    this.valor = value;
    this.cantidad = much;
   }
 }
 //var p = document.getElementById("dinero");
 //var pedido = parseInt(p.value);
//var pedido;
var diferencia = 0;
var resultado = document.getElementById("rest");
 var entregado = [];


 var cajita = [];
 cajita.push( new Billete(50, 3) );
 cajita.push( new Billete(20, 2) );
 cajita.push( new Billete(10, 2) );

var b = document.getElementById("Extraer");
b.addEventListener("click", entregarDinero);

function entregarDinero()
 {
   var p = document.getElementById("dinero");
   var pedido = parseInt(p.value);

   for (var recorre of cajita)
    {

     if(pedido > 0)
      {
       diferencia = Math.floor(pedido / recorre.valor);

       if(diferencia < recorre.cantidad)
        {
         pedido = pedido - (diferencia * recorre.valor);
        }
       else
        {
         diferencia = recorre.cantidad;
         pedido = pedido - (diferencia * recorre.valor);
        }
         entregado.push( new Billete(recorre.valor, diferencia) );
      }

   }
  if(pedido > 0)
   {
    resultado.innerHTML = "Lo lamento no puedo darte ese dinero";
     //console.log("soy un cajero con saldo insuficinete.");
   }
  else
   {
    for(iterador of entregado)
     {
      if(iterador.cantidad > 0)
       {
         resultado.innerHTML =
         resultado.innerHTML+ iterador.cantidad + " Billetes de $" + iterador.valor + "<br/>";
       }
     }
   }
 }

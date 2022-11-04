
var express = require("express");
var apli = express();
apli.get("/", inicio);
apli.get("/curso", inicia);

function inicio(pedido,respuesta)
 {
   respuesta.send("Este es el <strong> home </strong>");
 }

 function inicia(pedido,respuesta)
  {
    respuesta.send("Estos son los <strong> cursos </strong>");
  }

  apli.listen(8989);

 var imagen = [];
 imagen ["beffom"] = "vaca.png";
 imagen ["pokacho"] = "pollo.png";
 imagen ["porkymon"] = "cerdo.png";
 //console.log(imagen);

 var coleccion = [];
coleccion.push( new pakiman("beffom", 150, 50)   );
coleccion.push( new pakiman("pokacho", 80, 40)   );
coleccion.push( new pakiman("porkymon", 120, 45) );

for ( var pakimen of coleccion)
 {
   pakimen.mostrar();
 }

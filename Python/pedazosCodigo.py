def suma(a, b):
    print("Se suman 2 numeros")
    c = a + b
    return c

resultado = suma(3, 4)
print(resultado) 




def saludo(numero):
    print("Hola")
    print("¿Como estas?")
    print("Elegistes la opcion " + numero)
    print("adios")

mensaje = """Bienvenido!
Escoge una opcion por favor.
pudes pulsar 1
tal vez 2
¿Quieres? 3\n"""
a = input(mensaje)
if a == "1":
    saludo(a)
elif a == "2":
    saludo(a)
elif a == "3":
    saludo(a)
else:
    print("Escoge una opcion valida por favor!\n")



def contador():
    a = 0
    n = 0
    while a < 1000:
        a = 2**n
        n = n+1
        print(a)
        return n

if __name__ == "__main__":
    contador()


# def run():
#     contador = 0
#     while contador < 100:
#         contador += 1
#         print(contador)


if __name__ == "__main__":
    run()


def run():
    frase = input("Escribe una frase: \n")
    for letra in frase:
        print(letra.upper())



if __name__ == "__main__":
    run()

    #ciclo for
# def run():
#     for contador in range(100):
#         contador +=1
#         print


# if __name__ == "__main__":
#     run()


# def run():
#     for contador in range(1, 101):
#         if contador % 2 == 0:
#             print(contador, "Es par")

#         elif contador == 51:
#             break


# import random

# def run():
#     numeroRandom = random.randint(1, 100)
#     numeroElegido = int(input("Elige un numero del 1 al 100\n"))
#     while numeroElegido != numeroRandom:
#         if numeroElegido < numeroRandom:
#             print("Busca un numero mas grande")
#         else:
#             print("Busca un numero mas pequeño")
#         numeroElegido = int(input("Elige otro numero\n"))
#     print("!Ganaste¡")        


# if __name__ == "__main__":
#     run()

# numero.append("parameto") agrega datos
# numero.pop("parametro") elimina datos

# def run():
#     diccionario = {
#         "llave" : 1,
#         "llave1" : 2,
#         "llave3" : 3
#     }
#     print(diccionario["llave"])
#     for numero in diccionario.keys():
#         print(numero)

#     for valor in diccionario.values():
#         print(valor)

#     for i, valor in diccionario.items():
#         print(i + ": " + str(valor))        

# if __name__ == "__main__":
#     run()


from random import randint
a = randint(1,10)
print(a)
# def funcion(x,y):
#   return (x-8)*(y**2)



# if __name__ == "__main__":

#   rest = funcion(16,1)
#   print(rest)

    
# class Lavadora:
#     def __init__(self):
#         pass

#     def lavar(self, temperatura="caliente"):
#         self._llenar_tanque_agua(temperatura)
#         self._jabon()
#         self._lavar()
#         self._centrifugar()


#     def _llenar_tanque_agua(self, temperatura):
#         print(f"Llenado el tanque con agua{temperatura}")


#     def _jabon(self):
#         print("añadiendo jabon")


#     def _lavar(self):
#         print("Lavando la ropa")


#     def _centrifugar(self):
#         print("centrifugando la ropa")  

        
        

# if __name__ == "__main__":
#     robotina = Lavadora()
#     robotina.lavar()



# continuar = True
# while continuar:
#   #Solicitamos opción al usuario
#   escribir = str(input("¿Deseas escribir un mensaje? (S/N) "))
#   if escribir=="S" or escribir=="s" or escribir=="":
#     mensaje = input("¿Qué piensas hoy? ")
#     #print(nombre, "dice:", mensaje)
#   if escribir=="N" or escribir=="n" or escribir=="":
#     continuar = False


def division (n):
    contador = 1
    while contador != 0:
        iterador = 2
        if n % iterador == 0:
            contador = 0
            return iterador
        else:
            iterador += 1  


def mcd(n1, n2):
    contador = 2
    comparador = 0
    comparador1 = 0
    while contador == 0:
        iterador = 2
        if n1 % iterador == 0:
            comparador = n1 // iterador
            
        elif n2 % iterador:
            comparador1 = n2 // iterador   

        else: 
            iterador += 1

    print()        

    while contador == 0:
        iterador = 2
        if n2 % iterador == 0:
            comparador1 = n1 // iterador
            contador = 0
            
        else:
            iterador += 1  

    if comparador == comparador1:
        return comparador
    else:
        print("no hay divisor comun")   


if __name__ == "__main__":
    a = input("ingresa un numero:\n")
    b = input("ingresa otro numero:\n")
    c = mcd(a, b)
    print (c)


    #def velocidad(distancia, tiempo):
#     resultado = ""
#   # desde aquí hacia abajo debes modificar el programa
# #   c = float(distancia)
# #   d = float(tiempo)
#     kmh = (3600 * tiempo) * distancia
#     print (kmh)
#     ms = (distancia * 1000) * tiempo
#     print(ms)
#     a = str(kmh)
#     b = str(ms)
#   # modifica la variable resultado
#     resultado = "La velocidada es " + a + "kmh o " + b + "m/s"
#   # recuerda que los datos están en las variables distancia y tiempo
#     return resultado



# if __name__ == "__main__":
#     rest = velocidad(1, 0.01)
#     print(rest)
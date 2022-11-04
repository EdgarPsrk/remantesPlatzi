from car import Car
from account import Account

if __name__ == "__main__":
   print("Hola Mundo")    
   carro = Car("AMS234", Account("Andres Herrera", "ANDA678"))
   print(vars(carro))
   print(vars(carro.driver))

   carrito = Car("QWE567", Account("Martha", "MITH159"))
   print(vars(carrito))
   print(vars(carrito.driver))
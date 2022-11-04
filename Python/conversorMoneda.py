def convertir(dolar, valorDolar):
    dolar = float(dolar)
    pesos = dolar/valorDolar
    pesos = round(pesos, 2)
    pesos = str(pesos)
    return pesos

def reconvertir(peso, valorDolar):
    peso = float(peso)
    dolar = peso*valorDolar
    dolar = round(dolar, 2)
    dolar = str(dolar)
    return dolar

mensaje = """Bienvenido
1-Convertir de pesos mexicanos a dolar
2-Convertir de pesos argentinos a dolar
3-Convertir de pesos colombianos a dolar
4-Convertir de dolar a peso mexicano 
5-Convertir de dolar a peso argentino 
6-Convertir de dolar a peso colombiano 
"""

enter = input(mensaje)
if enter == "1":
    moneda = input("¿Cuantos pesos Mexicanos tienes?\n") 
    resultado = convertir(moneda, 20.83)
    print("Tienes $" + resultado + " dolares\n")
elif enter == "2":
    moneda = input("¿Cuantos pesos argentinos tienes?\n") 
    resultado = convertir(moneda, 91.70)
    print("Tienes $" + resultado + " dolares\n")
elif enter == "3":
    moneda = input("¿Cuantos pesos colombianos tienes?\n") 
    resultado = convertir(moneda, 3655.89)
    print("Tienes $" + resultado + " dolares\n")
elif enter =="4":
    moneda = input("¿Cuantos dolares tienes?\n") 
    resultado = reconvertir(moneda, 20.83)
    print("Tienes $" + resultado + "pesos Mexicanos\n")
elif enter ==5:
    moneda = input("¿Cuantos dolares tienes?\n") 
    resultado = reconvertir(moneda, 91.70)
    print("Tienes $" + resultado + "pesos Argentinos\n")
elif enter == "6":
    moneda = input("¿Cuantos dolares tienes?\n") 
    resultado = reconvertir(moneda, 3655.89)
    print("Tienes $" + resultado + "pesos colombianos\n")  
else:
    print("Elegi una opcion correcta por favor!! ")


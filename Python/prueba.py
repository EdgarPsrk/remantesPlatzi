
#usando lambda 
def modulo(x, y, f):
    dato1 = x**2
    dato2 = y**2
    return f(dato1, dato2)



if __name__ == "__main__":
    entrada = int(input("Ingresa un numero: \n"))
    entrada1 = int(input("Ingresa otro numero: \n"))
    resultado = modulo(entrada, entrada1, lambda x, y: x + y)
    print(resultado)
    # print("esta es la funcion lambda")
    # print(lambda resultado: resultado *2)
    



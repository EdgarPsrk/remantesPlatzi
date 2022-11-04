def potencia(n):
    i = 0
    contador = 0
    while i < n:
        i = 2 ** contador
        if i < n:
            contador += 1
        else:
            return contador - 1

if __name__ == "__main__":
    a = int(input("Ingresa un numero: \n"))
    res = potencia(a)       
    print("hoola")
    print(res)
    
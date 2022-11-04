def division (n):
    contador = 1
    iterador = 2
    while contador != 0:
        if n % iterador == 0:
            contador = 0
            return iterador
        else:
            iterador += 1  
          

def mcd (n1, n2, d1, d2):
    comparador = n1 // d1
    comparador1 = n2 //d2
    comparador2 = n1 % d1
    comparador3 = n2 % d2

    if comparador1 == comparador:
        return comparador1

    elif comparador2 == comparador3:
        return d1   

    else:
        print("no hay minimo comun multiplo")    


if __name__ == "__main__":
    a = int(input("Ingresa un numero:\n"))
    b = int(input("Ingresa otro numero:\n"))
    c = division(a)
    #print(c)
    d = division(b)
    #print(d)
    resultado = mcd(a,b,c,d) 
    print(resultado) 
def palindromo(palabra):
    palabra = palabra.replace(" ", "")
    palabra = palabra.lower()
    palabraIvertida = palabra[ : : -1]
    if palabra == palabraIvertida:
        return True
    else:
        return False


def run():
    palabra = input("Escribe una palabra: ")
    esPalindromo = palindromo(palabra)
    if esPalindromo == True:
        print("Es palindromo")
    else:
        print("No es palindromo")


if __name__ == "__main__":
    run()

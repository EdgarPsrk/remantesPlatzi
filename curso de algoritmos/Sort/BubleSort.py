def bubleSort(array):
    n = len(array)

    for i in range(n):

    
        for j in range(0, n - i - 1):
            print(array)
               if array[j] > array[j + 1]:
                  array[j], array[j + 1] = array[ j + 1], array[j]



array = [190, 1200, 1, 2, 4, 55, 1000, 6, 800]
bubleSort(array)

print("El arreglo ordenado de forma ascendente es: ")
for i in range(len(array)):
    print(array[i]),

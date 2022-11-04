import sys
array = [20, 5, 21, 6, 23, 7, 34, 999, 68]

def selectionSort(array):
    for i in range(len(array)):
        idxDes = i
        for j in range(i + 1, len(array)):
            if array[idxDes] > array[j]:
                idxDes = j
                print(array)

        array[i], array[idxDes] = array[idxDes], array[i]

selectionSort(array)
print("Array ordenado: ")
for i in range(len(array)):
    print(array[i]),

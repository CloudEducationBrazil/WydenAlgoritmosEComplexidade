def mergeSort(lista, inicio=0, fim=None):
    
    if fim is None:
        fim = len(lista)
        
    if (fim - inicio > 1):
        meio = (fim + inicio)//2
        mergeSort(lista, inicio, meio)
        mergeSort(lista, meio, fim)
        merge(lista, inicio, meio, fim)

def merge(lista, inicio, meio, fim):
    
    left = lista[inicio:meio]
    right = lista[meio:fim]
    top_left, top_right = 0, 0
    
    for k in range(inicio, fim):
        if top_left >= len(left):
            lista[k] = right[top_right]
            top_right += 1
            
        elif top_right >= len(right):
            lista[k] = left[top_left]
            top_left += 1
            
        elif left[top_left] < right[top_right]:
            lista[k] = left[top_left]
            top_left += 1 
              
        else:
            lista[k] = right[top_right]
            top_right += 1

Invertida = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0]

repetida = [7, 7, 7, 7, 7, 7, 0, 1, 1, 1, 3, 3, 3]

random = [7, 3, 2, 16, 24, 4, 11, 9]

ordenada = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

if __name__ == "__main__":
    lista = random
    print(lista)
    mergeSort(lista)
    print(lista)
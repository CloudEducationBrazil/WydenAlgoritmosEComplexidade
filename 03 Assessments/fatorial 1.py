def fatorial(x):
    if x == 1 or x == 0:
        return 1
    elif x<0:
        print("Invalido")
    else:  
        return x * fatorial(x-1)

n = int(input("Digite um numero: "))
print("O fatorial de", n, "é", fatorial(n))
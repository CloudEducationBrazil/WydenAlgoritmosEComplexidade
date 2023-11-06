def fibonacci(x):
    if x==0 or x==1:
        return x
    elif x<0:
        print("Invalido")
    else:
        return fibonacci(x-1) + fibonacci(x-2)

n = int(input("Escolha uma casa da série Fibonacci: "))
print("Fibonacci: ", fibonacci(n))

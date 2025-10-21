# Ordenação: O(n log n) (n = número de atividades).
# Varredura/gulosa: O(n).
# Complexidade total: O(n log n).

def activity_selection(activities):
    # activities: lista de tuplas (id, inicio, fim)
    # ordenar por fim
    activities_sorted = sorted(activities, key=lambda x: x[2])
    selected = []
    current_end = -float('inf')
    for aid, s, f in activities_sorted:
        if s >= current_end:
            selected.append((aid, s, f))
            current_end = f
    return selected

# Exemplo:
activities = [
    ("A1",1,4),("A2",3,5),("A3",0,6),("A4",5,7),
    ("A5",8,9),("A6",5,9),("A7",2,3),("A8",6,10)
]
print(activity_selection(activities))
# saída esperada: [('A7',2,3),('A2',3,5),('A4',5,7),('A5',8,9)]
import random
import time

def print_action_time(action_name, start_time):
    elapsed_time = time.time() - start_time
    print(f"Tiempo de {action_name}: {elapsed_time:.6f} segundos")

elementos = []

# Crear arreglo
start_time = time.time()
for i in range(1000):
    elementos.append(random.randint(1, 1000))
print_action_time("creación del arreglo", start_time)

# Imprimir elementos
for i in range(1000):
    print(elementos[i])

# Función de búsqueda
busqueda = input("Ingresa un número a buscar: ")
start_time = time.time()
for numero in elementos:
    if numero == int(busqueda):
        print("¡Sí está!")
        break
print_action_time("búsqueda", start_time)

# Ordenar arreglo
elementos.sort()
start_time = time.time()
for i in range(1000):
    print(elementos[i])
print_action_time("ordenamiento", start_time)

# Función de búsqueda después de ordenar
busqueda = input("Ingresa un número a buscar: ")
start_time = time.time()
for numero in elementos:
    if numero == int(busqueda):
        print("¡Sí está!")
        break
print_action_time("búsqueda después de ordenamiento", start_time)

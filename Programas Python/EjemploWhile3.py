
while True:
    linea = input(">>")
    if linea == "fin":
        break     #rompe ciclo While
    if linea[0] == "#":
        continue #Salta a la siguiente iteracion
    print(linea)
print("Terminado")
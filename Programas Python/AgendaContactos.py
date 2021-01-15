"""
Ejercicio
Hacer un programa que simule una agenda de contactos. Crear un 
diccionario donde la clave sea el nombre del usuario y el valor sea 
el teléfono, el programa tendrá el siguiente menú de opciones:
1. Nuevo contacto
2. Borrar contacto
3. Ver contactos existentes
4. Salir
"""
agenda={}
while True:
    print("\t.:MENU:.\n")
    print("1. Nuevo contacto\n")
    print("2. Borrar contacto\n")
    print("3. Ver contactos existentes\n")
    print("4. Salir\n")
    opcion=int(input("Digite una opcion: "))
    
    if opcion==1:
        nombre=input("Nombre del contacto: ")
        telefono=input("Numero del contacto: ")
        if nombre not in agenda: 
            agenda[nombre]=telefono
            print("Contacto añadido!")
        else:
            print("Ese nombre de contacto ya existe")
    elif opcion==2:
        nombre=input("Nombre del contacto: ")
        if nombre in agenda:
            del(agenda[nombre])
            print("Contacto eliminado!")
        else:
            print("Ese contacto no existe")
    elif opcion==3:
        print("Agenda de contactos: \n")
        for clave,valor in agenda.items():
            print(f"Nombre: {clave}, Telefono: {valor}")
    elif opcion==4:
        print("Gracias por utilizar mi codigo")
        break
    else: 
        print("Se equivoco de opcion de menu")
    print()
"""LENGUAHE PYTHON
CAJERO ATM
"""
saldoInicial=1000
nombre=input("Digite su nombre: ")
print(f"\tBienvenido a tu cajero ATM {nombre}\n")
print("1.- Ingresar\n")
print("2.- Retirar\n")
print("3.- Consultar Saldo\n")
print("4.- Salir\n")
opcion=int(input("Digite una opcion: "))
if(opcion==1):
    ingresar=float(input("Digite la cantidad a ingresar: "))
    saldoFinal=saldoInicial+ingresar
    print(f"Su saldo final es: {saldoFinal}")
elif(opcion==2):
    retirar=float(input("Digite la cantidad a retirar: "))
    if(retirar>saldoInicial):
        print("No cuenta con los fondos suficientes")
    else:
        saldoFinal=saldoInicial-retirar
        print(f"Su saldo final es: {saldoFinal}")
elif(opcion==3):
    saldoFinal=saldoInicial
    print(f"Su saldo final es: {saldoFinal}")
elif(opcion==4):
    print("Vuelva pronto")
else:
    print("Opcion no valida")
    
# -*- coding: utf-8 -*-
"""
Lenguaje Python
"""

genero=input("Digite su genero: ")
edad=int(input("Digite su edad: "))
estatura=float(input("Digite su estatura: "))

print("\tMostrando datos del usuario:\n")
print(f"Edad: {edad}\n")
print(f"Genero: {genero}\n")
print(f"Estatura: {estatura}\n")

imc=estatura/3.2
print(imc)

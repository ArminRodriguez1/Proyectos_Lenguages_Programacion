cont=int(0)
while cont==0:
    print ("Seleccione una opcion")
    print ("[1] Sumar ")
    print ("[2] Restar ")
    print ("[3] Multiplicar ")
    print ("[4] Dividir ")
    print ("[5] Salir")
    x = input("La opcion es: ")
    print("*************************")
    y=float(x)
    if(y==1):
        a=input("ingrese el primer numero ")
        b=input("ingrese el segundo numero ")
        aA=float(a)
        bB=float(b)
        resultado = aA+bB
        print("El resultado es: ", resultado)
        print("*************************")
        pass
    if (y==2):
        a=input("ingrese el primer numero ")
        b=input("ingrese el segundo numero ")
        aA=float(a)
        bB=float(b)
        resultado = aA-bB
        print("El resultado es: ", resultado)
        print("*************************")
    if (y==3):
                a=input("ingrese el primer numero ")
                b=input("ingrese el segundo numero ")
                aA=float(a)
                bB=float(b)
                resultado = aA*bB
                print("El resultado es: ", resultado)
                print("*************************")
    if (y==4):
                a=input("ingrese el primer numero ")
                b=input("ingrese el segundo numero ")
                aA=float(a)
                bB=float(b)
                resultado = aA/bB
                print("El resultado es: ", resultado)
                print("*************************")
               
    if(y==5):
                print("Salio")
                cont=1
    if(y>5):
            print("numero invalido")
            print("======== Reinicio =========")

        
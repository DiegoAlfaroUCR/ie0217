def greet():
    # Variable local
    message = 'Hello'

    print('Local', message)

greet()

# Si se intenta acceder a message fuera de la función se genera un error
# print(message)

# Se declara como variable global
message = 'Hello'

def greet():
    print('Local', message)

greet()
print('Global', message)


### Función externa y función interna
def outer():
    message = 'Local'

    # Función anidada.
    def inner():
        # Se declara variable no local esto indica que no es local a inner y
        # termina sobreescribiendo el de outer.
        nonlocal message

        message = 'nonlocal'
        print("inner:", message)

    inner()
    print("outer:", message)

outer()
# Se crea funcion externa.
def outer_function():
    # Este num es local
    num = 20

    def inner_function():
        # Este num es global, pero no apunta al num local, sino que crea un num global nuevo.
        global num
        num = 25
    
    print("Before calling inner_function(): ", num)
    inner_function()
    # Este accede al num local, no al global.
    print("After calling inner_function(): ", num)

outer_function()
# Este accede al num global de inner
print("Outside both functions: ", num)
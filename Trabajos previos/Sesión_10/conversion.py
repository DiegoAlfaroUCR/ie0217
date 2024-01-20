### Conversión implicita ###
interger_number = 123
float_number = 1.23

# Al hacer la suma se hace la conversión automáticamente.
# Se convierte a float pues conserva info decimal.
new_number = interger_number + float_number

# Se muestran los resultados.
print("Value:", new_number)
print("Data Type:", type(new_number))


### Conversión explicita ###
num_string = '12'
num_interger = 23

print("Data type of num_string before Type Casting:" , type(num_string))

num_string = int(num_string) # Se hace type casting

print("Data type of num_string after Type Casting:" , type(num_string))

num_sum = num_interger + num_string

print("Sum:", num_sum)
print("Data type of num_sum:",type(num_sum))
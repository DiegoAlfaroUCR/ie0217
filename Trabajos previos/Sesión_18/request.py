import requests

# Metodo get, se le pasa al "método" al servidor.
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')

# Respuesta se recibe en formato .JSON

# Tipo de variable respuesta.
print("Tipo:", type(response))

# Código de salida
print("Respuesta:", response)

# Texto de la respuesta.
print("Respuesta text:", response.text)

# Se accede al diccionario con toda la información posible dada.
print("Respuesta:", response.__dict__, "\n\n")


# Otro ejemplo
# Este no responde en formato .JSON
url = "https://www.google.com"

response = requests.get(url)

print(response.text)

import requests

###############
# Ejemplo GET #
###############

# Se usa get con params, params indican parametros a dar a la pagina.
payload = {'clave1': 'valor1', 'clave2': 'valor2'}
response = requests.get('https://ejemplo.com/ruta', params=payload)
print(response.text)

################
# Ejemplo POST #
################

# Se manda el payload con data.
payload = {'usuario': 'juan', 'contrasena': 'secreta'}
response = requests.post('https://ejemplo.com/login', data=payload)
print(response.text)

# En este se indica especificamente en formato JSON.
payload = {'usuario': 'juan', 'contrasena': 'secreta'}
response = requests.post('https://ejemplo.com/login', json=payload)
print(response.text)

#######################
# Manejo de Respuesta #
#######################

response = requests.get('https://jsonplaceholder.typicode.com/todos/1')

# El código de estatus de la respuesta de la página.
print(response.status_code)
print(response.headers)

# Se revisa si es en formato JSON
print(response.json())


#####################
# Manejo de Errores #
#####################

try:
    response = requests.get('https://ejemplo.com/pagina-inexistente')

    # Se levanta el código de estatus de la página, si es un código
    # de error como 404 se toma como exception.
    response.raise_for_status()
    print(response.text)

# Genera una excepcion si hay un error HTTP
# Es una excepción que da la clase
except requests.exceptions.HTTPError as err:
    print(f"Error HTTP: {err}")

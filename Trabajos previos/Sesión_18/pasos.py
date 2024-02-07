import requests

# Paso 1: Realizar una solicitud para obtener datos de usuarios
# Asignar los datos
users_response = requests.get('https://jsonplaceholder.typicode.com/users')
# Se toma en formato JSON
users_data = users_response.json()


# Paso 2: Realizar una solicitud para obtener datos de publicaciones
# Se repiten los métodos pasados.
posts_response = requests.get('https://jsonplaceholder.typicode.com/posts')
posts_data = posts_response.json()


# Paso 3: Procesar los datos para obtener información relevante
# Un diccionario para almacenar las publicaciones de cada usuario
user_posts = {}

# Por cada usuario se asigna un id vacio, con key id.
for user in users_data:
    user_posts[user['id']] = []

# Se recore cada post.
for post in posts_data:
    # El .get permite obtener las id de los posts, en vez de recaer en los
    # que se creen tener en el diccionario. Esto porque puede que el id
    # no exista en los posts.
    user_id = post.get('userId')  # Usar .get() para evitar KeyError

    # El in asegura que si el id no existe en posts no se corra el código
    # y se genere el KeyError
    if user_id in user_posts:
        # Se agrega al valor del key id un diccionario con
        # el titulo y el body.
        user_posts[user_id].append({
            'title': post['title'],
            'body': post['body']
        })

# Paso 4: Mostrar los resultados
# Se recorre cada key/valor de user_posts
for user_id, posts in user_posts.items():
    # Se tiene un iterador en el generador de la lista de users.
    user = next((user for user in users_data if user['id'] == user_id), None)

    # Si existe
    if user:
        # Se imprimen los datos del usuario.
        print(f"\nPublicaciones de {user['name']} ({user['email']}):\n")

        # Se imprimen los posts del usuario.
        for post in posts:
            print(f"Title: {post['title']}\nBody: {post['body']}\n")

    # Si no existe
    else:
        print(f"No se encontraron datos para el usuario con ID {user_id}")

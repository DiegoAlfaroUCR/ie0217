# Este string genera error pues tiene caracteres especiales no escapados.
# example = "He said, "What's there?""

# Se escapan los "" con \
example = "He said, \"What's there?\""

example = 'He said, "What\'s there?"'

print(example)

name = 'Cathy'
country = 'UK'

# Otra forma es imprimir con la siguiente estructura.
# La F indica ASCII Formfeed
print(f'{name} is from {country}')
# Instructions
# Écrire une ligne de commande qui affiche la liste des groupes contenus dans la variable FT_USER. Séparé par des virgules sans espace.

# Résolution
#!/bin/bash

id -nG $FT_USER | tr ' ' ',' | tr -d '\n'
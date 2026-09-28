# Instructions
# Écrire une ligne de commande qui affiche les adresses MAC de la machine. Chaque adresse doit être suivie d'une nouvelle ligne.

# Résolution
#!/bin/bash

ifconfig -a | grep -w "ether" | cut -d ' ' -f 10
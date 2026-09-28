# Instructions
# Écrire une ligne de commande qui affiche le nombre de fichiers et dossiers dans le répertoire actuel.
# Il devrait inclure le fichier ".".

# Résolution
#!/bin/bash

find . | wc -l
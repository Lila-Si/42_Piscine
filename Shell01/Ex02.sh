# Instructions
# Écrire une ligne de commande qui cherche tous les noms de fichiers finissant par ".sh" dans le dossier courant et tous ces sous-dossiers.
# Il devra afficher uniquement les noms de fichiers sans ".sh".

# Résolution
#!/bin/bash

find -name '*.sh' -printf "%f\n" | sed s/[.][s][h]$//
# Instructions
# Écrire une ligne de commande qui affiche une ligne sur deux la sortie de la commande ls -l.

# Résolution
#!/bin/bash

ls -l | sed -n 1~2p
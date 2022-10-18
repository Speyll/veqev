#!/bin/bash 

# Save this script into set_colors.sh, make this file executable and run it: 
# 
# $ chmod +x set_colors.sh 
# $ ./set_colors.sh 
# 
# Alternatively copy lines below directly into your shell. 

gconftool-2 -s -t string /apps/guake/style/background/color '#222225252929'
gconftool-2 -s -t string /apps/guake/style/font/color '#d6d6d6d6d6d6'
gconftool-2 -s -t string /apps/guake/style/font/palette '#222225252929:#cdcd90909b9b:#5656afafa0a0:#e2e2aeaea2a2:#8787c9c9e5e5:#cecea7a7dede:#7878b6b6adad:#cbcbcdcdcdcd:#222225252929:#cdcd90909b9b:#5656afafa0a0:#e2e2aeaea2a2:#8787c9c9e5e5:#cecea7a7dede:#7878b6b6adad:#d6d6d6d6d6d6'

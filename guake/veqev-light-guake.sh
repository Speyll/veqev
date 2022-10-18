#!/bin/bash 

# Save this script into set_colors.sh, make this file executable and run it: 
# 
# $ chmod +x set_colors.sh 
# $ ./set_colors.sh 
# 
# Alternatively copy lines below directly into your shell. 

gconftool-2 -s -t string /apps/guake/style/background/color '#eeeeeeeeeeee'
gconftool-2 -s -t string /apps/guake/style/font/color '#414147474e4e'
gconftool-2 -s -t string /apps/guake/style/font/palette '#414147474e4e:#d2d268687878:#5656afafa0a0:#e0e08f8f6767:#56569090afaf:#92927171d6d6:#5e5e8d8d8787:#cbcbcdcdcdcd:#414147474e4e:#626230303939:#222245453f3f:#929260604848:#222238384444:#474735356c6c:#8a8abebeb7b7:#646468686868'
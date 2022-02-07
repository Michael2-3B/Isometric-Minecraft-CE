# ----------------------------
# Set NAME to the program name
# Set ICON to the png icon file name
# Set DESCRIPTION to display within a compatible shell
# Set COMPRESSED to "YES" to create a compressed program
# ----------------------------

NAME        ?= ISO
COMPRESSED  ?= YES
ARCHIVED    ?= YES
ICON        ?= iconc.png
DESCRIPTION ?= "Isometric Terrain in C"

# ----------------------------

include $(CEDEV)/include/.makefile

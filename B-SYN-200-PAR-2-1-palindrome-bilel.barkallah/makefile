#makefile généré avec makemakefile.sh / script réalisé par Yannick DUPUIS et Rodolphe MOYSE (IMAC 1)


BIN    = a.out
LIB    = 
OBJ    = 
CC     = gcc
CFLAGS = 
RM     = rm -f


all: $(OBJ)
	$(CC) $(CFLAGS) $(LIB) $(OBJ) -o $(BIN)
	chmod 744 ./a.out
	@echo "---- Faites ./a.out pour lancer votre application ----"


clean :
	@echo "---------------------------------------"
	@echo "Supression de tous les fichiers objets"
	@echo "---------------------------------------"
	$(RM) *~ $(OBJ)


bigclean :
	@echo "--------------------------------------------------"
	@echo "Supression de l'executable et des fichiers objets"
	@echo "--------------------------------------------------"
	$(RM) *~ $(OBJ) $(BIN)



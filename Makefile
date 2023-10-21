$(CC) = gcc

build: contactBook.o createContact.o getAction.o initializeStruct.o printContactList.o printMenu.o
	$(CC) contactBook.o createContact.o getAction.o initializeStruct.o printContactList.o printMenu.o -o build/build

contactBook.o: src/contactBook.c src/contactStruct.h src/initializeStruct.h src/getAction.h src/printMenu.h
	$(CC) -c src/contactBook.c

createContact.o: src/createContact.c src/contactStruct.h
	$(CC) -c src/createContact.c

getAction.o: src/getAction.c src/contactStruct.h src/printContactList.h src/createContact.h
	$(CC) -c src/getAction.c

initializeStruct.o: src/initializeStruct.c src/contactStruct.h
	$(CC) -c src/initializeStruct.c

printContactList.o: src/printContactList.c src/contactStruct.h
	$(CC) -c src/printContactList.c

printMenu.o: src/printMenu.c
	$(CC) -c src/printMenu.c

clean:
	rm -rf *.o
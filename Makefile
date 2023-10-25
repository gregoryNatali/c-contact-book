$(CC) = gcc

build: contactBook.o createContact.o getAction.o initializeStruct.o printContactList.o printMenu.o deleteContact.o
	$(CC) contactBook.o createContact.o getAction.o initializeStruct.o printContactList.o printMenu.o deleteContact.o -o build

contactBook.o: src/contactBook.c src/include/contactStruct.h src/include/initializeStruct.h src/include/getAction.h src/include/printMenu.h
	$(CC) -c src/contactBook.c

createContact.o: src/createContact.c src/include/contactStruct.h
	$(CC) -c src/createContact.c

deleteContact.o: src/deleteContact.c src/include/contactStruct.h
	$(CC) -c src/deleteContact.c

getAction.o: src/getAction.c src/include/contactStruct.h src/include/printContactList.h src/include/createContact.h src/include/deleteContact.h
	$(CC) -c src/getAction.c

initializeStruct.o: src/initializeStruct.c src/include/contactStruct.h
	$(CC) -c src/initializeStruct.c

printContactList.o: src/printContactList.c src/include/contactStruct.h
	$(CC) -c src/printContactList.c

printMenu.o: src/printMenu.c
	$(CC) -c src/printMenu.c

clean:
	rm -rf *.o
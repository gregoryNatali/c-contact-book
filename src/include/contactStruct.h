#ifndef CONTACT_STRUCT_DEFINITION_HEADER
#define CONTACT_STRUCT_DEFINITION_HEADER

struct Contact {
    int id;
    int contactType;
    char phoneNumber[12];
    char name[100];
  };

#endif

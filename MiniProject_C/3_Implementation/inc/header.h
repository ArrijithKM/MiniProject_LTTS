
#ifndef functions
#define functions
    
    typedef enum {out,in}state;
	extern state status;
	
    
    typedef struct Customer
    {
    char name[100];
    char pwd[100];
    char place[100];
    float price;
    int tick;
    struct Customer *next;
    }Customer;
	char place[100];
	char currentCustomer[100];
    void Brochure();
    Customer* List(Customer*);
    Customer* NewCustomer(Customer*);
    void LoginCustomer(Customer*);
    void bookplace(Customer*);
    void logout();
    void Check(Customer*);
    void writefile(Customer*);
    void exitprog();
    int corona(char *place);
#endif //functions

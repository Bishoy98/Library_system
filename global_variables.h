
typedef struct{  //date
    int day;
    int month;
    int year;
    }date;
typedef struct{  //address
    char build[60];
    char street[60];
    char city[60];
    }address;
typedef struct{  //book
    char title[60];
    char author[60];
    char publisher[60];
    char isbn[14];
    date dop;
    int noc; //number of copies
    int ca_noc; //currently available number of copies

}book;
typedef struct{  //user
    char first[30];
    char last [30];
    int id;
    address adrs;
    int phone;
    int age;
    char email[60];
    }user;
typedef struct{  //borrow
    book bo_book;
    user bo_user;
    date date_bo;
    date due;
    date date_re;

    } borrow;

book books[100];
user users[100];
borrow borrows[100];

int fb = 1; //flag for books
int fu = 1; //flag for users
int fbo = 1; //flag for borrows

char singleline[2048]; //string for fgets
int sls = 2048; //size of single line

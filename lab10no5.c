#include <stdio.h>
#include <string.h>
typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

int checkLogin(char *inputL, char *inputP, account db) {
    if (strcmp(inputL, db.loginname) == 0 && strcmp(inputP, db.password) == 0)
        return 1;
    else
        return 0;
}

int main() {

    hoststd cs[5] = {
        {"66-040626-2686-9", "MR.A", {"user1", "pass1"}},
        {"66-040626-2686-1", "MR.B", {"user2", "pass2"}},
        {"66-040626-2686-2", "MR.C", {"user3", "pass3"}},
        {"66-040626-2686-3", "MR.D", {"user4", "pass4"}},
        {"66-040626-2686-4", "MR.E", {"user5", "pass5"}}
    };

    char inputlogin[64];
    char inputpass[64];
    
    printf("Login : ");
    scanf("%s", inputlogin);
    printf("Password : ");
    scanf("%s", inputpass);

    int i;
    int found = 0;

    for (i = 0; i < 5; i++) {
        if (checkLogin(inputlogin, inputpass, cs[i].stdACC)) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");

    return 0;
}

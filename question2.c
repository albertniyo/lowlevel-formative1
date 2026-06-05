#include <stdio.h>

int main(){
    /* Menu driven simple Calculator */

    int nber1, nber2, result;
    int choice;


    while(1){
        puts(" Welcome to Calculator: ");
        puts("1. Add");
        puts("2. Subtract");
        puts("3. Multiply");
        puts("4. Divide");
        puts("5. Exit\n");

        puts("Please enter your choice");
        scanf("%d", &choice);

        // processing the choices
        if (choice == 5){
            puts("Exit...");
            break;

        } else if (choice > 0 && choice < 5){

            // first number
            printf("Enter the first number: ");
            scanf("%d", &nber1);

            // second number
            printf("Enter the second number: ");
            scanf("%d", &nber2);
            
            // check choice and then do operation accordingly
            if (choice == 1){
                printf("%d\n", nber1 + nber2);

            } else if (choice == 2){
                printf("%d\n", nber1 - nber2);

            } else if (choice == 3){
                printf("%d\n", nber1 * nber2);

            } else if (choice == 4){
                printf("%.2f\n", (float)nber1 / nber2);
            }

        } else{
            puts("Please enter valid number\n");
            continue;
        }
    }
    return 0;
}

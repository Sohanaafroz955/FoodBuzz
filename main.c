#include<stdio.h>

#include<string.h>

#include<stdlib.h>



struct log_in

{

    char mail_or_phone[100];

    char password[30];

    struct log_in *next;

};

typedef struct log_in l_in;



struct sign_up

{

    char name[150];

    char mail[50];

    int phone;

    char password1[30];

    char password2[30];

    struct sign_up *next;

};

typedef struct sign_up s_up;



struct Node

{

    char data[25];

    struct Node *next;

};

typedef struct Node node;



struct Node1

{

    char data[40];

    struct Node1 *next;

};

typedef struct Node1 node1;



void text();

void command_page();

void login();

void signup();

void home();

void success();

void catagory();

void main_course();

void fast_food();

void snacks();

void drinks();

void dessert();

void package_item();

void help();

void exit1();

void payment_gate();

void bkash();

void rocket();

void bank_deposite();

void cod();

void bkash_trx();

void bkash_online();

void order_cofirm();



int main()

{

    text();

    command_page();

    return 0;

}



void text()

{

    printf("\t\t\t\t\tWelcome to FoodBuzz\n\t\t\t\t\tHappy Eating\n");

}



void command_page()

{

    int choice;

    node1 *head, *temp0, *temp1, *temp2, *temp3;

    head=(node1*)malloc(sizeof(node1));

    temp0=(node1*)malloc(sizeof(node1));

    temp1=(node1*)malloc(sizeof(node1));

    temp2=(node1*)malloc(sizeof(node1));

    temp3=(node1*)malloc(sizeof(node1));

    temp0=head;

    strcpy(temp0->data,"1. LogIn (Already have an account)");

    temp0->next=temp1;

    strcpy(temp1->data,"2. SignUp (Create an account)");

    temp1->next=temp2;

    strcpy(temp2->data,"3. Continue without an account");

    temp2->next=temp3;

    strcpy(temp3->data,"4. Exit");

    temp3->next='\0';

    while(head!=NULL)

    {

        printf("\t%s\n", head->data);

        head=head->next;

    }

    printf("Your choice: ");

    scanf("%d", &choice);

    switch(choice)

    {

    case 1:

    {

        login();

        break;

    }



    case 2:

    {

        signup();

        break;

    }



case 3:

    {

        home();

        break;

    }



case 4:

    {

        exit1();

        break;

    }



default:

    {

        printf("Not a valid command. Please input an integer value mentioned here.\n");

        command_page();

        break;

    }

}

}



void login()

{

    l_in *head;

    head = (l_in*)malloc(sizeof(l_in));

    printf("\nEnter account Email ID or Phone number: ");

    scanf("%s", &head->mail_or_phone);

    printf("Enter login password: ");

    scanf("%s", &head->password);

    success();

}



void signup()

{

    s_up *head;

    head = (s_up*)malloc(sizeof(s_up));

    printf("Your Full Name (without space): ");

    scanf("%s", &head->name);

    printf("Your Mail ID: ");

    scanf("%s", &head->mail);

    printf("Your Phone Number: +880");

    scanf("%d", &head->phone);

    printf("Create Password: ");

    scanf("%s", &head->password1);

    printf("Confirm Password: ");

    scanf("%s", &head->password2);

    printf("\t\tSignUp Successfull. Please LogIn");

    login();

}



void home()

{

    int choice;

    node *head, *temp0, *temp1;

    head=(node*)malloc(sizeof(node));

    temp0=(node*)malloc(sizeof(node));

    temp1=(node*)malloc(sizeof(node));

    temp0=head;

    strcpy(temp0->data,"1. Catagory");

    temp0->next=temp1;

    strcpy(temp1->data,"2. Log Out/Exit");

    temp1->next='\0';

    while(head!=NULL)

    {

        printf("\t%s\n", head->data);

        head=head->next;

    }

    printf("Your choice: ");

    scanf("%d", &choice);

    switch(choice)

    {

    case 1:

    {

        catagory();

        break;

    }



    case 2:

    {

        exit1();

        break;

    }

    }

}



void success()

{

    printf("\t\t\t\tSuccessfully LoggedIn.\n");

    home();

}



void catagory()

{

    printf("\t\t\tCatagory\n");

    int choice;

    printf("1. Main Course\n");

    printf("2. Fast-Food\n");

    printf("3. Snacks\n");

    printf("4. Drinks\n");

    printf("5. Dessert\n");

    printf("6. Package Item\n");

    printf("7. Help\n");

    printf("8. Exit\n");

    printf("\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    switch(choice)

    {

    case 1:

    {

        main_course();

        break;

    }



    case 2:

    {

        fast_food();

        break;

    }



    case 3:

    {

        snacks();

        break;

    }



    case 4:

    {

        drinks();

        break;

    }



    case 5:

    {

        dessert();

        break;

    }



    case 6:

    {

        package_item();

        break;

    }



    case 7:

    {

        help();

        break;

    }



    case 8:

    {

        exit1();

    }



    default:

    {

        printf("Wrong keyword. Enter valid one.\n");

        catagory();

        break;

    }

    }

}



void main_course()

{

    int choice, quantity;

    printf("\t\t\tAvailableMain Menu Items\n\n");

    printf("Please select your choice from below.\n");

    printf("\t          Items                             Weight     Price (in TK)\n");

    printf("\t 1. Mutton Tehari                           (220g)        115/-\n");

    printf("\t 2. Kachchi Biriani                         (240g)        120/-\n");

    printf("\t 3. Kachchi Biriani (with Egg)              (240g)        125/-\n");

    printf("\t 4. Kachchi Biriani (with Kabab)            (240g)        130/-\n");

    printf("\t 5. Chicken Biriani                         (250g)        115/-\n");

    printf("\t 6. Chicken Biriani (with Egg)              (250g)        125/-\n");

    printf("\t 7. Chicken Biriani (with Kabab)            (250g)        130/-\n");

    printf("\t 8. Chicken Bhuna Khichuri                  (270g)        115/-\n");

    printf("\t 9. Chicken Bhuna Khichuri (with Egg)       (270g)        125/-\n");

    printf("\t10. Chicken Bhuna Khichuri (with Kabab)     (270g)        130/-\n");

    printf("\t11. Mutton Bhuna Khichuri                   (270g)        115/-\n");

    printf("\t12. Mutton Bhuna Khichuri (with Egg)        (270g)        125/-\n");

    printf("\t13. Mutton Bhuna Khichuri (with Kabab)      (270g)        130/-\n");

    printf("\t14. Back\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    printf("Quantity: ");

    scanf("%d", &quantity);

    switch(choice)

    {

    case 2:

    {

        payment_gate(100123, 120*quantity);

        break;

    }

    case 3:

    case 6:

    case 9:

    case 12:

    {

        payment_gate(100123, 125*quantity);

        break;

    }

    case 4:

    case 7:

    case 10:

    case 13:

    {

        payment_gate(100123, 130*quantity);

        break;

    }

    case 1:

    case 5:

    case 8:

    case 11:

    {

        payment_gate(100123, 115*quantity);

        break;

    }

    case 14:

    {

        catagory();

        break;

    }

    default:

    {

        printf("Wrong selection of item. Please select accurately.\n");

        main_course();

        break;

    }

    }

}



void fast_food()

{

    int choice, quantity;

    printf("\t\t\tAvailable Fast-Food Items\n");

    printf("\tPlease select your choice from below.\n");

    printf("\t         Items                Size        Price in TK\n");

    printf("\t 1. Vegetable Burger      -   Regular   -     70/-\n");

    printf("\t 2. Vegetable Burger      -    Full     -    120/-\n");

    printf("\t 3. Chicken Burger        -   Regular   -     80/-\n");

    printf("\t 4. Chicken Burger        -    Full     -    150/-\n");

    printf("\t 5. Mutton Burger         -   Regular   -     80/-\n");

    printf("\t 6. Mutton Burger         -    Full     -    150/-\n");

    printf("\t 7. Pizza                 -   Single    -     80/-\n");

    printf("\t 8. Pizza                 -   Double    -    150/-\n");

    printf("\t 9. Pizza                 -  4 Person   -    280/-\n");

    printf("\t10. Pizza (Extra Cheese)  -   Single    -     90/-\n");

    printf("\t11. Pizza (Extra Cheese)  -   Double    -    160/-\n");

    printf("\t12. Pizza (Extra Cheese)  -  4 Person   -    300/-\n");

    printf("\t13. Vegetable Rolls       -   Regular   -     70/-\n");

    printf("\t14. Chicken Rolls         -   Regular   -     70/-\n");

    printf("\t15. Mutton Rolls          -   Regular   -     70/-\n");

    printf("\t16. Hot Dog (Chicken)     -   Regular   -    120/-\n");

    printf("\t17. Hot Dog (Mutton)      -   Regular   -    120/-\n");

    printf("\t18. Hot Dog (Beef)        -   Regular   -    120/-\n");

    printf("\t19. Shawarma              -   Regular   -    120/-\n");

    printf("\t20. Back\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    printf("Quantity: ");

    scanf("%d", &quantity);

    switch(choice)

    {

    case 1:

    case 13:

    case 14:

    case 15:

    {

        payment_gate(100123, 70*quantity);

        break;

    }

    case 2:

    case 16:

    case 17:

    case 18:

    case 19:

    {

        payment_gate(100123, 120*quantity);

        break;

    }

    case 3:

    case 5:

    case 7:

    {

        payment_gate(100123, 80*quantity);

        break;

    }

    case 4:

    case 6:

    case 8:

    {

        payment_gate(100123, 150*quantity);

        break;

    }

    case 9:

    {

        payment_gate(100123, 280*quantity);

        break;

    }

    case 10:

    {

        payment_gate(100123, 90*quantity);

        break;

    }

    case 11:

    {

        payment_gate(100123, 160*quantity);

        break;

    }

    case 12:

    {

        payment_gate(100123, 300*quantity);

        break;

    }

    case 20:

    {

        catagory();

        break;

    }

    default:

    {

        printf("Wrong selection of item. Please select accurately.\n");

        fast_food();

        break;

    }

    }

}



void snacks()

{

    int choice, quantity;

    printf("\t\t\tAvailable Snacks Menu\n\n");

    printf("\tPlease select your choice from below.\n");

    printf("\t          Items                 Price in TK\n");

    printf("\t1. Vegetable Sandwich               70/-\n");

    printf("\t2. Vegetable Cheese Sandwich       100/-\n");

    printf("\t3. Chicken Cheese Sandwich         125/-\n");

    printf("\t4. Chicken Cutlet                  150/-\n");

    printf("\t5. Vegetable Cutlet                125/-\n");

    printf("\t6. Egg Sandwich                     60/-\n");

    printf("\t7. Back\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    printf("Quantity: ");

    scanf("%d", &quantity);

    switch(choice)

    {

    case 1:

    {

        payment_gate(100123, 70*quantity);

        break;

    }

    case 2:

    {

        payment_gate(100123, 100*quantity);

        break;

    }

    case 3:

    case 5:

    {

        payment_gate(100123, 125*quantity);

        break;

    }

    case 4:

    {

        payment_gate(100123, 150*quantity);

        break;

    }

    case 6:

    {

        payment_gate(100123, 60*quantity);

        break;

    }

    case 7:

    {

        catagory();

        break;

    }

    default:

    {

        printf("Wrong selection of item. Please select accurately.\n");

        snacks();

        break;

    }

    }

}



void dessert()

{

    int choice, quantity;

    printf("\t\t\tAvailable Dessert Items\n\n");

    printf("\tPlease select your choice from below.\n");

    printf("\t        Items                    Price in TK\n");

    printf("\t 1. Raw Chocolate Pie                 50/-\n");

    printf("\t 2. Chocolate Cake Slice              50/-\n");

    printf("\t 3. Vanilla Cake Slice                50/-\n");

    printf("\t 4. Strawberry Cake Slice             50/-\n");

    printf("\t 5. Chocolate Cube Ice-cream          80/-\n");

    printf("\t 6. Vanilla Cube Ice-cream            80/-\n");

    printf("\t 7. Strawberry Cube Ice-cream         80/-\n");

    printf("\t 8. Cupcake                           70/-\n");

    printf("\t 9. Falooda                          120/-\n");

    printf("\t10. Back\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    printf("Quantity: ");

    scanf("%d", &quantity);

    switch(choice)

    {

    case 1:

    case 2:

    case 3:

    case 4:

    {

        payment_gate(100123, 50*quantity);

        break;

    }

    case 8:

    {

        payment_gate(100123, 70*quantity);

        break;

    }

    case 5:

    case 6:

    case 7:

    {

        payment_gate(100123, 80*quantity);

        break;

    }

    case 9:

    {

        payment_gate(100123, 120*quantity);

        break;

    }

    case 10:

    {

        catagory();

        break;

    }

    default:

    {

        printf("Wrong selection of item. Please select accurately.\n");

        dessert();

        break;

    }

    }

}



void drinks()

{

    int choice, quantity;

    printf("\t\t\tAvailable Drinks Items\n\n");

    printf("\tPlease select your choice from below.\n");

    printf("\t        Items               Price in TK\n");

    printf("\t1. Cold Drinks (1/2L)            50/-\n");

    printf("\t2. Hot Coffee                    50/-\n");

    printf("\t3. Cold Coffee                   80/-\n");

    printf("\t4. Mango Juice                   70/-\n");

    printf("\t5. Vanilla Shake                 80/-\n");

    printf("\t6. Strawberry Milk Shake        100/-\n");

    printf("\t7. Chocolate Milk Shake         100/-\n");

    printf("\t8. Back\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    printf("Quantity: ");

    scanf("%d", &quantity);

    switch(choice)

    {

    case 1:

    case 2:

    {

        payment_gate(100123, 50*quantity);

        break;

    }

    case 4:

    {

        payment_gate(100123, 70*quantity);

        break;

    }

    case 3:

    case 5:

    {

        payment_gate(100123, 80*quantity);

        break;

    }

    case 6:

    case 7:

    {

        payment_gate(100123, 100*quantity);

        break;

    }

    case 8:

    {

        catagory();

        break;

    }

    default:

    {

        printf("Wrong selection of item. Please select accurately.\n");

        drinks();

        break;

    }

    }

}



void package_item()

{

    int choice, quantity;

    printf("\t\t\tAvailable Package Item\n");

    printf("\tPlease select your choice from below.\n");

    printf("\t                        Items                           Price in TK\n");

    printf("\t1. Kachchi Biriani (240g) + Cold Drinks (1/2L)       -       170/-\n");

    printf("\t2. Chicken Burger (Regular) + Vanilla Milk Shake     -       170/-\n");

    printf("\t3. Chicken Cheese Sandwich + Faluda                  -       170/-\n");

    printf("\t4. Mutton Tehari (Regular) + Borhani                 -       170/-\n");

    printf("\t5. Chicken Polao + Borhani + Cup Ice-cream           -       170/-\n");

    printf("\t6. Chicken Burger (Double) + Strawberry Milk Shake   -       170/-\n");

    printf("\t7. Back\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    printf("Quantity: ");

    scanf("%d", &quantity);

    switch(choice)

    {

    case 1:

    case 2:

    case 3:

    case 4:

    case 5:

    case 6:

    {

        payment_gate(100123, 170*quantity);

        break;

    }

    case 7:

    {

        catagory();

        break;

    }

    default:

    {

        printf("Wrong selection of item. Please select accurately.\n");

        main_course();

        break;

    }

    }

}



void help()

{

    printf("\nContact us using:-\n\t\tCall us: 84876\n\t\tMail us: help@foodbuzz.com. Thank you.\n");

    int choice;

    printf("\t\tSelect from below.\n");

    printf("1. Back to Home\n");

    printf("2. Exit\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    switch(choice)

    {

    case 1:

    {

        home();

        break;

    }

    case 2:

    {

        exit1();

        break;

    }

    default:

    {

        printf("Wrong keyword. Enter valid one.\n");

        help();

        break;

    }

    }

}



void exit1()

{

    system("cls");

    printf("Thank you for using FoodBuzz.\nGive us feedback from the link bit.ly/foodbuzz-feedback.\nThank you.\n");

    exit(1);

}



void payment_gate(int order, int amount)

{

    int choice;

    int amount_10, bank_dep, cod_tk;

    amount_10 = (amount+50) * 90;

    amount_10 /= 100;

    bank_dep=amount;

    cod_tk=amount+50;

    printf("\t\t\tPayment Gateway\n");

    printf("\n\tOrder #%d\n", order);

    printf("\tAmount: %d.00 BDT (Total %d.00 BDT with 50 taka shipping cost)\n", amount, amount+50);

    printf("Select your payment type from below\n");

    printf("1. bKash (Get 10%% off). Pay %d.00 BDT\n", amount_10);

    printf("2. Rocket (Get 10%% off). Pay %d.00 BDT\n", amount_10);

    printf("3. Direct Bank Deposit (Free Delivery). Pay %d.00 BDT\n", amount);

    printf("4. Cash On Delivery. Pay %d.00 BDT\n", cod_tk);

    printf("Your Choice: ");

    scanf("%d", &choice);

    switch(choice)

    {

    case 1:

    {

        bkash(order, amount_10);

        break;

    }

    case 2:

    {

        rocket(order, amount_10);

        break;

    }

    case 3:

    {

        bank_deposite(order, bank_dep);

        break;

    }

    case 4:

    {

        cod(order, cod_tk);

        break;

    }

    default:

    {

        printf("Wrong keyword. Enter valid one.");

        payment_gate(order, amount);

        break;

    }

    }

}



void bkash(int order, int amount)

{

    int choice;

    printf("\t\t\tbkash (Get 10%% off)\n");

    printf("\tOrder #%d\n", order);

    printf("\tAmount: %d.00 BDT\n", amount);

    printf("Select your payment type from below\n");

    printf("1. Pay with TrxID (Transaction ID)\n");

    printf("2. Online Payment\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    switch(choice)

    {

    case 1:

    {

        bkash_trx(order, amount);

        break;

    }

    case 2:

    {

        bkash_online(order, amount);

    }

    default:

    {

        printf("Wrong keyword. Enter valid one.");

        bkash(order, amount);

        break;

    }

    }

}



void bkash_trx(int order, int amount)

{

    char trx[20];

    printf("\t\t\tbKash Payment with TrxID\n");

    printf("\n\tOrder #%d\n", order);

    printf("\tAmount: %d.00 BDT\n", amount);

    printf("Payment Steps: \n");

    printf("\t1. Dial *247#\n");

    printf("\t2. Select payment '3'\n");

    printf("\t3. Enter merchant number: 01752564876\n");

    printf("\t4. Enter amount %d.00 BDT\n", amount);

    printf("\t5. Enter Reference '1'\n");

    printf("\t6. Enter Counter '2'\n");

    printf("\t7. Enter bKash PIN *****\n");

    printf("Note: Store the TrxID from bKash SMS of payment confirmation and enter below.\n");

    printf("Enter your TrxID here: ");

    scanf("%s", &trx);

    printf("\n");

    order_cofirm();

}



void order_cofirm()

{

    printf("We have received your order. Your order is on the way to you.\n");

    int choice;

    printf("Select your choice from below.\n");

    printf("1. Return to home\n");

    printf("2. Exit\n");

    printf("Your Choice: ");

    scanf("%d", &choice);

    switch(choice)

    {

    case 1:

    {

        home();

        break;

    }

    case 2:

    {

        exit1();

        break;

    }

    default:

    {

        printf("Wrong keyword. Enter valid one.");

        order_cofirm();

        break;

    }

    }

}



void bkash_online(int order, int amount)

{

    char all[15];

    printf("\t\t\tbkash (Get 10%% off)\n");

    printf("\t\tPayment Only\n");

    printf("Order #%d\n", order);

    printf("Amount: %d.00 BDT\n", amount);

    printf("Enter bKash account Number: ");

    scanf("%s", &all);

    printf("Enter bKash OTP: ");

    scanf("%s", &all);

    printf("Enter bKash PIN: ");

    scanf("%s", &all);

    printf("\n");

    order_cofirm();

}



void rocket(int order, int amount)

{

    printf("\t\t\tRocket (Get 10%% off)\n");

    printf("Order #%d\n", order);

    printf("Amount: %d.00 BTD\n", amount);

    char all[15];

    printf("\t\tPayment Only\n");

    printf("Enter Rocket Number: ");

    scanf("%s", &all);

    printf("Enter Rocket PIN: ");

    scanf("%s", &all);

    printf("Enter OTP: ");

    scanf("%s", &all);

    printf("\n");

    order_cofirm();

}



void bank_deposite(int order, int amount)

{

    char all[30];

    printf("\t\t\tDirect Bank Deposit (Free Delivery)\n");

    printf("\t\tPayment Only\n");

    printf("Order #%d\n", order);

    printf("Amount: %d.00 BTD (50 BDT shipping promotion)\n", amount);

    printf("Online bank A/C number: ");

    scanf("%s", &all);

    printf("Password: ");

    scanf("%s", &all);

    printf("\n");

    order_cofirm();

}



void cod(int order, int amount)

{

    printf("\t\t\tCash On Delivery\n");

    printf("Order #%d\n", order);

    printf("Amount: %d.00 BTD", amount);

    printf("Note: Please prepare exactly %d.00 BDT at the time of delivery.\n", amount);

    printf("\n");

    order_cofirm();

}

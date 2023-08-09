#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct logs
{
    char fname[50];
    char lname[50];
    char username[20];
    char password[20];
};
int bill=0;
void registration();
void login();
void menu();
void delivery();
void pickup();
void setmenu();
void seafood();
void kebab();
void appetizer();
void indian();
void chicken();
void fish();
void bills();

int main()
{
    int choice;
    printf("--------------------------------------------WELCOME TO BINARY FOODS-----------------------------------------------\n\n\n\n");
    printf("                           1.Registration.\n");
    printf("                           2.Login.\n");
    printf("                           3.About Us\n\n\n");
    printf("                           Please press 1 to register yourself.\n");
    printf("                           Please press 2 to login yourself.\n");
    printf("\n\n\n");
    printf("                           Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:system("CLS");
               registration();
               break;

        case 2: system("CLS");
                 login();
               break;

        case 3:printf("We are conducting a healthy and 100% halal foods.Committed to take care of our customer demands.If you want to give us some advise then write in the report section.\n");
               break;

        default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                break;
    }
    return 0;
}

void registration()
{
    printf("--------------------------------------------WELCOME TO BINARY FOODS-----------------------------------------------\n\n\n");
    FILE *log;
    log=fopen("log.txt","w");
    struct logs l;
    printf("                         Enter the First Name:");
    scanf("%s",&l.fname);
    printf("                         Enter the Last Name:");
    scanf("%s",&l.lname);
    printf("                         Enter User name:");
    scanf("%s",&l.username);
    printf("                         Enter the Password:");
    scanf("%s",&l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\n\n\n                   THANK YOU for registering BINARY FOODS.\n\n");
    printf("                         _________________________________________________\n");
    printf("                        |                                                |\n");
    printf("                        | Your user name is your user ID.                |\n");
    printf("                        | Please Login with your user ID & Password.     |\n");
    printf("                        | Press any key to continue....                  |\n");
    printf("                        |________________________________________________|\n");
    getch();
    system("CLS");

    login();

}

void login()
{
printf("--------------------------------------------WELCOME TO BINARY FOODS-----------------------------------------------\n\n\n");
    char username[150],password[50];
    FILE *log;
    log=fopen("log.txt","r");
    struct logs l;
    printf("                         Enter User ID:");
    scanf("%s",&username);
    printf("                         Enter Password:");
    scanf("%s",&password);
    while(fread(&l,sizeof(l),1,log))
    {

        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            printf("\n\n                         Congratulations!!!Successfully Logged in\n");
            system("CLS");
            menu();
        }
        else
            printf("            Invalid User name or password!!!Please Enter the correct user name or password\n");
    }

}

void menu()
{
    int option;
    printf("--------------------------------------------WELCOME TO BINARY FOODS-----------------------------------------------\n\n\n");
    printf("::::::::::::::::::::::::::::::::::::::::::::::       MENU       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    printf("                                           1.Delivery\n");
    printf("                                           2.Pick Up\n");
    printf("                                           3.Back\n\n\n");
    printf("                         Please Enter Your Choice:");
    scanf("%d",&option);
    switch(option)
    {

        case 1:system("CLS");
               delivery();
               break;

        case 2:system("CLS");
               pickup();
               break;

        case 3:system("CLS");
               login();
               break;

        default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                break;
    }
}

void delivery()
{
    int category;
    printf("::::::::::::::::::::::::::::::::::::::::::::::       DELIVERY       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("            :::::::::    CATEGORIES    ::::::::\n\n");
    printf("                                           1.SET MENU\n");
    printf("                                           2.SEA FOOD\n");
    printf("                                           3.KEBAB\n");
    printf("                                           4.APPETIZER\n");
    printf("                                           5.INDIAN CURRY\n");
    printf("                                           6.CHICKEN\n");
    printf("                                           7.FISH\n");
    printf("                                           8.BACK\n\n\n");

    printf("                         Please Enter Your Choice:");
    scanf("%d",&category);

    switch(category)
    {
    case 1:system("CLS");
           setmenu();
           break;

    case 2:system("CLS");
           seafood();
           break;

    case 3:system("CLS");
           kebab();
           break;

    case 4:system("CLS");
           appetizer();
           break;

    case 5:system("CLS");
           indian();
           break;

    case 6:system("CLS");
           chicken();
           break;

    case 7:system("CLS");
           fish();
           break;

    case 8:system("CLS");
           menu();
           break;

    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
            system("CLS");
            delivery();
            break;
    }
}

void pickup()
{
    int category;
    printf("::::::::::::::::::::::::::::::::::::::::::::::       PICK UP       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("            :::::::::    CATEGORIES    ::::::::\n\n");
    printf("                                           1.SET MENU\n");
    printf("                                           2.SEA FOOD\n");
    printf("                                           3.KEBAB\n");
    printf("                                           4.APPETIZER\n");
    printf("                                           5.INDIAN CURRY\n");
    printf("                                           6.CHICKEN\n");
    printf("                                           7.FISH\n");
    printf("                                           8.BACK\n\n\n");

    printf("                         Please Enter Your Choice:");
    scanf("%d",&category);

    switch(category)
    {
    case 1:system("CLS");
           setmenu();
           break;

    case 2:system("CLS");
           seafood();
           break;

    case 3:system("CLS");
           kebab();
           break;

    case 4:system("CLS");
           appetizer();
           break;

    case 5:system("CLS");
           indian();
           break;

    case 6:system("CLS");
           chicken();
           break;

    case 7:system("CLS");
           fish();
           break;

    case 8:system("CLS");
           menu();
           break;

    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
            system("CLS");
            delivery();
            break;
    }
}

void setmenu()
{
    int category,quantity,order;
    printf("::::::::::::::::::::::::::::::::::::::::::::::       SET MENU       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("                          :::::::::    CATEGORIES    ::::::::\n\n");
    printf("___________________________________________________________________________________________\n");
    printf("|                                       NAME                                    |  PRICE  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("|SET 1: Vegetable,Fried Rice,Fried Chicken 2 pcs,Soft Drinks                    |  350TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("|SET 2: Chicken Fried Rice,Thai Fried Chicken(2pcs),Mix Vegetable               |  400TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("|SET 3: Egg Fried Rice,Chicken hot wings,Beef chili onion,Soft Drinks           |  420TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("|SET 4: Chicken Chowmein,Fried chicken 2pcs,Butter fried prawn 2pcs,Soft drinks |  390TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("|SET 5: Beef sheek Kabab,Butter Naan,Raita Salad,Soft Drinks                    |  350TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n\n\n\n\n");
    printf("                         Please Enter Your Choice:");
    scanf("%d",&category);
    printf("                         Please Enter Quantity:");
    scanf("%d",&quantity);
    printf("\n                       ________________________________________\n\n");
    switch(category)
    {
        case 1:bill=bill+(350*quantity);
               printf("              Press 1 to order more food from SET MENU\n");
               printf("              Press 2 to go MAIN MENU\n");
               printf("              Press 3 to get bill\n");
               scanf("%d",&order);
               switch(order)
               {
                   case 1: system("CLS");
                           setmenu();
                           break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            setmenu();
                            break;
               }
               break;

        case 2:bill=bill+(400*quantity);
               printf("              Press 1 to order more food from SET MENU\n");
               printf("              Press 2 to go MAIN MENU\n");
               printf("              Press 3 to get bill\n");
               scanf("%d",&order);
               switch(order)
               {
                   case 1: system("CLS");
                           setmenu();
                           break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            setmenu();
                            break;
               }
               break;

        case 3:bill=bill+(420*quantity);
               printf("              Press 1 to order more food from SET MENU\n");
               printf("              Press 2 to go MAIN MENU\n");
               printf("              Press 3 to get bill\n");
               scanf("%d",&order);
               switch(order)
               {
                   case 1: system("CLS");
                           setmenu();
                           break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            setmenu();
                            break;
               }
               break;

        case 4:bill=bill+(390*quantity);
               printf("              Press 1 to order more food from SET MENU\n");
               printf("              Press 2 to go MAIN MENU\n");
               printf("              Press 3 to get bill\n");
               scanf("%d",&order);
               switch(order)
               {
                   case 1: system("CLS");
                           setmenu();
                           break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            setmenu();
                            break;
               }
               break;

        case 5:bill=bill+(350*quantity);
               printf("              Press 1 to order more food from SET MENU\n");
               printf("              Press 2 to go MAIN MENU\n");
               printf("              Press 3 to get bill\n");
               scanf("%d",&order);
               switch(order)
               {
                   case 1: system("CLS");
                           setmenu();
                           break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            setmenu();
                            break;
               }
               break;

        default:printf("                       Invalid Choice!!!\n");
                system("CLS");
                setmenu();
                break;

    }


}

void seafood()
{
    int category,quantity,order;
    printf("::::::::::::::::::::::::::::::::::::::::::::::       SEA FOOD       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("                          :::::::::    CATEGORIES    ::::::::\n\n");
    printf("___________________________________________________________________________________________\n");
    printf("|                                       NAME                                    |  PRICE  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 1.Sea food soup                                                               |  450TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 2.Sea food salad                                                              |  450TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 3.Fried Pomfret                                                               |  700TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 4.B.B.Q Pomfret                                                               |  850TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 5.Fried pomfret with butter and garlic sauce                                  |  790TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 6.Crab Masala                                                                 |  500TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n\n\n\n\n");
    printf("                         Please Enter Your Choice:");
    scanf("%d",&category);
    printf("                         Please Enter Quantity:");
    scanf("%d",&quantity);
    printf("\n                       ________________________________________\n\n");
    switch(category)
    {
        case 1: bill=bill+(450*quantity);
                printf("              Press 1 to order more food from SEA FOOD\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            seafood();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            seafood();
                            break;
                }
                break;

        case 2: bill=bill+(450*quantity);
                printf("              Press 1 to order more food from SEA FOOD\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            seafood();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            seafood();
                            break;
                }
                break;

        case 3: bill=bill+(700*quantity);
                printf("              Press 1 to order more food from SEA FOOD\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            seafood();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            seafood();
                            break;
                }
                break;

        case 4: bill=bill+(850*quantity);
                printf("              Press 1 to order more food from SEA FOOD\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            seafood();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            seafood();
                            break;
                }
                break;

        case 5: bill=bill+(790*quantity);
                printf("              Press 1 to order more food from SEA FOOD\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            seafood();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            seafood();
                            break;
                }
                break;

        case 6: bill=bill+(500*quantity);
                printf("              Press 1 to order more food from SEA FOOD\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            seafood();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            seafood();
                            break;
                }
                break;

        default:printf("                       Invalid Choice!!!\n");
                system("CLS");
                seafood();
                break;
    }
}

void kebab()
{
    int category,quantity,order;
    printf("::::::::::::::::::::::::::::::::::::::::::::::       KEBAB       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("                          :::::::::    CATEGORIES    ::::::::\n\n");
    printf("___________________________________________________________________________________________\n");
    printf("|                                       NAME                                    |  PRICE  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 1.Chicken Tandoori                                                            |  150TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 2.Chicken Hariyali Kebab                                                      |  220TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 3.Chicken Rashmi Kebab                                                        |  220TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 4.Beef Shik Kebab                                                             |  200TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 5.Beef Boti Kebab                                                             |  280TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n\n\n\n\n");

    printf("                         Please Enter Your Choice:");
    scanf("%d",&category);
    printf("                         Please Enter Quantity:");
    scanf("%d",&quantity);
    printf("\n                       ________________________________________\n\n");
    switch(category)
    {
        case 1: bill=bill+(150*quantity);
                printf("              Press 1 to order more food from KEBAB\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            kebab();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            kebab();
                            break;
                }
                break;

        case 2: bill=bill+(220*quantity);
                printf("              Press 1 to order more food from KEBAB\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            kebab();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            kebab();
                            break;
                }
                break;

        case 3: bill=bill+(220*quantity);
                printf("              Press 1 to order more food from KEBAB\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            kebab();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            kebab();
                            break;
                }
                break;

        case 4: bill=bill+(200*quantity);
                printf("              Press 1 to order more food from KEBAB\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            kebab();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            kebab();
                            break;
                }
                break;

        case 5: bill=bill+(280*quantity);
                printf("              Press 1 to order more food from KEBAB\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            kebab();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            kebab();
                            break;
                }
                break;

        default:printf("                       Invalid Choice!!!\n");
                system("CLS");
                kebab();
                break;
    }
}

void appetizer()
{
    int category,quantity,order;
    printf("::::::::::::::::::::::::::::::::::::::::::::::       APPETIZER       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("                          :::::::::    CATEGORIES    ::::::::\n\n");
    printf("___________________________________________________________________________________________\n");
    printf("|                                       NAME                                    |  PRICE  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 1.Butter Fried Prawn (8pcs)                                                   |  400TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 2.Chicken Hot Wings (6pcs)                                                    |  350TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 3.Chicken Dumpling                                                            |  320TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 4.Paneer Tikka Shashlik                                                       |  400TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 5.Chicken Chap                                                                |  250TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n\n\n\n\n");

    printf("                         Please Enter Your Choice:");
    scanf("%d",&category);
    printf("                         Please Enter Quantity:");
    scanf("%d",&quantity);
    printf("\n                       ________________________________________\n\n");
    switch(category)
    {
        case 1: bill=bill+(400*quantity);
                printf("              Press 1 to order more food from APPETIZER\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            appetizer();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            appetizer();
                            break;
                }
                break;

        case 2: bill=bill+(350*quantity);
                printf("              Press 1 to order more food from APPETIZER\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            appetizer();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            appetizer();
                            break;
                }
                break;

        case 3: bill=bill+(320*quantity);
                printf("              Press 1 to order more food from APPETIZER\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            appetizer();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            appetizer();
                            break;
                }
                break;

        case 4: bill=bill+(400*quantity);
                printf("              Press 1 to order more food from APPETIZER\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            appetizer();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            appetizer();
                            break;
                }
                break;

        case 5: bill=bill+(250*quantity);
                printf("              Press 1 to order more food from APPETIZER\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            appetizer();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            appetizer();
                            break;
                }
                break;

        default:printf("                       Invalid Choice!!!\n");
                system("CLS");
                appetizer();
                break;
    }
}

void indian()
{
   int category,quantity,order;
    printf("::::::::::::::::::::::::::::::::::::::::::::::       INDIAN CURRY       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("                          :::::::::    CATEGORIES    ::::::::\n\n");
    printf("___________________________________________________________________________________________\n");
    printf("|                                       NAME                                    |  PRICE  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 1.Pudina Chicken 6pcs                                                         |  360TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 2.Chicken Tikka Masala                                                        |  450TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 3.Mutton Roganjosh                                                            |  450TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 4.Duck Bhuna(Full)                                                            |  950TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 5.Palak Paneer                                                                |  350TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n\n\n\n\n");

    printf("                         Please Enter Your Choice:");
    scanf("%d",&category);
    printf("                         Please Enter Quantity:");
    scanf("%d",&quantity);
    printf("\n                       ________________________________________\n\n");
    switch(category)
    {
        case 1: bill=bill+(360*quantity);
                printf("              Press 1 to order more food from INDIAN CURRY\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            indian();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            indian();
                            break;
                }
                break;

        case 2: bill=bill+(450*quantity);
                printf("              Press 1 to order more food from INDIAN CURRY\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            indian();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            indian();
                            break;
                }
                break;

        case 3: bill=bill+(450*quantity);
                printf("              Press 1 to order more food from INDIAN CURRY\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            indian();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            indian();
                            break;
                }
                break;

        case 4: bill=bill+(950*quantity);
                printf("              Press 1 to order more food from INDIAN CURRY\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            indian();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            indian();
                            break;
                }
                break;

        case 5: bill=bill+(350*quantity);
                printf("              Press 1 to order more food from INDIAN CURRY\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            indian();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            indian();
                            break;
                }
                break;

        default:printf("                       Invalid Choice!!!\n");
                system("CLS");
                indian();
                break;
    }
}

void chicken()
{
    int category,quantity,order;
    printf("::::::::::::::::::::::::::::::::::::::::::::::       CHICKEN       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("                          :::::::::    CATEGORIES    ::::::::\n\n");
    printf("___________________________________________________________________________________________\n");
    printf("|                                       NAME                                    |  PRICE  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 1.Fried Spring Chicken                                                        |  360TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 2.Chicken Masala                                                              |  390TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 3.Chicken Chilli Onion                                                        |  380TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 4.Sweet & sour Chicken                                                        |  380TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 5.Sizzling Chicken                                                            |  480TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n\n\n\n\n");

    printf("                         Please Enter Your Choice:");
    scanf("%d",&category);
    printf("                         Please Enter Quantity:");
    scanf("%d",&quantity);
    printf("\n                       ________________________________________\n\n");
    switch(category)
    {
        case 1: bill=bill+(360*quantity);
                printf("              Press 1 to order more food from CHICKEN\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            chicken();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            chicken();
                            break;
                }
                break;

        case 2: bill=bill+(390*quantity);
                printf("              Press 1 to order more food from CHICKEN\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            chicken();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            chicken();
                            break;
                }
                break;

        case 3: bill=bill+(380*quantity);
                printf("              Press 1 to order more food from CHICKEN\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            chicken();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            chicken();
                            break;
                }
                break;

        case 4: bill=bill+(380*quantity);
                printf("              Press 1 to order more food from CHICKEN\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            chicken();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            chicken();
                            break;
                }
                break;

        case 5: bill=bill+(480*quantity);
                printf("              Press 1 to order more food from CHICKEN\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            chicken();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            chicken();
                            break;
                }
                break;

        default:printf("                       Invalid Choice!!!\n");
                system("CLS");
                chicken();
                break;
    }
}

void fish()
{
    int category,quantity,order;
    printf("::::::::::::::::::::::::::::::::::::::::::::::       FISH       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("                          :::::::::    CATEGORIES    ::::::::\n\n");
    printf("___________________________________________________________________________________________\n");
    printf("|                                       NAME                                    |  PRICE  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 1.Sweet & Sour Prawn Ball                                                     |  390TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 2.Prawn Masala                                                                |  450TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 3.Prawn with Garlic & Paper                                                   |  430TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n");
    printf("| 4.Steamed Red Snapper with Garlic & lime Sauce                                |  750TK  |\n");
    printf("|_______________________________________________________________________________|_________|\n\n\n\n\n");

    printf("                         Please Enter Your Choice:");
    scanf("%d",&category);
    printf("                         Please Enter Quantity:");
    scanf("%d",&quantity);
    printf("\n                       _____________________________\n\n");
    switch(category)
    {
        case 1: bill=bill+(390*quantity);
                printf("              Press 1 to order more food from FISH\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            fish();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            fish();
                            break;
                }
                break;

        case 2: bill=bill+(450*quantity);
                printf("              Press 1 to order more food from FISH\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            fish();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            fish();
                            break;
                }
                break;

        case 3: bill=bill+(430*quantity);
                printf("              Press 1 to order more food from FISH\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            fish();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            fish();
                            break;
                }
                break;

        case 4: bill=bill+(750*quantity);
                printf("              Press 1 to order more food from FISH\n");
                printf("              Press 2 to go MAIN MENU\n");
                printf("              Press 3 to get bill\n");
                scanf("%d",&order);
                switch(order)
                {
                    case 1: system("CLS");
                            fish();
                            break;

                    case 2: system("CLS");
                            menu();
                            break;

                    case 3: system("CLS");
                            bills();
                            break;

                    default:printf("                       Dear Customer Please Enter valid numbers only.THANK YOU.\n");
                            system("CLS");
                            fish();
                            break;
                }
                break;

        default:printf("                       Invalid Choice!!!\n");
                system("CLS");
                fish();
                break;
    }
}

void bills()
{
    printf("::::::::::::::::::::::::::::::::::::::::::::::       CUSTOMER BILL       ::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n");
    printf("                           _____________________________________________________________\n");
    printf("                          |                           BINARY FOODS                      | \n");
    printf("                          |             Baily Tower,Chashara,Narayanganj1420,Dhaka      | \n");
    printf("                          |                             Total:%d                       |\n",bill);
    printf("                          |_____________________________________________________________|\n\n\n\n");
    printf("                                             Thanks from BINARY GROUP\n\n\n");
}
















#include<stdio.h>
#include<stdlib.h>
#include<math.h>

char name[20], date[20];
char con[20]; char email[40];
int per, total;
int tv1, ruv1=25, pv1, tv2, ruv2=80, pv2, tv3, ruv3=85, pv3, tv4, ruv4=50, pv4;//veg
int tn1, run1=25, pn1, tn2, run2=50, pn2, tn3, run3=90, pn3, tn4, run4=30, pn4; //non-veg
int tb1, rub1=180, pb1, tb2, rub2=150, pb2, tb3, rub3=130, pb3, tb4, rub4=120, pb4; //biriyani

void menu();
void veg_menu();
void nonveg_menu();
void biriyani_menu();
void bill();
void check();
void customer_details();
void first_menu();

int main()
{
    for(int i=0;i<50;i++)
    printf("*");
    printf("\n\n");
    printf("\t**WELCOME TO FRIEND RESTAURANT**\n\n");
    for(int i=0;i<50;i++)
    printf("*");
    printf("\n\n");
    printf("Date: ");
    scanf("%s", date);
    customer_details();
    menu();
    return 0;
}

void customer_details()
{

    printf("CUSTOMER NAME: ");
    scanf("%s", name);
    printf("CUSTOMER CONTACT NO: ");
    scanf("%s", con);
    printf("CUSTOMER E-MAIL: ");
    scanf("%s", email);
    coming_person();
}

void coming_person()
{
    printf("How Many Persons Are You Coming: ");
    scanf("%d", &per);
    printf("Any Suitable table are free: Y/N \n ");
        if (toupper(getch())=='Y')
        {
            if(per==1)
                {
                    printf("Please Settle Down in Table No: 3\n");
                    printf("Give the Menu Card to 3 no. Table.\n");
                    first_menu();
                }
            if(per==2)
                {
                    printf("Please Settle Down in Table No: 3\n");
                    printf("Give the Menu Card to 3 no. Table.\n");
                    first_menu();
                }
            if(per==3)
                {
                    printf("Please Settle Down in Table No: 6\n");
                    printf("Give the Menu Card to 6 no. Table.\n");
                    first_menu();
                }
            if(per==4)
                {
                    printf("Please Settle Down in Table No: 6\n");
                    printf("Give the Menu Card to 6 no. Table.\n");
                    first_menu();
                }
            if(per==5)
                {
                    printf("Please Settle Down in Table No: 1 or 4\n");
                    printf("Give the Menu Card to 1 no. or 4 no. Table.\n");
                    first_menu();
                }
            if(per==6)
                {
                    printf("Please Settle Down in Table No: 1 or 4\n");
                    printf("Give the Menu Card to 1 no. or 4 no. Table.\n");
                    first_menu();
                }
            if(per==7)
                {
                    printf("Please Settle Down in Table No: 2 or 5\n");
                    printf("Give the Menu Card to 2 no. or 5 no. Table.\n");
                    first_menu();
                }
            if(per==8)
                {
                    printf("Please Settle Down in Table No: 2 or 5\n");
                    printf("Give the Menu Card to 2 no. or 5 no. Table.\n");
                    first_menu();
                }
        }
        else
        {
            printf("Please wait few minutes.\n");
            exit(0);
        }

}

void first_menu()
{
    printf("\n\nOUR MENU: \n");
    printf("**********\n");
    printf("\n1. VEG MENU: \t \t \t \t 2. NON-VEG MENU: \t \t \t 3. BIRIYANI MENU: \n");
    printf("  ---------- \t \t \t \t    ------------- \t \t \t    --------------\n");
    printf("Sl.NO. \t Items \t \t Rate \t \t Sl.NO.  Items \t \t Rate \t \t Sl.NO.  Items \t \t \t  Rate \n");
    printf("1. \t Dal \t \t 25 \t \t 1. \t Dal \t \t 25 \t \t 1. \t Mutton Biriyani  180  \n");
    printf("2. \t Paneer Masala \t 80 \t \t 2. \t Chili Chicken \t 50 \t \t 2. \t Chicken Biriyani 150  \n");
    printf("3. \t Chili Paneer \t 85 \t \t 3. \t Mutton Kosha \t 90 \t \t 3. \t Egg Biriyani \t  130  \n");
    printf("4. \t Pach Misali \t 50 \t \t 4. \t Egg Curry \t 30 \t \t 4. \t Veg Biriyani \t  120 \n");
}

void menu()
{
    int ch;
    while(1)
    {
        printf("\nWhat would you like to have? Enter serial no: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1 :    veg_menu();break;
            case 2 :    nonveg_menu();break;
            case 3 :    biriyani_menu();break;
            default:    printf("WRONG CHOICE\n");
        }
    }
}

void veg_menu()
{
    int ch;
    printf("**********\n");
    printf("VEG MENU: \n");
    printf("**********\n");
    printf("What would you like to have (VEG MENU)? Enter serial no: ");
    scanf("%d",&ch);
    if (ch==1)
    {
        printf("1. DAL : \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pv1);
        tv1=ruv1*pv1;
        total=total+tv1;
        printf("Would you like to have anything else in (VEG MENU)? Y/N \n ");
        if (toupper(getch())=='Y')
        {
            veg_menu();
        }
    }

    if (ch==2)
    {
        printf("1. PANEER MASALA : \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pv2);
        tv2=ruv2*pv2;
        total=total+tv2;
        printf("Would you like to have anything else in (VEG MENU)? Y/N \n ");
        if (toupper(getch())=='Y')
        {
            veg_menu();
        }
    }

    if (ch==3)
    {
        printf("1. CHILI PANEER : \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pv3);
        tv3=ruv3*pv3;
        total=total+tv3;
        printf("Would you like to have anything else in (VEG MENU)? Y/N \n ");
        if (toupper(getch())=='Y')
        {
            veg_menu();
        }
    }

    if (ch==4)
    {
        printf("1. PANCH MISALI: \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pv4);
        tv4=ruv4*pv4;
        total=total+tv4;
        printf("Would you like to have anything else in (VEG MENU)? Y/N \n ");
        if (toupper(getch())=='Y')
        {
            veg_menu();
        }
    }

        printf("Would you like to have anything else in (MAIN MENU)? Y/N \n ");
        if (toupper(getch())=='Y')
        {
            menu();
        }
        else
        {
            bill();
        }
        exit(0);
}

void nonveg_menu()
{
    int ch;
    printf("*************\n");
    printf("NON-VEG MENU: \n");
    printf("*************\n");
    printf("What would you like to have (NON-VEG MENU)? Enter serial no: ");
    scanf("%d",&ch);
    if (ch==1)
    {
        printf("1. DAL : \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pn1);
        tn1=run1*pn1;
        total=total+tn1;
        printf("Would you like to have anything else in (NON-VEG MENU)? Y/N\n ");
        if (toupper(getch())=='Y')
        {
            nonveg_menu();
        }
    }

    if (ch==2)
    {
        printf("1. CHILI CHICKEN: \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pn2);
        tn2=run2*pn2;
        total=total+tn2;
        printf("Would you like to have anything else in (NON-VEG MENU)? Y/N\n ");
        if (toupper(getch())=='Y')
        {
            nonveg_menu();
        }
    }

    if (ch==3)
    {
        printf("1. MUTTON KOSHA : \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pn3);
        tn3=run3*pn3;
        total=total+tn3;
        printf("Would you like to have anything else in (NON-VEG MENU)? Y/N\n ");
        if (toupper(getch())=='Y')
        {
            nonveg_menu();
        }
    }

    if (ch==4)
    {
        printf("1. EGG CURRY : \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pn4);
        tn4=run4*pn4;
        total=total+tn4;
        printf("Would you like to have anything else in (NON-VEG MENU)? Y/N\n ");
        if (toupper(getch())=='Y')
        {
            nonveg_menu();
        }
    }

        printf("Would you like to have anything else in (MAIN MENU)? Y/N \n ");
        if (toupper(getch())=='Y')
        {
            menu();
        }
        else
        {
            bill();
        }
        exit(0);
}

void biriyani_menu()
{
    int ch;
    printf("*************\n");
    printf("BIRIYANI MENU: \n");
    printf("*************\n");
    printf("What would you like to have(BIRIYANI MENU)? Enter serial no: ");
    scanf("%d",&ch);
    if (ch==1)
    {
        printf("1. MUTTON BIRIYANI: \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pb1);
        tb1=rub1*pb1;
        total=total+tb1;
        printf("Would you like to have anything else in (BIRIYANI MENU)? Y/N\n ");
        if (toupper(getch())=='Y')
        {
            biriyani_menu();
        }
    }

    if (ch==2)
    {
        printf("1. CHICKEN BIRIYANI: \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pb2);
        tb2=rub2*pb2;
        total=total+tb2;
        printf("Would you like to have anything else in (BIRIYANI MENU)? Y/N\n ");
        if (toupper(getch())=='Y')
        {
            biriyani_menu();
        }
    }

    if (ch==3)
    {
        printf("1. EGG BIRIYANI: \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pb3);
        tb3=rub3*pb3;
        total=total+tb3;
        printf("Would you like to have anything else in (BIRIYANI MENU)? Y/N\n ");
        if (toupper(getch())=='Y')
        {
            biriyani_menu();
        }
    }

    if (ch==4)
    {
        printf("1. VEG BIRIYANI: \n");
        printf("How many plates would you like to order?: ");
        scanf("%d",&pb4);
        tb4=rub4*pb4;
        total=total+tb4;
        printf("Would you like to have anything else in (BIRIYANI MENU)? Y/N\n ");
        if (toupper(getch())=='Y')
        {
            biriyani_menu();
        }
    }

        printf("Would you like to have anything else in (MAIN MENU)? Y/N \n ");
        if (toupper(getch())=='Y')
        {
            menu();
        }
        else
        {
            bill();
        }
        exit(0);

}

void bill()
{
    printf("Your Total Bill is: \t \t \t %d\n",total);
    check();
}

void check()
{
        printf("ARE YOU PAY THE BILL? Y/N \n ");
        if (toupper(getch())=='Y')
        {
            for_print();
            printf("**THANK YOU**COME AGAIN**\n\n");
            printf("SEND MESSAGE IN %s: ", con);
            printf("%s, You are paid RS. %d in Friend Restaurant, **Thanks for come**\n", name, total);
        }
        else
        {
            printf("**PLEASE PAY THE BILL** \n");
            printf("Press Y/N\n");
            if (toupper(getch())=='Y')
            {
                for_print();
                printf("**THANK YOU**COME AGAIN**\n\n");
                printf("SEND MESSAGE IN %s: ", con);
                printf("%s, You are paid RS. %d in Friend Restaurant, **Thanks for come**\n", name, total);
            }
        }
        exit(0);
}

void for_print()
{
    printf("\nPrinting Part: \n");
    printf("**************\n");
    printf("VEG MENU:\n");
    printf("*********\n");
    printf("Dal: \t \t %d * %d \t %d\n", ruv1,pv1,tv1);
    printf("Paneer Masala: \t %d * %d \t %d\n", ruv2,pv2,tv2);
    printf("Chili Paneer: \t %d * %d \t %d\n", ruv3,pv3,tv3);
    printf("Panch Misali: \t %d * %d \t %d\n", ruv4,pv4,tv4);
    printf("NON-VEG MENU:\n");
    printf("**************\n");
    printf("Dal: \t \t %d * %d \t %d\n", run1,pn1,tn1);
    printf("Chili Chicken: \t %d * %d \t %d\n", run2,pn2,tn2);
    printf("Mutton Kosha: \t %d * %d \t %d\n", run3,pn3,tn3);
    printf("Egg Curry: \t %d * %d \t %d\n", run4,pn4,tn4);
    printf("BIRIYANI MENU:\n");
    printf("**************\n");
    printf("Mutton Biriyani: %d * %d \t %d\n", rub1,pb1,tb1);
    printf("Chicken Biriyani: %d * %d \t %d\n", rub2,pb2,tb2);
    printf("Egg Biriyani: \t %d * %d \t %d\n", rub3,pb3,tb3);
    printf("Veg Biriyani: \t %d * %d \t %d\n", rub4,pb4,tb4);
    for(int i=0;i<50;i++)
    printf("*");
    printf("\n");
    printf("GRAND TOTAL: \t \t \t %d\n",total);
}



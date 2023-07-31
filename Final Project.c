#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct record
{
    int hr,min,date,mon;
    char week[10];
};

struct patient
{
    char contact[12];
    char name[100];
    char address[100];
    int age;
    struct record ptime;
}p;

void doc1(),doc2(),cardio(),emergency();
int menu();

int main()
{
    int choice,ans;
    do{
        system("CLS");
        printf("\t\t\t\t\t==========================\n");
        printf("\t\t\t\t\tPATIENT MANAGEMENT SYSTEM\n");
        printf("\t\t\t\t\t===========================\n");
        printf("\n1. Book an appointment!");
        printf("\n2. Exit\nYour choice: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            do{
                choice=menu();
                if(choice!=1&&choice!=2)
                {
                    if(choice!=3)
                    {
                    printf("Please choose the correct option...");
                    getch();
                    }
                }
                else if(choice==1)
                    emergency();
                else if(choice==2)
                    cardio();
                else
                    ans=3;
            }while(choice!=2);
        }
        else
            printf("\nMade By: \nTAHIR ALI ASGHAR\nSYEDA UMAIMA FATIMA\nMUHAMMAD UZAIR!");
    }while(ans!=2);

    return 0;
}

int menu()
{
    int choice;
    system("CLS");
    printf("\n1-EMERGENCY DEPARTMENT\n2-CARDIOLOGIST\n3-MAIN MENU\n");
    printf("\nWhat are you looking for?\nPlease enter your choice: ");
    scanf("%d",&choice);
    return choice;
}

void doc1()
{
    char week[10];

    printf("Monday-Sunday\n");
    printf("Timings 2:00pm-9:00pm\n");
    printf("Enter your desired date (dd/mm): ");
    scanf("%d/%d",&p.ptime.date,&p.ptime.mon);
    fflush(stdin);
    printf("Enter your desired time slot from the time given (hr:mm): ");
    scanf("%d:%d",&p.ptime.hr,&p.ptime.min);
     while(p.ptime.hr>9 || p.ptime.hr<2)
            {
            printf("Doctor isn't available at this time\nTime (hh:mm): ");
        scanf("%d:%d",&p.ptime.hr,&p.ptime.min);
            }
    fflush(stdin);
    printf("Enter your desired day: ");

    int d=1;
    do
    {
        gets(p.ptime.week);
        strcpy(week,p.ptime.week);
        d=1;
        if(strcmp(week,"monday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"tuesday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"wednesday")==0)
                printf("Appointment has been booked\n");
        else if(strcmp(week,"thursday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"friday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"saturday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"sunday")==0)
            printf("Appointment has been booked\n");
        else
        {
            printf("Invalid please enter day again: ");
            d=0;
        }
    }while(d==0);

    fflush(stdin);
    printf("Name: ");
    gets(p.name);
    fflush(stdin);
    printf("contact number: ");
    gets(p.contact);
    fflush(stdin);
    printf("address: ");
    gets(p.address);
    fflush(stdin);
    printf("Age: ");
    scanf("%d",&p.age);
    system("cls");
}

void doc2()
{
    char week[10];

    printf("Monday-Sunday\n");
    printf("Timings: 3:00pm-10:00pm\n");
    printf("Enter your desired date (dd/mm): ");
    scanf("%d/%d",&p.ptime.date,&p.ptime.mon);

    printf("Enter your desired time slot from the time given (hr:mm): ");
    scanf("%d:%d",&p.ptime.hr,&p.ptime.min);
    while (p.ptime.hr>10 ||p.ptime.hr<3)
            {
        printf("Doctor isn't available at this time\nTime (hh:mm): ");
        scanf("%d:%d",&p.ptime.hr,&p.ptime.min);
            }
    fflush(stdin);
    printf("Enter your desired day: ");

    int d=1;
    do
    {
        gets(p.ptime.week);
        strcpy(week,p.ptime.week);
        d=1;
        if(strcmp(week,"monday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"tuesday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"wednesday")==0)
                printf("Appointment has been booked\n");
        else if(strcmp(week,"thursday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"friday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"saturday")==0)
            printf("Appointment has been booked\n");
        else if(strcmp(week,"sunday")==0)
            printf("Appointment has been booked\n");
        else
        {
            printf("Invalid please enter day again: ");
            d=0;
        }
    }while(d==0);

    fflush(stdin);
    printf("Name: ");
    gets(p.name);
    fflush(stdin);
    printf("contact number: ");
    gets(p.contact);
    fflush(stdin);
    printf("address: ");
    gets(p.address);
    fflush(stdin);
    printf("Age: ");
    scanf("%d",&p.age);
    system("cls");
}

void cardio()
{
    system("CLS");
    int choice=2,ts,ts1,doc,day;
    char a;
    printf("Doctors :\n1-Dr Masood \t\t\t\t\t\t\t2-Dr Ali\n");
    printf("(Consultant Cardiologist MBBS, FCPS (Cardiology)\t\tCardiac Electrophysiology (arrhythmia, pacemakers)");
    printf("\nDiplomat American Board of Nuclear Cardiology)\t\t\t FCPS (Cardiology),FCPS (Medicine),MBBS\n");
    printf("\nPress 1 0r 2 to Choose A Doctor: ");
    scanf("%d",&doc);
    while(doc>=3)
    {
        printf("You made an invalid choice\nDoctor: ");
        scanf("%d",&doc);
    }
    if(doc==1)
    {
        printf("\n");
        printf("Time slot\n");
        printf("DAY\t\tFROM\t\tTO\n");
        printf("Monday\t\t9:00\t\t12:30\n");
        printf("Friday\t\t20:00\t\t22:00\n");
        printf("\nMake a choice from these time slots\n");
        printf("Day 1\nMonday\n1)  9:00-10:00\t2)  10:15-11:15\t3)  11:30-12:30\n");
        printf("\nDay 2\nFriday\n1)  20:00-20:45\t2)   21:15-22:00\n");
        printf("Enter your desired day: ");
        scanf("%d",&day);
        printf("\nEnter your desired time slot: ");
        scanf("%d",&ts);

        while(day>=3)
        {
            printf("You made an invalid choice\nDay: ");
            scanf("%d",&day);
        }
        if(day==1)
        {
            while(ts==3)
            {
                fflush(stdin);
                printf("This time slot is not available!\n");
                printf("Sorry for the inconvenience\nWant to book another slot?(y/n): ");
                scanf("%c",&a);

                if (a=='y')
                {
                printf("\nEnter your desired time slot: ");
                scanf("%d",&ts);
                }
                if (a=='n')
                    menu();
            }
            while(ts>=4)
            {
                printf("\nInvalid time slot kindly enter it again\nTime slot: ");
                scanf("%d",&ts);
            }
            if(ts==1 || ts==2)
                printf("\nYOUR APPOINTMENT HAS BEEN BOOKED!\n");
        }
        if(day==2)
        {
            if(ts==1 || ts==2)
                printf("YOUR APPOINTMENT HAS BEEN BOOKED!\n");
        }
    } // end of doc 1
    else if(doc==2)
    {
        printf("\n");
        printf("Time slot\n");
        printf("DAY\t\tFROM\t\tTO\n");
        printf("Tuesday\t\t14:00\t\t16:15\n");
        printf("Saturday\t17:00\t\t18:00\n");
        printf("\nMake a choice from these time slots\n");
        printf("Day1\nTuesday\n1  14:00-15:00\t2  15:00-16:15\n");
        printf("\nDay2\nSaturday\n1 17:00-18:00\n");
        printf("Enter your desired day: ");
        scanf("%d",&day);
        printf("Enter your desired time slot: ");
        scanf("%d",&ts1);
        fflush(stdin);
        while(day>=3)
        {
            printf("you made an invalid choice\nDay: ");
            scanf("%d",&day);
        }

        if (day==2)
        {
            while (day==2)
            {
                fflush(stdin);
                printf("Saturday is fully booked\n");
                printf("Sorry for the inconvenience\nwant to book another day?(y/n): ");
                scanf("%c",&a);
                if (a=='y')
                    {
                        printf("\nEnter your desired day: ");
                        scanf("%d",&day);
                        printf("\nEnter your desired time slot: ");
                        scanf("%d",&ts1);
                    }
                if (a=='n')
                    menu();
            }
            while(day>=3)
            {
                printf("\nInvalid day kindly enter it again\nDay: ");
                scanf("%d",&day);
            }
            while(ts1>=2)
            {
                printf("\nInvalid time slot kindly enter it again\nTime slot: ");
                scanf("%d",&ts1);
            }
        }//end of day 2
        if (day==1)
        {
            while(ts1>=3)
            {
                printf("\nInvalid time slot kindly enter it again\nTime slot: ");
                scanf("%d",&ts1);
            }
            while (ts1==1)
            {
                fflush(stdin);
                printf("\nThis time slot is not available");
                printf("\nSorry for the inconvenience\nwant to book another slot?(y/n): ");
                scanf("%c",&a);
                if (a=='y')
                {
                    printf("\nEnter your desired time slot: ");
                    scanf("%d",&ts1);
                }
                if (a=='n')
                    menu();

                while(ts1>=3)
                {
                    printf("\nInvalid time slot kindly enter it again\nTime slot: ");
                    scanf("%d",&ts1);
                }
            }
            if (ts1==2)
             printf("YOUR APPOINRTMENT HAS BEEN BOOKED!\n");

        }
    }


    if (ts==1||ts==2||ts1==2)
    {
        fflush(stdin);
        printf("Name: ");
        gets(p.name);
        fflush(stdin);
        printf("contact number: ");
        gets(p.contact);
        fflush(stdin);
        printf("address: ");
        gets(p.address);
        fflush(stdin);
        printf("Age: ");
        scanf("%d",&p.age);

        system("cls");
        FILE *fp = fopen("patient.txt","a+");
        if(fp==NULL)
            exit(1);
        printf("========================\n");
        printf(" APPOINTMENT BOOKED FOR: \n");
        printf("========================\n");
        fprintf(fp,"\n========================\n");
        fprintf(fp," APPOINTMENT BOOKED FOR: \n");
        fprintf(fp,"========================\n");
        printf("\nName: %s\nContact #: %s\nAddress: %s\nAge: %d\n",p.name,p.contact,p.address,p.age);
        fprintf(fp,"\nName: %s\nContact #: %s\nAddress: %s\nAge: %d\n",p.name,p.contact,p.address,p.age);
        if(choice==2 && doc==1)
        {
            printf("Speciality: Cardiologist\nDoctor:Dr Masood\n");
            if(ts==1&& day==1)
            {
                printf("Day: Monday\nTime: 9:00-10:00\n");
                fprintf(fp,"Day: Monday\nTime: 9:00-10:00\n");
            }
            if(ts==2&& day==1)
            {
                printf("Day: Monday\nTime: 10:15-11:15\n");
                fprintf(fp,"Day: Monday\nTime: 10:15-11:15\n");
            }
            if(ts==1 && day==2)
            {
                printf("Day:Friday\nTime:20:00-20:45\n");
                fprintf(fp,"Day:Friday\nTime:20:00-20:45\n");
            }
            if(ts==2 && day==2)
            {
                printf("Day:Friday\nTime:21:15-22:00\n");
                fprintf(fp,"Day:Friday\nTime:20:00-20:45\n");
            }

        }
        if (choice==2 && doc==2)
        {
            printf("Speciality: Cardiologist\nDoctor:Dr Ali\n");
            fprintf(fp,"Speciality: Cardiologist\nDoctor:Dr Ali\n");
            if(ts1==2)
            {
                printf("Day:Tuesday\nTime: 15:00-16:15\n");
                fprintf(fp,"Day:Tuesday\nTime: 15:00-16:15\n");
            }
        }
   }

    getch();
}

void emergency()
{
    system("CLS");
    int doc;

    printf("Doctors :\n1-Dr Ahmed  \t\t\t\t\t\t\t2-Dr Amna\n");
    printf("Primary care doctor(FOR ADULTS)\t\t\t\t\t");
    printf("Pediatricians\n");
    printf("\nPress 1 or 2 to Choose A Doctor: ");
    scanf("%d",&doc);
    while(doc>=3)
    {
        printf("you made an invalid choice\nDoctor: ");
        scanf("%d",&doc);
    }

    if(doc==1)
        doc1();
    if(doc==2)
        doc2();

    system("cls");
    FILE *fp = fopen("patient.txt","a+");
    if(fp==NULL)
        exit(1);
    printf("========================\n");
    printf(" APPOINTMENT BOOKED FOR: \n");
    printf("========================\n");
    fprintf(fp,"\n========================\n");
    fprintf(fp," APPOINTMENT BOOKED FOR: \n");
    fprintf(fp,"========================\n");
    printf("\nName: %s\nContact #: %s\nAddress: %s\nAge: %d\n",p.name,p.contact,p.address,p.age);
    fprintf(fp,"\nName: %s\nContact #: %s\nAddress: %s\nAge: %d\n",p.name,p.contact,p.address,p.age);

    if(doc==1)
    {
        printf("Primary Care Doctor (for adults)\nDr.Ahmed\n");
        fprintf(fp,"Primary Care Doctor (for adults)\nDr.Ahmed\n");
    }
    if(doc==2)
    {
        printf("Pediatrician: Dr.Amna");
        fprintf(fp,"Pediatrician: Dr.Amna");
    }
    printf("\nTime: %d:%d",p.ptime.hr,p.ptime.min);
    printf("\nDate: %d/%d",p.ptime.date,p.ptime.mon);
    printf("\nDay: %s",p.ptime.week);
    fprintf(fp,"\nTime: %d:%d",p.ptime.hr,p.ptime.min);
    fprintf(fp,"\nDate: %d/%d",p.ptime.date,p.ptime.mon);
    fprintf(fp,"\nDay: %s",p.ptime.week);
    fclose(fp);
    getch();
}

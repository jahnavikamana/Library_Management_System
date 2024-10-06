#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>


struct book{
    char name[30];
    char author[30];
    int id;
    struct book *next;
};

struct student{
    char name[30];
    char email[20];
    char book[20];
    char a[30];
    int id;
    struct student *next;
};

struct book *start_lib=NULL;
struct student *start=NULL;
struct book *initialize_lib(struct book *);
struct student *book_issue(struct student *);
struct student *book_return(struct student *);
struct book *diplay_lib(struct book *);
struct book *delete_book(int);
struct book *add_book(char [],char [],int);
void display(struct student *);
void greetings();
void main_menu();

int main(){
    start_lib=initialize_lib(start_lib);
    greetings();
    main_menu();
    return 0;
}

void greetings(){
    printf("\n\n");
    printf("\t\t\t     ****************************************\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *     ---------------    *\n");
    printf("\t\t\t     *      WELCOME TO STUDENT LIBRARY      *\n");
    printf("\t\t\t     *     --------------     *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     ****************************************\n");
    printf("\n\n");
    printf("\t\t\t     ****************************************\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *       ------------------------       *\n");
    printf("\t\t\t     *           STUDENT LIBRARY            *\n");
    printf("\t\t\t     *       ------------------------       *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *        SRM AP UNIVERSITY             *\n");
    printf("\t\t\t     *        Email:librarian.srmap.edu.in  *\n");
    printf("\t\t\t     *        Contact:8138188898            *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     ****************************************\n");
    printf("\n\n\t\t\t             Press any key to continue: ");
    getch();
}

void main_menu(){
    int choice;
    do{
        printf("\n\n");
        printf("\n\t\t\t*\n");
        printf("\n\t\t\t\t      MAIN MENU: ");
        printf("\n\t\t\t\t     1.ISSUE OF BOOKS ");
        printf("\n\t\t\t\t     2.RETURN OF BOOKS ");
        printf("\n\t\t\t\t     3.DISPLAY STUDENT DETAILS ");
        printf("\n\t\t\t\t     4.EXIT\n ");
        printf("\n\t\t\t*\n");
        printf("\n\t\t\t\t      Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                start=book_issue(start);
                break;
            }
            case 2:{
                start=book_return(start);
                break;
            }
            case 3:{
                display(start);
                break;
            }
            case 4:{
                exit(1);
            }
            default:{
                printf("\n\t\t\t\t      ...Invalid Option!...\n");
                printf("\n\t\t\t\t      Press any key to try again: ");
                getch();
            }
        }
    }while(choice!=4);
}

struct book *initialize_lib(struct book *start){
    struct book *ptr,*new_book1,*new_book2,*new_book3,*new_book4,*new_book5,*new_book6,*new_book7,*new_book8,*new_book9,*new_book10,*new_book11,*new_book12,*new_book13,*new_book14,*new_book15,*new_book16,*new_book17,*new_book18,*new_book19,*new_book20;

    new_book1=(struct book *)malloc(sizeof(struct book));
    new_book1->next=NULL;
    start_lib=new_book1;
    strcpy(new_book1->name,"Five Feet Apart");
    strcpy(new_book1->author,"Rachael Lippincott");
    new_book1->id=101;
    ptr=new_book1;

    new_book2=(struct book*)malloc(sizeof(struct book));
    new_book2->next=NULL;
    strcpy(new_book2->name,"To Kill A Mockingbird");
    strcpy(new_book2->author,"Harper Lee");
    new_book2->id=102;
    ptr->next=new_book2;
    ptr=new_book2;

    new_book3=(struct book*)malloc(sizeof(struct book));
    new_book3->next=NULL;
    strcpy(new_book3->name,"The Alchemist");
    strcpy(new_book3->author,"Paulo Coelho");
    new_book3->id=103;
    ptr->next=new_book3;
    ptr=new_book3;

    new_book4=(struct book*)malloc(sizeof(struct book));
    new_book4->next=NULL;
    strcpy(new_book4->name,"Pride And Prejudice");
    strcpy(new_book4->author,"Jane Austen");
    new_book4->id=104;
    ptr->next=new_book4;
    ptr=new_book4;

    new_book5=(struct book*)malloc(sizeof(struct book));
    new_book5->next=NULL;
    strcpy(new_book5->name,"What's Not To Love'");
    strcpy(new_book5->author,"Austin Seigemund and Emily Wibberly");
    new_book5->id=105;
    ptr->next=new_book5;
    ptr=new_book5;
    
    new_book6=(struct book*)malloc(sizeof(struct book));
    new_book6->next=NULL;
    strcpy(new_book6->name,"13 Reasons Why");
    strcpy(new_book6->author,"Asher Jay");
    new_book6->id=106;
    ptr->next=new_book6;
    ptr=new_book6;
    
    new_book7=(struct book*)malloc(sizeof(struct book));
    new_book7->next=NULL;
    strcpy(new_book7->name,"Speak");
    strcpy(new_book7->author,"Laurie Halse Anderson");
    new_book7->id=107;
    ptr->next=new_book7;
    ptr=new_book7;
    
    new_book8=(struct book*)malloc(sizeof(struct book));
    new_book8->next=NULL;
    strcpy(new_book8->name,"It's Kind Of A Funny story");
    strcpy(new_book8->author,"Ned Vizzini");
    new_book8->id=108;
    ptr->next=new_book8;
    ptr=new_book8;
    
    new_book9=(struct book*)malloc(sizeof(struct book));
    new_book9->next=NULL;
    strcpy(new_book9->name,"The Great Gatsby");
    strcpy(new_book9->author,"Scott Fitzerald");
    new_book9->id=109;
    ptr->next=new_book9;
    ptr=new_book9;
    
    new_book10=(struct book*)malloc(sizeof(struct book));
    new_book10->next=NULL;
    strcpy(new_book10->name,"Merchant of Vanice");
    strcpy(new_book10->author,"Wiiliam shakesphere");
    new_book10->id=110;
    ptr->next=new_book10;
    ptr=new_book10;
    
    new_book11=(struct book*)malloc(sizeof(struct book));
    new_book11->next=NULL;
    strcpy(new_book11->name,"Twisted Love");
    strcpy(new_book11->author,"Ana Huang");
    new_book11->id=111;
    ptr->next=new_book11;
    ptr=new_book11;
    
    new_book12=(struct book*)malloc(sizeof(struct book));
    new_book12->next=NULL;
    strcpy(new_book12->name,"Twisted Hate");
    strcpy(new_book12->author,"Ana Huang");
    new_book12->id=112;
    ptr->next=new_book12;
    ptr=new_book12;
    
    new_book13=(struct book*)malloc(sizeof(struct book));
    new_book13->next=NULL;
    strcpy(new_book13->name,"Twisted Games");
    strcpy(new_book13->author,"Ana Huang");
    new_book13->id=113;
    ptr->next=new_book13;
    ptr=new_book13;
    
    new_book14=(struct book*)malloc(sizeof(struct book));
    new_book14->next=NULL;
    strcpy(new_book14->name,"Twisted Lies");
    strcpy(new_book14->author,"Ana Huang");
    new_book14->id=114;
    ptr->next=new_book14;
    ptr=new_book14;
    
    new_book15=(struct book*)malloc(sizeof(struct book));
    new_book15->next=NULL;
    strcpy(new_book15->name,"Verity");
    strcpy(new_book15->author,"Colleen Hoover");
    new_book15->id=115;
    ptr->next=new_book15;
    ptr=new_book15;
    
    new_book16=(struct book*)malloc(sizeof(struct book));
    new_book16->next=NULL;
    strcpy(new_book16->name,"One Of Us Is Lying");
    strcpy(new_book16->author,"Karren M McManus");
    new_book16->id=116;
    ptr->next=new_book16;
    ptr=new_book16;
    
    new_book17=(struct book*)malloc(sizeof(struct book));
    new_book17->next=NULL;
    strcpy(new_book17->name,"The Perks Of Being A Wallflower");
    strcpy(new_book17->author,"stephen chbosky");
    new_book17->id=117;
    ptr->next=new_book17;
    ptr=new_book17;
    
    new_book18=(struct book*)malloc(sizeof(struct book));
    new_book18->next=NULL;
    strcpy(new_book18->name,"The Fault In Our Stars");
    strcpy(new_book18->author,"John Green");
    new_book18->id=118;
    ptr->next=new_book18;
    ptr=new_book18;
    
    new_book19=(struct book*)malloc(sizeof(struct book));
    new_book19->next=NULL;
    strcpy(new_book19->name,"The Hound Of Baskerivelles");
    strcpy(new_book19->author,"Conon Doyle");
    new_book19->id=119;
    ptr->next=new_book19;
    ptr=new_book19;
    
    new_book20=(struct book*)malloc(sizeof(struct book));
    new_book20->next=NULL;
    strcpy(new_book20->name,"A Good Girl's Guide To Murder");
    strcpy(new_book20->author,"Holly Jackson");
    new_book20->id=120;
    ptr->next=new_book20;
    new_book20->next=NULL;
    
    return start_lib;
}

struct student *book_issue(struct student *start){
    struct book *ptr;
    struct student *ptr2,*new_student;
    int i=1,id,flag=0;
    if(start_lib==NULL){
        printf("\n\t\t\t\t No books left in the library to issue!\n\t\t\t\t Sorry for the inconvenience!\n");
    }else{
        system("cls");
        ptr=start_lib;
        printf("\n\t*************** Books Available: ****************\n");
        while(ptr!=NULL){
            printf("\n\t_\n");
            printf("\n\t Book %d",i);
            printf("\n\t Book Title: %s",ptr->name);
            printf("\n\t Name of Author: %s",ptr->author);
            printf("\n\t Book ID: %d",ptr->id);
            printf("\n\t_\n");
            ptr=ptr->next;
            i++;
        }
        printf("\n\n\t Enter the Book ID: ");
        scanf("%d",&id);
        ptr=start_lib;
        while(ptr!=NULL){
            if(ptr->id==id){
                flag=1;
                break;
            }
            ptr=ptr->next;
        }
        if(flag==1){
            ptr=start_lib;
            while(ptr->id!=id){
                ptr=ptr->next;
            }
            new_student=(struct student *)malloc(sizeof(struct student));
            printf("\n\t Enter Student Details:\n ");
            printf("\n\t Enter your Name: ");
            scanf("%s",new_student->name);
            printf("\n\t Enter your Email: ");
            scanf("%s",new_student->email);
            strcpy(new_student->book,ptr->name);
            strcpy(new_student->a,ptr->author);
            new_student->id=ptr->id;
            new_student->next=NULL;
            printf("\n\t Issue of Book ID %d done successfully!\n",new_student->id);
            printf("\n\n\t*\n");
            if(start==NULL){
                start=new_student;
            }else{
                ptr2=start;
                while(ptr2->next!=NULL){
                    ptr2=ptr2->next;
                }
                ptr2->next=new_student;
            }
            start_lib=delete_book(new_student->id);
            printf("\n\n\t Press any key to go to the main menu: ");
            getch();
            system("cls");
        }else{
            printf("\n\t\t      ...Invalid Option!...\n");
            printf("\n\t\t      Press any key to try again: ");
            getch();
            system("cls");
        }
    }
    return start;
}

struct student *book_return(struct student *start){
    struct student *ptr,*preptr;
    char bookname[30],authorname[30];
    int flag=0,id,identity,c=0,d=1;
    printf("\n\n\t*************** Books Submission: ****************\n");
    printf("\n\n\t Enter your Book ID: ");
    scanf("%d",&identity);
    ptr=start;
    while(ptr!=NULL){
        if(ptr->id==identity){
            flag=1;
            break;
        }
        ptr=ptr->next;
    }
    if(flag==1){
        ptr=start;
        while(ptr!=NULL){
            c++;
            ptr=ptr->next;
        }
        ptr=start;
        while(ptr->id!=identity){
                d++;
            ptr=ptr->next;
        }
        ptr=start;
        if( d==1 ){
            printf("\n\t_\n");
            printf("\n\t Student Name: %s",start->name);
            printf("\n\t Student Email: %s",start->email);
            printf("\n\t Name of Book Issued: %s",start->book);
            printf("\n\t_\n");
            printf("\n\n\t Return of Book ID %d done successfully!\n",identity);
            printf("\n\n\t*\n");
            strcpy(bookname,start->book);
            strcpy(authorname,start->a);
            id=start->id;
            start=start->next;
            free(ptr);
            add_book(bookname,authorname,id);
        }else{
            ptr=start;
            while(ptr->id!=identity){
                preptr=ptr;
                ptr=ptr->next;
            }
            printf("\n\t_\n");
            printf("\n\t Student Name: %s",ptr->name);
            printf("\n\t Student Email: %s",ptr->email);
            printf("\n\t Name of Book Issued: %s",ptr->book);
            printf("\n\t Book ID: %d",ptr->id);
            printf("\n\t_\n");
            strcpy(bookname,ptr->book);
            strcpy(authorname,ptr->a);
            id=ptr->id;
            preptr->next=ptr->next;
            free(ptr);
            add_book(bookname,authorname,id);
        }
        printf("\n\t Thank you! \n\t Do visit again! ");
        printf("\n\n\t Press any key to go to the main menu: ");
        getch();
        system("cls");
    }else{
        printf("\n\tSorry the book doesn't exist! Please recheck the entered ID");
        printf("\n\t\t\t\t      Press any key to try again: ");
        getch();
        system("cls");
    }
    return start;
}

void display(struct student *start){
    struct student *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("\n\t************* Details of Students: **************\n");
        printf("\n\t_\n");
        printf("\n\t\t Student Name: %s",ptr->name);
        printf("\n\t\t Student Email: %s",ptr->email);
        printf("\n\t\t Name of Book Issued: %s",ptr->book);
        printf("\n\t\t Book ID: %d",ptr->id);
        printf("\n\t_\n");
        printf("\n\n\t*\n");
        ptr=ptr->next;
    }
    printf("\n\n\t Press any key to go to the main menu: ");
    getch();
    system("cls");
}

struct book *delete_book(int id){
    struct book *ptr,*preptr;
    int c=0;
    ptr=start_lib;
    while(ptr!=NULL){
        c++;
        ptr=ptr->next;
    }
    if(c==1){
        ptr=start_lib;
        start_lib=NULL;
        free(ptr);
    }else if(start_lib->id==id){
        ptr=start_lib;
        start_lib=start_lib->next;
        free(ptr);
    }else{
        ptr=start_lib;
        while(ptr->id!=id){
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        free(ptr);
    }
    return start_lib;
}

struct book *add_book(char bookname[30],char authorname[30],int id){
    struct book *ptr,*new_book;
    new_book=(struct book *)malloc(sizeof(struct book));
    strcpy(new_book->name,bookname);
    strcpy(new_book->author,authorname);
    new_book->id=id;
    new_book->next=NULL;
    if(start_lib==NULL){
        start_lib=new_book;
    }else{
        ptr=start_lib;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new_book;
    }
    return start_lib;
}
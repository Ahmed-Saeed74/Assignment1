#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int x;
    char firstName[50];
    int id;
    int day;
    int month;
    int year;
    int score;
    struct Student *next;
}*head ;
int size;
int i = 1;
int j = 1;
int k=0;
int z = 0;
int N;
struct Student *ptr;
void insert(int x, char* firstName, int id ,int day,int month,int year, int score)
{

    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    strcpy(student->firstName, firstName);
    student->id = id;
    student->x = x;
    student->day = day;
    student->month = month;
    student->year = year;
    student->score = score;
    student->next = NULL;
    switch(x)
    {
case 1:
            if(head==NULL){
        // if head is NULL
        // set student as the new head
        head = student;
    }
    else{
        // if list is not empty
        // insert student in beginning of head
        student->next = head;
        head = student;
    }
    size++;
    i++;
    break;

case 2: ;
    struct Student * temp = head;
    if(head==NULL){
        // if head is NULL
        // set student as the new head
        head = student;
    }
    else{
        // if list is not empty
        // insert student in beginning of head
        temp = head;
        while(temp->next!=NULL)
		temp=temp->next;
		temp->next=student;
    }
    size++;
    i++;
    break;

case 3: ;



    //Checks if the list is empty
    if(head == NULL) {
        //If list is empty, both head and tail would point to new node
        head = student;

    }
    else {
        struct Student *temp2, *current;
        //Store the mid position of the list
        int count = (size % 2 == 0) ? (size/2) : ((size+1)/2);
        //Node temp will point to head
        temp2 = head;
        current = NULL;

        //Traverse through the list till the middle of the list is reached
        for(int i = 0; i < count; i++) {
            //Node current will point to temp
            current = temp2;
            //Node temp will point to node next to it.
            temp2 = temp2->next;
        }

        //current will point to new node
        current->next = student;
        //new node will point to temp
        student->next = temp2;
    }
    size++;
    i++;
break;
    }
}


void insertDynamic(int y, char* firstName, int id ,int day,int month,int year, int score)
{

  // Memory allocation for noOfRecords structures
  ptr = (struct Student *)malloc(N * sizeof(struct Student));
  strcpy(ptr[k].firstName , firstName);
  ptr[k].id = id;
  ptr[k].day = day;
  ptr[k].month = month;
  ptr[k].year = year;
  ptr[k].score = score;

switch(y){

    case 1:
                 for(int k = N-1;k>=0;k--){
  strcpy(ptr[k+1].firstName ,ptr[k].firstName) ;
  ptr[k+1].id =ptr[k].id ;
  ptr[k+1].day =ptr[k].day ;
  ptr[k+1].month =ptr[k].month ;
  ptr[k+1].year =ptr[k].year ;
  ptr[k+1].score =ptr[k].score ;}
  strcpy(ptr[0].firstName ,ptr[k+z].firstName) ;
  ptr[0].id =ptr[k+z].id ;
  ptr[0].day =ptr[k+z].day ;
  ptr[0].month =ptr[k+z].month ;
  ptr[0].year =ptr[k+z].year ;
  ptr[0].score =ptr[k+z].score ;
                k++;
                j++;
                z++;
                free(ptr);

                break;

    case 2:
                k++;
                j++;
                z++;
                free(ptr);
                break;

    case 3: ;
      if (k=0){
          strcpy(ptr[0].firstName , firstName);
  ptr[0].id = id;
  ptr[0].day = day;
  ptr[0].month = month;
  ptr[0].year = year;
  ptr[0].score = score;
                k++;
                j++;
                z++;
                free(ptr);
                break;
      }
      else{
                int count = (z % 2 == 0) ? (z/2) : ((z+1)/2);
                for(int k = N-1;k>=count;k--){
  strcpy(ptr[k+1].firstName ,ptr[k].firstName) ;
  ptr[k+1].id =ptr[k].id ;
  ptr[k+1].day =ptr[k].day ;
  ptr[k+1].month =ptr[k].month ;
  ptr[k+1].year =ptr[k].year ;
  ptr[k+1].score =ptr[k].score ;}
  strcpy(ptr[count].firstName ,ptr[k+z].firstName) ;
  ptr[count].id =ptr[k+z].id ;
  ptr[count].day =ptr[k+z].day ;
  ptr[count].month =ptr[k+z].month ;
  ptr[count].year =ptr[k+z].year ;
  ptr[count].score =ptr[k+z].score ;
                k++;
                j++;
                z++;
                free(ptr);

                break;
      }
}
}
void display()
{
    struct Student * temp = head;
    system("cls");
    while(temp!=NULL){

        printf("firstName: %s\n", temp->firstName);
        printf("id: %d\n", temp->id);
        printf("date of birth [%d", temp->day);
        printf(" %d", temp->month);
        printf(" %d]\n", temp->year);
        printf("score: %d\n\n", temp->score);
        temp = temp->next;

    }
}

void displayDynamic ()
{int k = 0;
    printf("Displaying Information:\n");
while(k!=N){
    printf("firstName: %s\n", ptr[k].firstName);
        printf("id: %d\n", ptr[k].id);
        printf("date of birth [%d", ptr[k].day);
        printf(" %d", ptr[k].month);
        printf(" %d]\n", ptr[k].year);
        printf("score: %d\n\n", ptr[k].score);
        k++;
}

}
int main()
{
    printf(" \n\n\n\n\n\t\t\t\t\t          *  *  *  *  *  *  *  *");
		printf("\n\n\t\t\t\t\t          *                    *");
		printf("\n\n\t\t\t\t\t          *       Welcome      *");
		printf("\n\n\t\t\t\t\t          *                    *");
		printf("\n\n\t\t\t\t\t          *  *  *  *  *  *  *  *");
		printf("\n\n\n\n\n\t\t\t\t\t      Press any key to continue...... ");
		getch();
		system("cls");

head = NULL;
    int choice;
    char firstName[100];
    int x;
    int y;

    int id;
    int day;
    int month;
    int year;
    int score;





    printf("number of students you want to insert: ");
    scanf("%d", &N);

    printf("1 to insert student details using linkedlists\n2 to display all student details using linkedlists\n3 to insert student details using dynamic arrays\n4 to display student details using dynamic arrays\n");
    do
    {
        if (i>N)
    {
        display();
        exit(0);
    }

    if (j>N)
    {
        displayDynamic();
        exit(0);
    }
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter 1 if you want to insert in the beginning\nEnter 2 if you want to insert in the end\nEnter 3 if you want insert in the middle\nEnter x: ");
                scanf("%d", &x);
                printf("Enter id: ");
                scanf("%d", &id);
                printf("Enter firstName: ");
                scanf("%s", firstName);
                printf("Enter dateOfBirth..........Enter day: ");
                scanf("%d", &day);
                printf("Enter month: ");
                scanf("%d", &month);
                printf("Enter year: ");
                scanf("%d", &year);
                printf("Enter score: ");
                scanf("%d", &score);
                insert(x , firstName , id , day , month, year , score);
                break;

            case 2:
                display();
                break;

            case 3:




                for (int k = 0; k < N; ++k) {
                printf("Enter 1 if you want to insert in the beginning\nEnter 2 if you want to insert in the end\nEnter 3 if you want insert in the middle\nEnter y: ");
                scanf("%d",  &y);
                printf("Enter id: ");
                scanf("%d", &id);
                printf("Enter firstName: ");
                scanf("%s", firstName);
                printf("Enter dateOfBirth..........Enter day: ");
                scanf("%d", &day);
                printf("Enter month: ");
                scanf("%d", &month);
                printf("Enter year: ");
                scanf("%d", &year);
                printf("Enter score: ");
                scanf("%d", &score);

                insertDynamic(y , firstName , id , day , month, year , score);}
                break;

            case 4:
                displayDynamic();
                break;
        }

    } while (choice != 0);

    return 0;
}

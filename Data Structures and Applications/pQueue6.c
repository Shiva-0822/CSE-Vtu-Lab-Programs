/*7. Develop a menu driven Program in C for the following operations on Singly Linked
List (SLL) of Student Data with the fields: USN, Name, Programme, Sem, PhNo
a. Create a SLL of N Students Data by using front insertion.
b. Display the status of SLL and count the number of nodes in it
c. Perform Insertion / Deletion at End of SLL
d. Perform Insertion / Deletion at Front of SLL(Demonstration of stack)
e. Exit */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Structure to represent student data
typedef struct Student
{
    char USN[15];
    char Name[50];
    char Programme[50];
    int Sem;
    char PhNo[15];
    struct Student *next;
} Student;
// Function prototypes
void createSLL(Student **head, int n);
void displaySLL(Student *head);
void insertAtEnd(Student **head);
void deleteAtEnd(Student **head);
void insertAtFront(Student **head);
void deleteAtFront(Student **head);
int countNodes(Student *head);
// Main function
int main()
{
    Student *head = NULL;
    int choice, n;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Create SLL of N Students Data\n");
        printf("2. Display SLL and count nodes\n");
        printf("3. Insert at End\n");
        printf("4. Delete at End\n");
        printf("5. Insert at Front\n");
        printf("6. Delete at Front\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number of students to create: ");
            scanf("%d", &n);
            createSLL(&head, n);
            break;
        case 2:
            displaySLL(head);
            break;
        case 3:
            insertAtEnd(&head);
            break;
        case 4:
            deleteAtEnd(&head);
            break;
        case 5:
            insertAtFront(&head);
            break;
        case 6:
            deleteAtFront(&head);
            break;
        case 7:
            printf("Exiting the program.\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
// Function to create the SLL
void createSLL(Student **head, int n)
{
    for (int i = 0; i < n; i++)
    {
        Student *newStudent = (Student *)malloc(sizeof(Student));
        if (!newStudent)
        {
            printf("Memory allocation failed.\n");
            return;
        }
        printf("Enter USN: ");
        scanf("%s", newStudent->USN);
        printf("Enter Name: ");
        scanf("%s", newStudent->Name);
        printf("Enter Programme: ");
        scanf("%s", newStudent->Programme);
        printf("Enter Semester: ");
        scanf("%d", &newStudent->Sem);
        printf("Enter Phone Number: ");
        scanf("%s", newStudent->PhNo);
        newStudent->next = *head; // Insert at the front
        *head = newStudent;       // Update head
    }
}
// Function to display the SLL and count nodes
void displaySLL(Student *head)
{
    if (!head)
    {
        printf("The list is empty.\n");
        return;
    }
    int count = 0;
    printf("\n Student List:\n");
    while (head)
    {
        printf(" USN: %s\n Name: %s\n Programme: %s\n Sem: %d\n, Phone: %s\n",
               head->USN, head->Name, head->Programme, head->Sem, head->PhNo);
        head = head->next;
        count++;
    }
    printf("Total number of students: %d\n", count);
}
// Function to insert a new node at the end
void insertAtEnd(Student **head)
{
    Student *newStudent = (Student *)malloc(sizeof(Student));
    if (!newStudent)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter USN: ");
    scanf("%s", newStudent->USN);
    printf("Enter Name: ");
    scanf("%s", newStudent->Name);
    printf("Enter Programme: ");
    scanf("%s", newStudent->Programme);
    printf("Enter Semester: ");
    scanf("%d", &newStudent->Sem);
    printf("Enter Phone Number: ");
    scanf("%s", newStudent->PhNo);

    newStudent->next = NULL;
    if (*head == NULL)
    {
        *head = newStudent; // List is empty
        return;
    }
    Student *temp = *head;
    while (temp->next)
    {
        temp = temp->next; // Traverse to the end
    }
    temp->next = newStudent; // Insert new node at the end
}
// Function to delete a node at the end
void deleteAtEnd(Student **head)
{
    if (*head == NULL)
    {
        printf("The list is empty. No node to delete.\n");
        return;
    }
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL; // List becomes empty
        return;
    }
    Student *temp = *head;
    while (temp->next->next)
    {
        temp = temp->next; // Traverse to the second last node
    }
    free(temp->next);  // Delete last node
    temp->next = NULL; // Set next of second last node to NULL
}
// Function to insert a new node at the front
void insertAtFront(Student **head)
{
    Student *newStudent = (Student *)malloc(sizeof(Student));
    if (!newStudent)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter USN: ");
    scanf("%s", newStudent->USN);
    printf("Enter Name: ");
    scanf("%s", newStudent->Name);
    printf("Enter Programme: ");
    scanf("%s", newStudent->Programme);
    printf("Enter Semester: ");
    scanf("%d", &newStudent->Sem);
    printf("Enter Phone Number: ");
    scanf("%s", newStudent->PhNo);
    newStudent->next = *head; // Link new node to the current head
    *head = newStudent;       // Update head to the new node
}
// Function to delete a node at the front
void deleteAtFront(Student **head)
{
    if (*head == NULL)
    {
        printf("The list is empty. No node to delete.\n");
        return;
    }
    Student *temp = *head; // Temporarily store the head
    *head = (*head)->next; // Update head to the next node
    free(temp);            // Free the old head
}
// Function to count nodes in the SLL
int countNodes(Student *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}
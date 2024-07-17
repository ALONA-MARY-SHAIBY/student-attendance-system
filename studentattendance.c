#include <stdio.h> 
#include <stdlib.h>
#define MAX_STUDENTS 50
#define MAX_DAYS 30 
 struct Student {
     int  s_id;
     char name[30];
     int attendance[MAX_DAYS];
      };
struct Student students[MAX_STUDENTS];
 int num_stds = 0;
void inputStudentData() {
     if (num_stds < MAX_STUDENTS) { 
        printf("Enter student ID: "); 
        scanf("%d", &students[num_stds].s_id);
        printf("Enter student name: "); 
        scanf("%s", students[num_stds].name); 
        for (int day = 0; day < MAX_DAYS; ++day) { 
            printf("Enter attendance for day %d:", day + 1); 
            scanf("%d", &students[num_stds].attendance[day]); 
            } 
            num_stds++; 
            }
    else { 
        printf("Maximum number of students reached.\n"); 
        } 
        }
void AttendanceReport() {  
    for (int i = 0; i < num_stds; ++i) { 
        int p_count = 0; 
        for (int j = 0; j < MAX_DAYS; ++j) { 
            if (students[i].attendance[j] == 1) { 
                p_count++; 
                } 
                } 
                float attendance_percentage = (float)p_count / MAX_DAYS * 100.0; 
                printf("Student ID: %d, Name: %s, Attendance: %.2f%%\n", students[i].s_id, students[i].name, attendance_percentage); 
                } 
                }
                int main() { 
                    int choice; 
                    do { 
                        printf("\nAttendance Management System:\n"); 
                        printf("1. Input student data\n"); 
                        printf("2. Generate attendance report\n"); 
                        printf("3. Exit\n"); 
                        printf("Enter your choice: "); 
                        scanf("%d", &choice); 
                        switch (choice) { 
                            case 1: inputStudentData(); 
                            break; 
                            case 2: AttendanceReport(); 
                            break; 
                            case 3: 
                            printf("Exiting program.\n"); 
                            break; 
                            default: printf("Invalid choice. Please enter again.\n"); 
                            } 
                            } 
                            while (choice != 3); 
                            return 0; 
                            }



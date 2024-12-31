#include <iostream>

using namespace std;

class course {
public:
	int course_id;
	string course_name;
	string ta_first_name;
	string ta_second_name;
	int credit_hours;
	string course_discrption;
	void add_new_course(course courses[], int& num_of_courses) {
		cout << "please Enter the new course name:  \n";
		cin >> courses[num_of_courses].course_name;
		cout << "please Enter the new course id (in integer):  \n";
		cin >> courses[num_of_courses].course_id;
		cout << "please Enter the new course discrption:  \n";
		cin >> courses[num_of_courses].course_discrption;
		cout << "please enter the TA details: \n";
		cout << "please enter the TA first name: \n";
		cin >> courses[num_of_courses].ta_first_name;
		cout << "please enter the TA second name: \n";
		cin >> courses[num_of_courses].ta_second_name;
		cout << "please enter credit hours: \n";
		cin >> courses[num_of_courses].credit_hours;
		num_of_courses++;
	}
	void edit_course(course courses[], int num_of_courses) {
		int courseId, choice;
		cout << "please enter the course Id: ";
		cin >> courseId;
		for (int i = 0; i < num_of_courses; i++) {
			if (courses[i].course_id == courseId) {
				cout << "************\n";
				cout << "choice 1 : edit the name of course. \n";
				cout << "choice 2 : edit the course ID. \n";
				cout << "choice 3 : edit the course discrption. \n";
				cout << "choice 4 : edit the TA details(first name). \n";
				cout << "choice 5 : edit the TA details(second name). \n";
				cout << "choice 6 : edit the credit hours. \n";
				cout << "************\n";
				cout << "Enter your choice: \n";
				cin >> choice;
				switch (choice) {
				case 1:
					cout << "please enter the new course name: ";
					cin >> courses[i].course_name;
					break;
				case 2:
					cout << "please enter the new course id: ";
					cin >> courses[i].course_id;
					break;
				case 3:
					cout << "please enter the new course discrption: ";
					cin >> courses[i].course_discrption;
					break;
				case 4:
					cout << "please enter the new TA details(first name): ";
					cin >> courses[i].ta_first_name;
					break;
				case 5:
					cout << "please enter the new TA details(second name): ";
					cin >> courses[i].ta_second_name;
					break;
				case 6:
					cout << "please enter the new credit hours: ";
					cin >> courses[i].credit_hours;
					break;
				default:
					cout << "invalid choice\n";
					break;
				}
			}
			else {
				cout << "course not found. \n";
			}
		}
	}
	void delete_course(course courses[], int& num_of_courses) {
		int courseId;
		cout << "please enter the course id: ";
		cin >> courseId;
		for (int i = 0; i < num_of_courses; i++) {
			if (courses[i].course_id == courseId) {
				num_of_courses--;
				return;
			}
			else {
				cout << "course not found. \n";
			}
		}
	}
	void display_course_info(course courses[], int num_of_courses) {
		int courseId;
		cout << "please enter course Id: ";
		cin >> courseId;
		for (int i = 0; i < num_of_courses; i++) {
			if (courses[i].course_id == courseId) {
				cout << "************\n";
				cout << "course name is: " << courses[i].course_name << "\n";
				cout << "course ID is: " << courses[i].course_id << "\n";
				cout << "TA course name is: " << courses[i].ta_first_name + " " + courses[i].ta_second_name << "\n";
				cout << "credit hours = " << courses[i].credit_hours << "\n";
				cout << "course discrption = " << courses[i].course_discrption << "\n";
				cout << "************\n";
			}
			else {
				cout << "course not found. \n";
			}
		}
	}
};
class student {
public:
	course enrolled_courses[6];
	int student_id;
	float gpa;
	int num_of_completed_course;
	int num_of_enrolled_courses;
	string student_first_name;
	string student_second_name;
	string date_of_birth;
	string email;
	string telephone;
	string parents_num;
	void add_new_student(student students[],int& num_of_student){
		cout << "please Enter the new student id:  \n";
		cin >> students[num_of_student].student_id;
		cout << "please Enter the new student first name:  \n";
		cin>>students[num_of_student].student_first_name;
		cout << "please Enter the new student second name:  \n";
		cin >> students[num_of_student].student_second_name;
		cout << "please enter the  date of birth of new student(day/month/year):  \n";
		cin >> students[num_of_student].date_of_birth;
		cout << "please enter your contact info: \n";
		cout << "please enter your phone: \n";
		cin >> students[num_of_student].telephone;
		cout << "please enter your parents phone: \n";
		cin >> students[num_of_student].parents_num;
		cout << "please enter your email: \n";
		cin >> students[num_of_student].email;
		students[num_of_student].gpa = 0.0;
		students[num_of_student].num_of_completed_course = 0;
		students[num_of_student].num_of_enrolled_courses = 0;
		num_of_student++;
	}
	void edit_student(student students[],int num_of_student) {
		int studentId, choice;
		cout << "please enter the student Id: ";
		cin >> studentId;
		for (int i = 0; i < num_of_student; i++) {
			if (students[i].student_id == studentId) {
				cout << "************\n";
				cout << "choice 1 : edit the first name. \n";
				cout << "choice 2 : edit the second name. \n";
				cout << "choice 3 : edit the id. \n";
				cout << "choice 4 : edit the contact info(telephone). \n";
				cout << "choice 5 : edit the contact info(parents phone). \n";
				cout << "choice 6 : edit the contact info(email). \n";
				cout << "************\n";
				cout << "Enter your choice: \n";
				cin >> choice;
				switch (choice) {
				case 1:
					cout << "please enter the new first name: ";
					cin>>students[i].student_first_name;
					break;
				case 2:
					cout << "please enter the new second name: ";
					cin >> students[i].student_second_name;
					break;
				case 3:
					cout << "please enter the new date of birth (day/month/year): ";
					cin >> students[i].date_of_birth;
					break;
				case 4:
					cout << "please enter the new telephone: ";
					cin >> students[i].telephone;
					break;
				case 5:
					cout << "please enter the new parents phone: ";
					cin >> students[i].parents_num;
					break;
				case 6:
					cout << "please enter the new email: ";
					cin >> students[i].email;
					break;
				default:
					cout << "invalid choice\n";
					break;
				}
			}
			else {
				cout << "student not found. \n";
			}
		}
	}
	void delete_student(student students[], int& num_of_student) {
		int studentId;
		cout << "please enter student id: ";
		cin >> studentId;
		for (int i = 0; i < num_of_student; i++) {
			if (students[i].student_id == studentId) {
				num_of_student--;
				return;
			}
		}
	}
	void display_student_info(student students[], int num_of_student) {
		int studentId;
		cout << "please enter the id of student: ";
		cin >> studentId;
		for (int i = 0; i < num_of_student; i++) {
			if (students[i].student_id == studentId) {
				cout << "************\n";
				cout << "student name is: " << students[i].student_first_name + " " + students[i].student_second_name<<"\n";
				cout << "student Id is : " << students[i].student_id<<"\n";
				cout << "Date of birth : " << students[i].date_of_birth<<"\n";
				cout << "your contact info is: \n";
				cout << "your number is: " << students[i].telephone << "\n";
				cout << "your  parents number is: " << students[i].parents_num << "\n";
				cout << "your email is: " << students[i].email<< "\n";
				cout << "your gpa is: " << students[i].gpa << "\n";
				cout << "your num of completed courses is: " << students[i].num_of_completed_course << "\n";
				cout << "num of enrolled courses: " << students[i].num_of_enrolled_courses << "\n";
				cout << "************\n";
			}
			else {
				cout << "************\n";
				cout << "student not found.\n";
				cout << "************\n";
			}
		}
	}
	void enroll_course(student students[],course courses[], int num_of_student,int num_of_courses) {
		int studentId, courseId;
		cout << "please enter the student ID to enroll: ";
		cin >> studentId;
		cout << "\nplease enter the course ID to enroll in : ";
		cin >> courseId;
		for (int i = 0; i < num_of_student; i++) {
			if (students[i].student_id == studentId) {
				for (int j = 0; j < num_of_courses; j++) {
					if (courses[j].course_id == courseId) {
						if (students[i].num_of_enrolled_courses < 6) {
							students[i].enrolled_courses[students[i].num_of_enrolled_courses] = courses[j];
							students[i].num_of_enrolled_courses++;
						}
						else {
							cout << "the student has max num of courses. \n";
						}
					}
				}
			}
		}
	}
	void search_by_student_id(student students[], int num_of_student ) {
		int studentID;
		cout << "Please enter the student id: ";
		cin >> studentID;
		for (int i = 0; i < num_of_student; i++) {
			if (students[i].student_id == studentID){
				cout << "************\n";
				cout << "student name is: " << students[i].student_first_name + " " + students[i].student_second_name << "\n";
				cout << "student Id is : " << students[i].student_id << "\n";
				cout << "your gpa is: " << students[i].gpa << "\n";
				cout << "your num of completed courses is: " << students[i].num_of_completed_course << "\n";
				cout << "num of enrolled courses: " << students[i].num_of_enrolled_courses << "\n";
				cout << "Enrolled courses: \n";
				for (int j = 0; j < students[i].num_of_enrolled_courses; j++) {
					cout << "course name is: " << students[i].enrolled_courses[j].course_name << "\n";
					cout << "course ID is: " << students[i].enrolled_courses[j].course_id << "\n";
					cout << "TA course name is: " << students[i].enrolled_courses[j].ta_first_name + " " + students[i].enrolled_courses[j].ta_second_name << "\n";
						cout << "credit hours = " << students[i].enrolled_courses[j].credit_hours << "\n";
				}
				cout << "************\n";
			}
			else {
				cout << "************\n";
				cout << "student not found.\n";
				cout << "************\n";
			}
		}

	}
	void withdraw(student students[], int num_of_student, int num_of_courses) {
		int studentID, courseID;
		cout << "please enter the student id: ";
		cin >> studentID;
		cout << "please enter the course id: ";
		cin >> courseID;
		for (int i = 0; i < num_of_student; i++) {
			if (students[i].student_id == studentID) {
				for (int j = 0; j < students[i].num_of_enrolled_courses; j++) {
					if (students[i].enrolled_courses[j].course_id == courseID) {
						for (int k = j; k < students[i].num_of_enrolled_courses-1; k++) {
							students[i].enrolled_courses[k] = students[i].enrolled_courses[k + 1];
						}
						students[i].num_of_enrolled_courses--;
					}
				}
			}
		}
	}
};
void search_by_course_id(course courses[], student students[], int num_of_student, int num_of_courses) {
	int courseID;
	cout << "please enter the course ID: ";
	cin >> courseID;
	cout << "Enrolled students: \n";
	for (int i = 0; i < num_of_student; i++) {
		for (int j = 0; j < students[i].num_of_enrolled_courses; j++) {
			if (students[i].enrolled_courses[j].course_id == courseID) {
				cout << "************\n";
				cout << "student name is: " << students[i].student_first_name + " " + students[i].student_second_name << "\n";
				cout << "student Id is : " << students[i].student_id << "\n";
				cout << "your gpa is: " << students[i].gpa << "\n";
				cout << "course name is: " << students[i].enrolled_courses[j].course_name << "\n";
				cout << "course ID is: " << students[i].enrolled_courses[j].course_id << "\n";
				cout << "TA course name is: " << students[i].enrolled_courses[j].ta_first_name + " " + students[i].enrolled_courses[j].ta_second_name << "\n";
				cout << "credit hours = " << students[i].enrolled_courses[j].credit_hours << "\n";
				cout << "************\n";
			}
		}
	}
	cout << "course not found.\n";
}

int main()
{
	const int students = 100;
	const int courses = 50;
	int num_of_student = 0;
	int num_of_courses = 0;
	course c[courses];
	student s[students];
	int choice;
	do {
		cout << "choice 1 : Add new student.\n";
		cout << "choice 2 : Edit student.\n";
		cout << "choice 3 : Delete student.\n";
		cout << "choice 4 : display_student_info.\n";
		cout << "choice 5 : Add new course.\n";
		cout << "choice 6 : Edit course.\n";
		cout << "choice 7 : Delete_course.\n";
		cout << "choice 8 : Display_course_info.\n";
		cout << "choice 9 : Enroll_course.\n";
		cout << "choice 10 : Search_by_student_id.\n";
		cout << "choice 11 : Search_by_course_id.\n";
		cout << "choice 12 : Withdraw.\n";
		cout << "choice = 0 : Exit\n";
		cout << "Enter your choice: \n";
		cin >> choice;
		switch (choice) {
		case 1:
			s->add_new_student(s,num_of_student);
			break;
		case 2:
			s->edit_student(s, num_of_student);
			break;
		case 3:
			s->delete_student(s, num_of_student);
			break;
		case 4:
			s->display_student_info(s, num_of_student);
			break;

		case 5:
			c->add_new_course(c,num_of_courses);
			break;
		case 6:
			c->edit_course(c, num_of_courses);
			break;
		case 7:
			c->delete_course(c, num_of_courses);
			break;
		case 8:
			c->display_course_info(c, num_of_courses);
			break;
		case 9:
			s->enroll_course(s,c,num_of_student,num_of_courses);
			break;
		case 10:
			s->search_by_student_id(s, num_of_student);
			break;
		case 11:
			search_by_course_id(c,s,num_of_student,num_of_courses);
			break;
		case 12:
			s->withdraw(s, num_of_student, num_of_courses);
			break;
		case 0:
			cout << "Exit\n";
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
		}
	} while (choice != 0);
	return 0;
}
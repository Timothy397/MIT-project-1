#include <iostream>
#include <list>

using namespace std;


int main(){
    int no_of_courses;
    list<string> course;
    cout << "How many course do you offer: ";
    cin >> no_of_courses;

    char courses[7];
    char total_courses;
    int current_course_count = 1;

    while (current_course_count <= no_of_courses){
        cout << "Enter courses you offer: ";
        cin >> courses;
        course.push_back(courses);
        current_course_count++;
    }

    for(auto i : course)
    {
        cout << i << " ";
    }
    course.clear();
    cout << courses ;
    return 0;
}

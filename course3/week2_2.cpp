#include <iostream>
#include <math.h>
#include <string>
#include <stdio.h>

using namespace std;

class Student {
public:
    static const int GRADES = 4;

private:
    string name;
    int age;
    int student_id;
    int score[GRADES];

public:
    // static const int GRADES = 4;
    // int Average();
    // string GetName() {return name;}
    // string GetID() {return ID;}
    // int GetAge() {return age;}
    // void SetName( const string & name_) { name = name_; }
    // void SetAge( int age_) { age = age_; }
    // void SetID( string ID_) { ID = ID_; }
    // void SetScore(int score_[]) {
    //     memcpy(score,score_,sizeof(score));
    // }

    void init(string t_name, int t_age, int t_student_id, int t_score[GRADES]){
        name = t_name;
        age = t_age;
        student_id = t_student_id;
        for(int i=0;i<GRADES;i++){score[i]=t_score[i];}
    }
    void echo(){
        // cout << name << age << student_id << score << endl;
        int sum = 0;
        for(int i=0;i<GRADES;i++){sum+=score[i];}
        cout << name << age << student_id << floor(sum/GRADES) << endl;
    }
    // void Init(char * line){
    //     const char s[2] = ",";
    //     char * token;
    //     token = strtok(line, s);
    //     SetName(token);
    //     token = strtok(NULL, s);
    //     SetAge(atoi(token));
    //     token = strtok(NULL, s);
    //     SetID(token);
    //     int i = 0;
    //     int ss[GRADES];
    //     while(i < GRADES) {
    //         token = strtok(NULL, s);
    //         ss[i] = atoi(token);
    //         i++;
    //     }
    //     SetScore(ss);
    // }
};


// int Student::Average() {
//     int sum = 0;
//     for (int i = 0; i < Student::GRADES; i++)
//         sum += Student::score[i];
//     return floor(sum / Student::GRADES);
// }

int main() {
    // char line[200];
    // cin >> line;
    // Student stu;
    // stu.Init(line);
    // cout << stu.GetName() << "," << stu.GetAge() << "," << stu.GetID() << "," << stu.Average();
    char str[80];
    cin.getline(str, 80);
    
    string name;
    Student stu_obj;
    int age, student_id, score[stu_obj.GRADES];
    cin >> name;
    // cout << name << endl;
    cin >> age >> student_id;
    for(int i=0;i<stu_obj.GRADES;i++){cin >> score[i];}
    // cout << score;
    stu_obj.init(name, age, student_id, score);
    stu_obj.echo();
    return 0;
}
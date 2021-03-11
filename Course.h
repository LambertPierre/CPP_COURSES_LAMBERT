#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

class Course {
    private:

        int _score:[0,0,0];
        string _nomScore:["_","_","_"];

    public:

        Course();

        int getScore1();
        int getScore2();
        int getScore3();

        string getNom1();
        string getNom2();
        string getNom3();

        int moyenneScore();
        int comparaison();

        int Course(int_score,string_nomScore);

}
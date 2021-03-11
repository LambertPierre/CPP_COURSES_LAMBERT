#include <string>
#include <iostream>
#include <cstdlib>
#include "Course.h"

using namespace std;

Course::Course(){
    int _score:[0,0,0];
    string _nomScore:["_","_","_"];
}

int Course::getScore1(){
    return _score[0];
}
int Course::getScore2(){
    return _score[1];
}
int Course::getScore3(){
    return _score[2];
}

int Course::getNom1(){
    return _nomScore[0];
}
int Course::getNom2(){
    return _nomScore[1];
}
int Course::getNom3(){
    return _nomScore[2];
}

int Course::moyenneScore(){
    int moyenne = _score[0] + _score[1] + _score[2]
    int moyenne = moyenne/3
    cout << "La moyenne des meilleurs scores sur cette course est de " << moyenne << endl;
}

int Course::comparaison(nouveauScore){
    int save1=0
    int save2=0

    if (nouveauScore>_score[0]){

        if (nouveauScore>_score[1]){

            if (nouveauScore>_score[2]){

            save1 = _score[1];
            save2 = _score[2];
            _score[2] = nouveauScore;
            _score[1] = save2
            _score[0] = save1
            cout<< "INCROYABLE !!! Le nouveau score obtenue est LE meilleur score sur cette course !" << endl;
            }
            else if{
                save1 = _score[1]
                _score[1] = nouveauScore;
                _score[0] = save1;
                cout << "BRAVO ! Le nouveau score obtenu est le deuxième meilleur score sur cette course! " << endl;
            }
        }
        else if{
            _score[0] = nouveauScore;
            cout << "BRAVO ! Le nouveau Score est le troisième meilleur score obtenue sur cette course !" << endl;
        }
    }
    else if{
        cout << "Le nouveau score n'est pas parmis les trois meilleur score obtenu sur cette course !" << endl;
    }
}
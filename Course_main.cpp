#include <string>
#include <iostream>
#include <cstdlib>
#include "Course.cpp"

using namespace std;

int main{

    string joueur1="Philippe";
    int scorePhilippeCheval=-1;
    int scorePhilippeVache=-1;
    int scorePhilippeJaguar=-1;
    int scorePhilippeVer=-1;
    int scorePhilippeMoineau=-1;

    string joueur2="Bernard";
    int scoreBernardCheval=-1;
    int scoreBernardVache=-1;
    int scoreBernardJaguar=-1;
    int scoreBernardVer=-1;
    int scoreBernardMoineau=-1;

    string joueur3="Robert";
    int scoreRobertCheval=-1;
    int scoreRobertVache=-1;
    int scoreRobertJaguar=-1;
    int scoreRobertVer=-1;
    int scoreRoberteMoineau=-1;
    
    string joueur4="Francoise";
    int scoreFrancoiseCheval=-1;
    int scoreFrancoiseVache=-1;
    int scoreFrancoiseJaguar=-1;
    int scoreFrancoiseVer=-1;
    int scoreFrancoiseMoineau=-1;


    Course CourseCheval, CourseVache, CourseJaguar, CourseVer, CourseMoineau;
    
    bool actionJoueurStop=false;
    bool courseChoisiCorrect=false;
    bool joueurChoisiCorrect= false;
    bool fin=false;

    int joueurChoisi=0;
    int actionChoisi=0;
    int courseChoisi=0;
    int nouveauScore=0;


    cout << "|([<¤>}-  BONJOUR !   -{<¤>])|" << endl;

    while (fin=false){
    
        while (joueurChoisiCorrect=false){

            cout << "Bienvenue à la foire aux courses !  Veuillez choisir votre joueur : " << endl;
            cout <<" "<<endl;
            cout << "1- " << joueur1 << endl;
            cout << "2- " << joueur2 << endl;
            cout << "3- " << joueur3 << endl;
            cout << "4- " << joueur4 << endl;
            cout << "5- si vous voulez quitter" << endl;
            cout << "Ecrivez le numéro de votre joueur ci-dessus: " << endl;
            cin  >> joueurChoisi << endl;

            if (joueurChoisi == 1){
                joueurChoisi=joueur1;
                scoreJoueurCheval = scorePhilippeCheval;
                scoreJoueurVache = scorePhilippeVache;
                scoreJoueurJaguar = scorePhilippeJaguar;
                scoreJoueurVer = scorePhilippeVer;
                scoreJoueurMoineau = scorePhilippeMoineau;

                joueurChoisiCorrect=true
            }
            if (joueurChoisi == 2){
                joueurChoisi=joueur2;
                scoreJoueurCheval = scoreBernardCheval;
                scoreJoueurVache = scoreBernardVache;
                scoreJoueurJaguar = scoreBernardJaguar;
                scoreJoueurVer = scoreBernardVer;
                scoreJoueurMoineau = scoreBernardMoineau;

                joueurChoisiCorrect=true
            }
            if (joueurChoisi == 3){
                joueurChoisi=joueur3;
                scoreJoueurCheval = scoreRobertCheval;
                scoreJoueurVache = scoreRobertVache;
                scoreJoueurJaguar = scoreRobertJaguar;
                scoreJoueurVer = scoreRobertVer;
                scoreJoueurMoineau = scoreRobertMoineau;

                joueurChoisiCorrect=true
            }
            if (joueurChoisi == 4){
                joueurChoisi=joueur4;
                scoreJoueurCheval = scoreFrancoiseCheval;
                scoreJoueurVache = scoreFrancoiseVache;
                scoreJoueurJaguar = scoreFrancoiseJaguar;
                scoreJoueurVer = scoreFrancoiseVer;
                scoreJoueurMoineau = scoreFrancoiseMoineau;

                joueurChoisiCorrect=true
            }
            if (joueurChoisi == 5){
                fin = true
                joueurChoisiCorrect=true
            }
            if (joueurChoisi <1 or joueurChoisie >5){
            cout << "Choisi avec un chiffre qui est présenté la prochaine fois petit troll !" << endl;
            }
        }
        if (fin=true){

        }
        else if {
            cout << "Vous avez choisie " << joueurChoisi << endl;
            cout <<" "<<endl;
            cout << "Les scores de votre personnages sont :" << endl;
            cout << "A la course à cheval: " << scoreJoueurCheval << endl;
            cout << "A la course à la vache: " << scoreJoueurVache << endl;
            cout << "A la course sur jaguar: " << scoreJoueurJaguar << endl;
            cout << "A la course de vers: " << scoreJoueurVer << endl;
            cout << "A la course de moineaux: " << scoreJoueurMoineau << endl;
            cout <<" "<<endl;
        }

        while (actionJoueurStop=false or fin = true){

            cout <<" "<<endl;
            cout << "Maintenant, que voulez-vous faire ?" <<endl;
            cout <<" "<<endl;
            cout << "1 - Faire une course !" << endl;
            cout <<" "<<endl;
            cout << "2 - Regarder les moyennes des meuilleurs scores cde chaques course" << endl;
            cout <<" "<<endl;
            cout << "3 - Arrêter"
            cout <<" "<<endl;
            cout << "Ecrivez le numéro de votre action ci-dessus: " << endl;
            cin  >> actionChoisi << endl;

            if (actionChoisi == 1){

                while (courseChoisiCorrect=false){

                    cout << "Quel course voulez-vous faire ?" << endl;
                    cout << "1 - Course à cheval: " << endl;
                    cout << "2 - Course à la vache: " << endl;
                    cout << "3 - Course sur jaguar: " << endl;
                    cout << "4 - Course de vers: " << endl;
                    cout << "5 - Course de moineaux: " << endl;
                    cout <<" "<<endl;
                    cout << "Ecrivez le numéro de la course que vous avez envie de faire ci-dessus: " << endl;
                    cin  >> courseChoisi << endl;
                    cout <<" "<<endl;
                    if (courseChoisi == 1){
                        cout << "Vous vous inscrivez à la course à cheval..." << endl;
                        nouveauScore = rand()%999 +1;
                        cout << "Votre score est de : " << nouveauScore << endl;
                        CourseCheval.comparaison();
                        courseChoisiCorrect=true
                    }
                    if (courseChoisi == 2){
                        cout << "Vous vous inscrivez à la course à la vache..." << endl;
                        nouveauScore = rand()%999 +1;
                        cout << "Votre score est de : " << nouveauScore << endl;
                        CourseVache.comparaison();
                        courseChoisiCorrect=true
                    }
                    if (courseChoisi == 3){
                        cout << "Vous vous inscrivez à la course sur jaguar..." << endl;
                        nouveauScore = rand()%999 +1;
                        cout << "Votre score est de : " << nouveauScore << endl;
                        CourseJaguar.comparaison();
                        courseChoisiCorrect=true
                    }
                    if (courseChoisi == 4){
                        cout << "Vous vous inscrivez à la course de vers..." << endl;
                        nouveauScore = rand()%999 +1;
                        cout << "Votre score est de : " << nouveauScore << endl;
                        CourseVer.comparaison();
                        courseChoisiCorrect=true
                    }
                    if (courseChoisi == 5){
                        cout << "Vous vous inscrivez à la course de moineaux..." << endl;
                        nouveauScore = rand()%999 +1;
                        cout << "Votre score est de : " << nouveauScore << endl;
                        CourseMoineau.comparaison();
                        courseChoisiCorrect=true
                    }
                    if (courseChoisi<1 or courseChoisi>5){
                        cout << "Vous avez mis un chiffre non attribuer" << endl;
                    }
                }
            }

            if (actionChoisi == 2){
                cout << "Course à cheval :" << endl;
                CourseCheval.moyenneScore();
                cout << "Course à la vache :" << endl;
                CourseVache.moyenneScore();
                cout << "Course sur jaguar :" << endl;
                CourseJaguar.moyenneScore();
                cout << "Course de vers :" << endl;
                CourseVer.moyenneScore();
                cout << "Course de moineaux :" << endl;
                CourseMoineau.moyenneScore();
            }

            if (actionChoisi == 3){
                actionJoueurStop=true
                cout << "Vous avait choisi d'arrêter avec ce joueur"
            }

            if (actionChoisi<1 or actionChoisi>3){
                cout << "Choisi avec un chiffre qui est présenté la prochaine fois petit troll !" << endl;
                ;
            }
        }
    }
}   

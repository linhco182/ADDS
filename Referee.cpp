#include"Referee.h"
#include"Computer.h"
#include"Human.h"
#include<iostream>


char Referee::refGame(Human player1, Computer player2){
    char p1Move = player1.makeMove();
    char p2Move = player2.makeMove();

    switch (p1Move){
        case 'R':
        switch (p2Move){
            case 'R':
                return 'T';
            case 'P':
                return 'L';
            case 'S':
                return 'W';
        }
        case 'P':
        switch (p2Move){
            case 'R':
                return 'W';
            case 'P':
                return 'T';
            case 'S':
                return 'L';
        }
        case 'S':
        switch (p2Move){
            case 'R':
                return 'L';
            case 'P':
                return 'W';
            case 'S':
                return 'T';
        }
    }

};

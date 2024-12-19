// this is a mini game called tic tac toe. 

#include <iostream> 
#include <ctime>

using namespace std;


void showGrid(char* slots);
void playerMove(char* slots, char player);
void botMove(char* slots, char bot);
bool checkWinner(char* slots, char player, char bot);
bool checkTie(char* slots);

int main(){
    cout << "***********************************\n";
    cout << "            TIC TAC TOE            \n";
    cout << "***********************************\n";

    char slots[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char bot = 'O';
    bool running = true;

    do {
        showGrid(slots);

        // Player's move
        playerMove(slots, player);
        showGrid(slots);
        if (checkWinner(slots, player, bot)) {
            break;
        }
        if (checkTie(slots)) {
            cout << "It's a Tie.\nBut a Tie to bot is the same as losing to bot\n";
            break;
        }

        // Bot's move
        botMove(slots, bot);
        showGrid(slots);
        if (checkWinner(slots, player, bot)) {
            break;
        }
        if (checkTie(slots)) {
            cout << "It's a Tie.\nBut a Tie to bot is the same as losing to bot\n";
            break;
        }

    } while (running);



return 0;
}
void showGrid(char* slots){ 
    cout << "\n   |   |   \n";
    cout << " " << slots[0] << " | " << slots[1] << " | " << slots[2] << " \n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << slots[3] << " | " << slots[4] << " | " << slots[5] << " \n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << slots[6] << " | " << slots[7] << " | " << slots[8] << " \n";
    cout << "   |   |   \n\n";
}
void playerMove(char* slots, char player){ 

    int slot = 0; 

    do{ 
        cout << "Enter a number to place the market (1-9): ";
        cin >> slot;
        slot--;


        if(slots[slot] == ' '){
            slots[slot] = player;
            break;
        }


    } while (slot < 0 || slot > 8);
}

void botMove(char* slots, char bot){
    int slot;
    srand(time(0));
    bool running = true;
    
    do{
    slot = rand() % 9;
    if(slots[slot] == ' '){ 
        slots[slot] = bot;
        running = false;
        break;
    }
    } while(running);
}

bool checkWinner(char* slots, char player, char bot){ 

    if(slots[0] != ' ' && slots[0] == slots[1] && slots[0] == slots[2]){ 
        slots[0] == player ? cout << "You win! Try Hard!\n" : cout << "Losing to a bot?";
        return true;
    }else if(slots[3] != ' ' && slots[3] == slots[4] && slots[3] == slots[5]){ 
        slots[3] == player ? cout << "You win! Try Hard!\n" : cout << "Losing to a bot?";
        return true;
    }else if(slots[6] != ' ' && slots[6] == slots[7] && slots[6] == slots[8]){ 
        slots[6] == player ? cout << "You win! Try Hard!\n" : cout << "Losing to a bot?";
        return true;
    }else if(slots[0] != ' ' && slots[0] == slots[4] && slots[0] == slots[8]){ 
        slots[0] == player ? cout << "You win! Try Hard!\n" : cout << "Losing to a bot?";
        return true;
    }else if(slots[2] != ' ' && slots[2] == slots[4] && slots[2] == slots[6]){ 
        slots[2] == player ? cout << "You win! Try Hard!\n" : cout << "Losing to a bot?";
        return true;
    }else if(slots[0] != ' ' && slots[0] == slots[3] && slots[0] == slots[6]){ 
        slots[0] == player ? cout << "You win! Try Hard!\n" : cout << "Losing to a bot?";
        return true;
    }else if(slots[1] != ' ' && slots[1] == slots[4] && slots[1] == slots[7]){ 
        slots[1] == player ? cout << "You win! Try Hard!\n" : cout << "Losing to a bot?";
        return true;
    }else if(slots[2] != ' ' && slots[2] == slots[5] && slots[2] == slots[8]){ 
        slots[2] == player ? cout << "You win! Try Hard!\n" : cout << "Losing to a bot?";
        return true;
    }

return false; 

}


bool checkTie(char* slots) {
    for (int i = 0; i < 9; i++) {
        if (slots[i] == ' ') {
            return false; // Still moves left
        }
    }
    return true; // No moves left, it's a tie
}   
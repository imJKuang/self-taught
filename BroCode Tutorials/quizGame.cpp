//This is a simple cpp quiz game that prints the questiosn and the answer for the user to select. 
//the main takeaway from this program is to pratice 2d array. 

#include <iostream> 

using namespace std;

int main(){
    string questions[] = {"1. What does CPU stand for: ",
                        "2. Which of these is a programming language: ",
                        "3. Is Earth flat like ur dumbass cousin's chest:  ",
                        "4. which part of the computer is considered the brain: ",
                        "5. What makes James wanted to study CompSci:  "
                        }; 
    
    string options[][4] = {{ "A. Can precieve undestanding ", "B. Central Processing Unit", "C. Computer Processing Unit", "D. IDK" },
                        { "A. Puiy", "B. C++", "C. NABT", "D. OIYT"},
                        {"A. yes", "B. No", "C. she is flatter", "D. WHO?" },
                        {"A. Monitor", "B. keyboard", "C. CPU", "D. ME!"},
                        {"A. The money", "B. He likes gaming", "C. blindly pciked", "D. I wish I know too"}};

    char answerKey[]= {'B', 'B', 'C', 'C', 'D'}; 
    int score;
    char answer; 
    int row = sizeof(questions)/sizeof(questions[0]);
    int numOptions = sizeof(options[0])/sizeof(options[0][0]);

    for(int i = 0; i < row; i++){
        cout << questions[i]<< "\n";
        for(int j = 0; j <  numOptions; j++){
            cout << options[i][j] << "\n";
        }

        cin >> answer;
        answer = toupper(answer);

        if (answer == answerKey[i]){ 
            cout << "Correct. Score: +1\n";
            score ++;
        }else
        {
            cout << "Incorrect! Do better mate!\n";
        }
    } 


    cout << "\n********************************\n";
    cout << "answered correectly: " << score << endl;
    cout << "final score: " << (score/(double)row)*100;
;
    return 0;                       
}   
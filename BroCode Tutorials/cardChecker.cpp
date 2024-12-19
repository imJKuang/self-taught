//this program uses the Luhn algorithm to check whether the credit card numbecr
//entered is valid. 

/*here is how the algorithm works: 
1. from the rightmost, choose every second digit and double it.
2. if doubling resulting into two digits ( greater than 10), then add the digits
    (e.g 12: 1 + 2 =3)
3. sum up all the digits
4.  If the total modulo 10 is equal to 0, it is valid else invalid. 
*/

#include <iostream> 

using namespace std;

void cardValid(const int sum1, const int sum2);
int sumOdd(const string& cardNum);
int sumEven(const string& cardNum);

int main() {
    string cardNum; 

    cout << "***********************************\n";
    cout << "      Test Credit Card Numbers      \n";
    cout << "***********************************\n";

    cout << "Please Enter Your credit card number: ";
    cin >> cardNum; 

    int totalOdd = sumOdd(cardNum);
    cout << "\nOdd sum: " << totalOdd << endl;

    int totalEven = sumEven(cardNum);
    cout << "\nEven sum: " << totalEven << endl;

    cardValid(totalOdd, totalEven);

    cout << "\n***********************************\n";

    return 0;
}

int sumEven(const string& cardNum) {
    int sum = 0;
    int length = cardNum.length();
    // Start from the second last digit (even index positions from the right)
    for (int i = length - 2; i >= 0; i -= 2) {
        int digit = cardNum[i] - '0'; // Convert char to int
        int doubled = digit * 2;
        if (doubled >= 10) {
            sum += (doubled % 10) + (doubled / 10); // Add digits of the doubled value
        } else {
            sum += doubled;
        }
    }
    return sum;
}

int sumOdd(const string& cardNum) {
    int sum = 0;
    int length = cardNum.length();
    // Start from the last digit (odd index positions from the right)
    for (int i = length - 1; i >= 0; i -= 2) {
        sum += cardNum[i] - '0'; // Convert char to int
    }
    return sum;
}

void cardValid(const int sum1, const int sum2) { 
    int total = sum1 + sum2;
    cout << "Total Sum: " << total << endl;
    if (total % 10 == 0) {
        cout << "\nThe credit card number is valid! Send me all your money now!\n";
    } else {
        cout << "\nThe credit card number is invalid! Please enter a valid credit card number!\n";
    }
}
    
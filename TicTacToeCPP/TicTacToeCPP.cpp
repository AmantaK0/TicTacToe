//Tic Tac Toe simple game

#include <iostream>

using namespace std;

//matrica fillimisht do ket numrat ne menyre qe perdoruesi te vendosi se cilin pozicion deshiron te mbush me X ose me O
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X'; //by default lojtari i pare do jet X
int n;

void Draw() {   //funksioni per te nxjerre tabelen fillestare
    system("cls");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void Input() {
    int a;
    cout << "It's player " << player << " turn. " << "What position do you want to fill in?";
    cin >> a;

    if (a == 1) {                        //nese perdoruesi shtyp '1' numri do te zevendesohet me X ose O. Ne kete rast me X
        if (matrix[0][0] == '1') {
            matrix[0][0] = player;       //player (X ose O)
        }
        else {
            cout << "Field is already in use. Try again." << endl;  //nese lojtari i dyte tenton te shtyp te njejtin numer qe shtypi lojtari i pare
            Input();                 //pas kesaj do thirret prap funksioni input qe te vendose cilin pozicion do te mbushi
        }

    }
    else if (a == 2) {
        if (matrix[0][1] == '2') {
            matrix[0][1] = player;
        }
        else {
            cout << "Field is already in use. Try again." << endl;
            Input();
        }
    }
    else if (a == 3) {
        if (matrix[0][2] == '3') {
            matrix[0][2] = player;
        }
        else {
            cout << "Field is already in use. Try again." << endl;
            Input();
        }
    }
    else if (a == 4) {
        if (matrix[1][0] == '4') {
            matrix[1][0] = player;
        }
        else {
            cout << "Field is already in use. Try again." << endl;
            Input();
        }
    }
    else if (a == 5) {
        if (matrix[1][1] == '5') {
            matrix[1][1] = player;
        }
        else {
            cout << "Field is already in use. Try again." << endl;
            Input();
        }
    }
    else if (a == 6) {
        if (matrix[1][2] == '6') {
            matrix[1][2] = player;
        }
        else {
            cout << "Field is already in use. Try again." << endl;
            Input();
        }
    }
    else if (a == 7) {
        if (matrix[2][0] == '7') {
            matrix[2][0] = player;
        }
        else {
            cout << "Field is already in use. Try again." << endl;
            Input();
        }
    }
    else if (a == 8) {
        if (matrix[2][1] == '8') {
            matrix[2][1] = player;
        }
        else {
            cout << "Field is already in use. Try again." << endl;
            Input();
        }
    }
    else if (a == 9) {
        if (matrix[2][2] == '9') {
            matrix[2][2] = player;
        }
        else {
            cout << "Field is already in use. Try again." << endl;
            Input();
        }
    }
}
void TogglePlayer() {         //tregon se cili lojtar e ka radhen per te luajtur
    if (player == 'X')      
        player = 'O';
    else
        player = 'X';

}
char Win() {    //ne kete funksion do te meren me radhe te gjitha mundesite e fitores. 3 rreshta, 3 kolona dhe dy diagonale. Nje here per lojtarin X dhe pstj per lojtarin O
    //first player
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X') {
        return 'X';
    }
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X') {
        return 'X';
    }
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X') {
        return 'X';
    }

    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X') {
        return 'X';
    }
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X') {
        return 'X';
    }
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X') {
        return 'X';
    }

    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X') {
        return 'X';
    }
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X') {
        return 'X';
    }

    //second player
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O') {
        return 'O';
    }
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O') {
        return 'O';
    }
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O') {
        return 'O';
    }

    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O') {
        return 'O';
    }
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O') {
        return 'O';
    }
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O') {
        return 'O';
    }

    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O') {
        return 'O';
    }
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O') {
        return 'O';
    }

    return '/'; //kjo do thirret me vone tek maini per te na treguar qe loja del barazim
}

int main()   //funksioni ku do te thirren te gjithe funksionet e tjera te lojes.
{
    n = 0;
    Draw();

    while (1) {
        n++;
        Input();
        Draw();
        if (Win() == 'X') {
            cout << "First player wins." << endl;
            break;
        }
        else if (Win() == 'O') {
            cout << "Second player wins." << endl;
            break;
        }
        else if (Win() == '/' && n == 9) {
            cout << "It's a tie." << endl;
            break;
        }
        TogglePlayer();
    }

    return 0;
}

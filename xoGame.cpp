#include <iostream>
using namespace std;

int main() {
  string dash = "  -   -   - ";
  char cell1 = '1', cell2 = '2', cell3 = '3', cell4 = '4', cell5 = '5',
       cell6 = '6', cell7 = '7', cell8 = '8', cell9 = '9';
  cout << dash << endl;
  cout << "| " << cell1 << " | " << cell2 << " | " << cell3 << " |" << endl;
  cout << dash << endl;
  cout << "| " << cell4 << " | " << cell5 << " | " << cell6 << " |" << endl;
  cout << dash << endl;
  cout << "| " << cell7 << " | " << cell8 << " | " << cell9 << " |" << endl;
  cout << dash << endl;

  int num;
  char player;

  for (int i = 0; i < 9; i++) {
    if (i == 0 || i == 2 || i == 4 || i == 6 || i == 8)
      player = 'X';
    else
      player = 'O';

    cout << "player " << player << " choose a cell number: ";
    cin >> num;
    switch (num) {
    case 1:
      if (cell1 == '1')
        cell1 = player;
      else
        i--;
      break;
    case 2:
      if (cell2 == '2')
        cell2 = player;
      else
        i--;
      break;
    case 3:
      if (cell3 == '3')
        cell3 = player;
      else
        i--;
      break;
    case 4:
      if (cell4 == '4')
        cell4 = player;
      else
        i--;
      break;
    case 5:
      if (cell5 == '5')
        cell5 = player;
      else
        i--;
      break;
    case 6:
      if (cell6 == '6')
        cell6 = player;
      else
        i--;
      break;
    case 7:
      if (cell7 == '7')
        cell7 = player;
      else
        i--;
      break;
    case 8:
      if (cell8 == '8')
        cell8 = player;
      else
        i--;
      break;
    case 9:
      if (cell9 == '9')
        cell9 = player;
      else
        i--;
      break;
    default:
      cout << "use a number that is less than 10 please!" << endl;
      i--;
      break;
    }
    cout << dash << endl;
    cout << "| " << cell1 << " | " << cell2 << " | " << cell3 << " |" << endl;
    cout << dash << endl;
    cout << "| " << cell4 << " | " << cell5 << " | " << cell6 << " |" << endl;
    cout << dash << endl;
    cout << "| " << cell7 << " | " << cell8 << " | " << cell9 << " |" << endl;
    cout << dash << endl;
    if (cell1 == cell2 && cell2 == cell3 || cell4 == cell5 && cell5 == cell6 ||
        cell7 == cell8 && cell8 == cell9 || cell1 == cell4 && cell4 == cell7 ||
        cell2 == cell5 && cell5 == cell8 || cell3 == cell6 && cell6 == cell9 ||
        cell1 == cell5 && cell5 == cell9 || cell3 == cell5 && cell5 == cell9) {
      cout << "player: " << player << " wins!" << endl;
      exit(0);
    }
  }
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void print_position(int row, int col, string names[][6]) { //Переважно в коді використані такі data types, як void та int 
    for (int i = 1; i < 5; i++) {
        if (i == row) {
            cout << names[i][col] << " - " << names[0][col] << endl;
            break;
        }
    }
}
//Дана функція відповідає за вивід імені працівника, та через тире його професії, наступна функція вже запитує самі заді про працівника, тобто його позицію в певній таблиці

void print_position_from_input(string names[][6]) {
    int row, col;
    string answer;
    while (true) {    // в коді використані всі керуючі структури (if-else, for, while) 

        cout << "Do you want to see the profession of the worker? (yes/no): ";
        cin >> answer;
        if (answer == "no") {
            return;
        }
        else if (answer == "yes") {
            cout << "Enter row number: ";
            cin >> row;
            cout << "Enter column number: ";
            cin >> col;
            print_position(row, col, names);
            return;
        }
        else {
            cout << "Unknown command" << endl;
            
        }
    }
}

bool question() {
    string answer_cont;
    cout << "Do you want to continue working with the database? (yes/no): ";
    cin >> answer_cont;
    cin.ignore(); // очищення буфера введення
    if (answer_cont == "no") {
        return false;
    }
    else if (answer_cont == "yes"){
        cout << "Ok!" << endl;
        return true;
    }
    else {
        cout << "Unknown command" << endl;
        return question();
    }
}



int main() {
    
    cout << "Hello. Welcome to the website of our aircraft construction company! Now you are in the menu of the teams responsible for the assembly of the concrete sparrow.\nChoose the product that the team deals with:\n1.Wings;\n2.Tailpiece;\n3.Engines;\n4.Power supply, pneumatics and hydraulics systems;\n5.Fuselage;\n6.Chassis.\n";
 string pick_product;
   string names_wings[5][6] = {
    {"Team name", "Mechanic", "Electrician", "Varnisher", "Locksmith-installer", "Blacksmith"}, //name is Wing construction brigade
    {"WCB-1", "Robert Allen", "Emily Baker", "Daniel Clark", "Lauren Davis", "Christopher Hall"},
    {"WCB-2", "Michelle Davis", "Anthony Jackson", "Maria Rodriguez", "Richard Thompson", "Jennifer Young"},
    {"WCB-3", "Jonathan Baker", "Julie Garcia", "Thomas Hernandez", "Heather Johnson", "Mark Martinez"},
    {"WCB-4", "Mary Brown", "Christopher Evans", "Elizabeth Hall", "Jeffrey Lee", "Patricia Martinez"}
  };
     string names_tailpiece[5][6] = {
    {"Team name", "Mechanic", "Electrician", "Varnisher", "Locksmith-installer", "Blacksmith"}, 
    {"TCB-1", "William Anderson", "Olivia Baker", "David Chen", "Emma Davis", "Maxwell Ford"},
    {"TCB-2", "Sophia Garcia", "Isaac Johnson", "Natalie Kim", "Ethan Lee", "Avery Martinez"},
    {"TCB-3", "Tyler Nguyen", "Abigail Parker", "Ryan Ramirez", "Gabriella Sanchez", "Oscar Taylor"},
    {"TCB-4", "Victoria Adams", "Michael Brown", "Samantha Davis", "John Edwards", "Nicole Gonzalez"}
     };
     
     
string names_engines[5][6] = {
    {"Team name", "Mechanic", "Electrician", "Varnisher", "Locksmith-installer", "Blacksmith"}, 
    {"ECB-1", "Jacob Brown", "Evelyn Davis", "Nathan Evans", "Sophia Hernandez", "Justin Jackson"},
    {"ECB-2", "Isabella Kim", "David Lee", "Grace Martinez", "John Nguyen", "Ava Parker"},
    {"ECB-3", "Emma Ramirez", "William Sanchez", "Avery Taylor", "Oliver Thompson", "Emily Wilson"},
    {"ECB-4", "Noah Anderson", "Madison Baker", "Lucas Chen", "Chloe Clark", "Henry Garcia"}
};

string names_PSPaHS[5][6] = {
    {"Team name", "Mechanic", "Electrician", "Varnisher", "Locksmith-installer", "Blacksmith"}, 
    {"PSPaHSCB-1", "Abigail Adams", "Jackson Brown", "Sophie Davis", "Luke Evans", "Madeline Hall"},
    {"PSPaHSCB-2", "James Hernandez", "Ella Jackson", "Andrew Kim", "Grace Lee", "Nicholas Martinez"},
    {"PSPaHSCB-3", "Sofia Parker", "Logan Ramirez", "Zoe Sanchez", "Benjamin Taylor", "Charlotte Thompson"},
    {"PSPaHSCB-4", "Caleb Anderson", "Lily Chen", "Daniel Clark", "Samantha Davis", "Matthew Garcia"}
};
string names_fuselage[5][6] = {
  {"Team name", "Mechanic", "Electrician", "Varnisher", "Locksmith-installer", "Blacksmith"}, // назва команди
  {"FCB-1", "Cian Murphy", "Aoife Byrne", "Fionn O'Sullivan", "Saoirse Kelly", "Darragh Dunne"},
  {"FCB-2", "Niamh McCarthy", "Tadhg Ryan", "Clodagh Walsh", "Cillian O'Brien", "Aisling Murphy"},
  {"FCB-3", "Conor Brennan", "Caoimhe O'Shea", "Seán O'Connor", "Ciara Molloy", "Eoin Kennedy"},
  {"FCB-4", "Orlaith Higgins", "Dáire Ó'Connell", "Maeve Kelly", "Eoghan Ryan", "Róisín Flynn"}
};

string names_chassis[5][6] = {
  {"Team name", "Mechanic", "Electrician", "Varnisher", "Locksmith-installer", "Blacksmith"}, // назва команди
  {"CCB-1", "Liam Murphy", "Cara Byrne", "Eoin O'Sullivan", "Síofra Kelly", "Cillian Dunne"},
  {"CCB-2", "Molly McCarthy", "Ruairí Ryan", "Caitlín Walsh", "Colm O'Brien", "Ailbhe Murphy"},
  {"CCB-3", "Shane Brennan", "Sadhbh O'Shea", "Donncha O'Connor", "Aoibhinn Molloy", "Lorcan Kennedy"},
  {"CCB-4", "Aoibhín Higgins", "Cian Ó'Connell", "Gráinne Kelly", "Conall Ryan", "Caoimhe Flynn"}
};
bool continue_working = true;
  while (continue_working) {
 while (true) {
     getline(cin, pick_product);
    if (pick_product == "Wings" || pick_product == "wings" || pick_product == "1")
{
         cout << "The composition of the teams involved in the assembly of the wings:\n";
           for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
      
      if (j < 6) {
        cout << "| ";
      }
     
      cout <<setw(20) << names_wings [i][j];
    }
    cout << endl;
   
    if (i < 4) {
      cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
           }
            print_position_from_input(names_wings);
          
           
          

 } 

         else if (pick_product == "Tailpiece" || pick_product == "tailpiece" || pick_product == "2") {
         cout << "The composition of the teams involved in the assembly of the tailpiece:\n";
           for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
      
      if (j < 6) {
        cout << "| ";
      }
     
      cout <<setw(20) << names_tailpiece [i][j];
    }
    cout << endl;
   
    if (i < 4) {
      cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
           }
           print_position_from_input(names_tailpiece);
          
 }

 else if (pick_product == "Engines" || pick_product == "engines" || pick_product == "3") {
         cout << "The composition of the teams involved in the assembly of the engines:\n";
           for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
      
      if (j < 6) {
        cout << "| ";
      }
     
      cout <<setw(20) << names_engines [i][j];
    }
    cout << endl;
   
    if (i < 4) {
      cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
           }
           print_position_from_input(names_engines);
          

 }

else if (pick_product == "Power supply, pneumatics and hydraulics systems" || pick_product == "power supply, pneumatics and hydraulics systems" || pick_product == "4") {
         cout << "The composition of the teams involved in the assembly of the PSPaHS:\n";
           for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
      
      if (j < 6) {
        cout << "| ";
      }
     
      cout <<setw(20) << names_PSPaHS [i][j];
    }
    cout << endl;
   
    if (i < 4) {
      cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
           }
           print_position_from_input(names_PSPaHS);
          

 }

else if (pick_product == "Fuselage" || pick_product == "fuselage" || pick_product == "5") {
         cout << "The composition of the teams involved in the assembly of the fuselage:\n";
           for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
      
      if (j < 6) {
        cout << "| ";
      }
     
      cout <<setw(20) << names_fuselage [i][j];
    }
    cout << endl;
   
    if (i < 4) {
      cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
           }
           print_position_from_input(names_fuselage);
          

 }

 else if (pick_product == "Chassis" || pick_product == "chassis" || pick_product == "6") {
         cout << "The composition of the teams involved in the assembly of the chassis:\n";
           for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
      
      if (j < 6) {
        cout << "| ";
      }
     
      cout <<setw(20) << names_chassis [i][j];
    }
    cout << endl;
   
    if (i < 4) {
      cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
           }
           print_position_from_input(names_chassis);
          break;

 }

  if (!question()) {
            continue_working = false;
            break;
        }

          
        else {
          cout << "1.Wings;\n2.Tailpiece;\n3.Engines;\n4.Power supply, pneumatics and hydraulics systems;\n5.Fuselage;\n6.Chassis.\n";
           break;
      }
        
    }
}
}

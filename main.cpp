// Quick program to divide my focal lengths on my lens to determine their Magification. 
#include <iostream>
#include <string>

using namespace std;

int main(){
  double objective_lens = 500;
  double eye_lens = 12;

  bool notDone = false;
  char finished;
  while (notDone == false){
    cout << "what is your objective lens focal length?" << endl;
    cin >> objective_lens;
    cout << "What is your eye piece lens focal length?" << endl;
    cin >> eye_lens;
    cout << "Your Magification is " << objective_lens / eye_lens << endl;
    cout << "Are you finished with your messurements, if so type 'y'. " << endl;
    cin >> finished;
    if (finished == 'y'){
      notDone = true;
    } else {
      cout << "Continuing Calculations" << endl;
    }
  }
}

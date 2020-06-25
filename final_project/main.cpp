#include "problem_maker.h"
#include <iostream>
#include <Eigen/Dense>
 
using namespace Eigen;
using namespace std;

void ask(int *opt){
  cout << "\t<<Select what you want to practice in Matrix Operations>>" << endl;
  cout << "\t 1. Matrix Addition" << endl;
  cout << "\t 2. Matrix Subtraction" << endl;
  cout << "\t 3. Matrix Multiplication" << endl;
  cout << "\t 4. Quit" << endl;
  cout << "\t Input 1~4 : ";
  cin >> *opt;
}


int main()
{
  int total_all = 0;
  int total = 0;
  int score = 0;
  int opt = 0;
  std::srand((unsigned int)time(0));
  
  cout << "This program is for students who wants to practice Matrix Operations" << endl;

  while(opt != 4){
    score = 0;
    // Ask Option
    ask(&opt);
    while(opt < 1 || opt > 4){
      cout << "\tIt is a wrong number" << endl;
      ask(&opt);
    }
    
    switch(opt)
    {
      case 1:
        addition(&score);
        total += score;
        total_all += 30;
        break;
      case 2:
        subtraction(&score);
        total += score;
        total_all += 30;
        break;
      case 3:
        multiplication(&score);
        total += score;
        total_all += 30;
        break;
      default:
        break;
    }
    
  }
  cout << "\n\tCongratulation~~~!!!" << endl;
  cout << "\tFinal score : "<< total << " / " << total_all << endl;
  
  return 0;
}

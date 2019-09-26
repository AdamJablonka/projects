#include <iostream>
//#include <cmath>
using namespace std;

//formula should keep ratio stable
//max population is 10
//0 is recessive for output
//1 is dominant for output
//numbers in population array should be number of the populations with certain genes
class Calculation{
  public:

    int D, R, D2, R2, Mixed;

    void formulaInput(int& D, int& R, int& D2, int& R2,int& Mixed){
      for(int i = 0; i < 3; i++){
//q = (q * q) + mixed = 2(q * p) + reccesive = (p * p);
        D2 = (D * D);
        Mixed = (2 * (D * R));
        R2 = (R * R);
      }
    return;
    }
};
int main(){
  cout << "w" << endl;
        Calculation population1;
        cout << "D = Dominant Trait, R = Recessive trait\n";
        cout << "\nInput a value for the amount of parents with Dominant genomes(Traits): ";
        cin >> population1.D;
        cout << "\nInput a value for the amount of parents with Dominant genomes(Traits): ";
        cin >> population1.R;
        population1.D2 = 0;
        population1.R2 = 0;
        population1.Mixed = 0;
        int population[3] = {};
        population1.formulaInput(population1.D, population1.R, population1.D2, population1.R2, population1.Mixed);
    //    cout << "Input amount of generations to be calculated: ";
  //      cin >> genNum;
//        population1.formulaInputGeneration(population[], genNum);
  cout << "1 = persons(s) with dominant traits\n0 = person(s) with reccesive traits\n";
  cout << "Generation 1:\n";
  for(int i = 0; i <= 3; i++){
    if(i == 0) population[i] = population1.D;
    if(i == 1) population[i] = population1.Mixed;
    if(i == 2) population[i] = population1.R;
  }
  for(int i = 0; i <= 3; i++){
    for(int z = 0; z <= population[i]; z++){
      if(i == 0 || i == 1) cout << "1";
      if(i == 2) cout << "0";
    }
    cout << endl;
  }
return 0;
}

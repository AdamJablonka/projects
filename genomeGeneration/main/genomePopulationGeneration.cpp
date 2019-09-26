#include <iostream>
#include <cmath>
using namespace std;

//formula should keep ratio stable
//max population is 10
//0 is recessive for output
//1 is dominant for output
//numbers in population array should be number of the populations with certain genes
class Calculation{
        public:
              int formulaInput(int q, int p, int population[]){
                        for(int i = 0; i < 3; i++){
                        //q = (q * q) + mixed = 2(q * p) + reccesive = (p * p);
                                if(i == 0) population[i] = (q * q);
                                if(i == 1) population[i] = (2 * (q * p));
                                if(i == 2) population[i] = (p * p);
                                return 0;
                            }
              }
 //             int formulaInputGeneration(int population[], int x){
   //             for(int i = 0; i <= x; i++){
     //             formulaInput(int q, int p, int population[]);
       //         }
         //     }
};

int main(){
        int q = 5, p = 5, d, r, genNum, population[3] = {0};
        Calculation population1;
        cout << "The default amount of p = 5, q = 5"  << endl;
        population1.formulaInput(q, p, population[]);
    //    cout << "Input amount of generations to be calculated: ";
  //      cin >> genNum;
//        population1.formulaInputGeneration(population[], genNum);
output:
  cout << "1 = dominant traits\n0 = reccesive members\n";
  for(int i = 0; i <= 3; i++){
    for(int z = 0; z <= population[i]; z++){
      if(i == 0 || i == 1) cout << "1";
      if(i == 2) cout << "0";
    }
    cout << endl;
  }
return 0;
}

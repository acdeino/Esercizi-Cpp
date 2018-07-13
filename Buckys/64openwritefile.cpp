#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream buckyfile;
  buckyfile.open("tuna.txt");

  buckyfile << "I love tuna and tuna loves me! " << endl;
  buckyfile.close();
}

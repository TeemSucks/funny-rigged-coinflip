#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {



  srand (time(NULL));
  int	coin = rand() % 4;



  if (coin == 1) {

    std::cout << "Tails";

  }
	else {

    std::cout << "Heads";

  }

}

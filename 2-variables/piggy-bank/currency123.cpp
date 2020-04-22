#include <iostream>

int main() {
  
  double pesos; // 1 USD == 3970,61 Pesos || 1 Pesos == 0,00025 USD
  double con_rate_p = 0.00025;
  double reais; // 1 USD == 5,32 Reais || 1 Reais == 0,19 USD
  double con_rate_r = 0.19;
  double soles; // 1 USD == 3,39 Soles || 1 Soles == 0,29 USD
  double con_rate_s = 0.29;
  
  double dollars;

  
  
  std::cout  << "Enter number of Colombian Pesos: \n";
  std::cin  >> pesos;
  
  std::cout  << "Enter number of Brazilian Reais: \n";
  std::cin  >> reais;
  
  std::cout  << "Enter number of Peruvian Soles: \n";
  std::cin  >> soles;
  
  // Converts Pesos into Dollars
  double do_pe;
  do_pe = pesos * con_rate_p;
  // Converts Reais into Dollars
  double do_re;
  do_re = reais * con_rate_r;
  // Converts Soles into Dollars
  double do_so;
  do_so = soles * con_rate_s;
  // Sums up all converted currencies
  dollars = do_pe + do_re + do_so;
    
  std::cout << "For your given amount of " << pesos << " Colombian Pesos you'll get " << do_pe << " USD.\n";
  std::cout << "For your given amount of " << reais << " Brazilian Reais you'll get " << do_re << " USD.\n";
  std::cout << "For your given amount of " << soles << " Peruvian Soles you'll get " << do_so << " USD.\n";
  std::cout << "Which makes a total amount of " << dollars << " USD.\n";
  

  
}

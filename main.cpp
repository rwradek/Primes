#include <iostream>
#include <vector>

bool isPrime(std::vector<int> * lista,int number){
  for(int prime: *lista){
    if (number%prime == 0){
      return false;
    }
  }
  return true;
}

int main() {

std::vector<int> lista = {3};
int iter = 3;

for (int i = 0;i<1000000;i++){
  iter = iter + 2;
  if(isPrime(&lista,iter)){
    lista.push_back(iter);
    std::cout << iter << std::endl;
  }
}

}
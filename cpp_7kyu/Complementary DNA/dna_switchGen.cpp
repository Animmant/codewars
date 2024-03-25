
/*
std::string DNAStrand(const std::string& dna){
    std::string result = dna;
  for (char& gen : result){
    switch(gen){
      case 'A': gen = 'T'; break;
      case 'T': gen = 'A'; break;
      case 'G': gen = 'C'; break;
      case 'C': gen = 'G'; break;
      default: gen = 'j'; break;
    }
  }
  return result;
}

*/
#include <string>
#include <map>

std::map<char, char> mp= {
        {'A', 'T'},
        {'T', 'A'},
        {'C', 'G'},
        {'G', 'C'},
    };

std::string DNAStrand(const std::string& dna){
  std::string result = dna;

  for(char& gen : result){
    gen = mp.at(gen);
  }
    return result;
}
#include <iostream>

int main() {
    std::string numbers[] = {"AAAA", "ATTGC", "GTAT"};
    for (std::string number : numbers) {
        std::string result = DNAStrand(number);
        std::cout << "Input: " << number << " Output: " << result << std::endl;
    }

    return 0;
}

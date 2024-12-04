#include <string>
#include <algorithm>

int decimalToBinary(int decimalValue) {
std::string binary = "";
  while (decimalValue > 0) {
    int remainder = decimalValue % 2;
    decimalValue = decimalValue / 2;
    binary.append(std::to_string(remainder));
  }

  std::reverse(binary.begin(), binary.end());
  
return std::stoi(binary);
}

//std::int binaryToDecimal(int binary) {

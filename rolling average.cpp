//============================================================================
// Name        : rolling.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#ifndef MARMOSET_TESTING
int main();
#endif

float rolling_average(float num1, float num2, float num3);

#ifndef MARMOSET_TESTING
int main() {
	float number_1{0.0};
	float number_2{0.0};
	float number_3{0.0};
	float num_input{0.0};

	float input_number{0.0};
	float calculated_average{0.0};

	while( input_number >= 0.0 ){
  std::cout<<"Enter a number."<<std::endl;
  std::cin>>input_number;
  num_input++;
  number_1 = number_2;
  number_2 = number_3;
  number_3 = input_number;
  if(num_input >= 3 && input_number >= 0.0){
  calculated_average = rolling_average(number_1,number_2,number_3);
  std::cout<<"rolling average is: "<<calculated_average<<std::endl;
  }
	}
	return 0;
}
#endif

float rolling_average(float num1, float num2, float num3){
	return (num1 + num2 + num3)/3;
}

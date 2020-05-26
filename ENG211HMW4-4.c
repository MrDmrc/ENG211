#include <stdio.h>

float Approx_value_b,Approx_value_c;
float true_value;//exact value
float per_error_b,per_error_c;

int main()
{
  printf("QUESTION 4\n\n");
  true_value=0.7815452766702095;
  printf("a)\nApprox value=%f\n",true_value );

  Approx_value_b=0.6838521170865;
  per_error_b=((true_value-Approx_value_b)/true_value)*100;
  printf("b)\ntrue_value= %f\nApprox_value_b= %f\nper_error_b= %f\n",true_value,Approx_value_b,per_error_b );


  Approx_value_c=0.574505;
  per_error_c=((true_value-Approx_value_c)/true_value)*100;
  printf("c)\ntrue_value= %f\nApprox_value_c= %f\nper_error_c= %f\n",true_value,Approx_value_c,per_error_c );




}

#include <stdio.h>

float Approx_value_b,Approx_value_c_a,Approx_value_c_b,Approx_value_d;
float true_value;//exact value
float per_error_b,per_error_c_a,per_error_c_b,per_error_d;

int main()
{
  printf("QUESTION 5\n\n");
  true_value=0.1227105451389082;
  printf("a)\nApprox value=%.1f\n",true_value );

  Approx_value_b=-0.8238;
  per_error_b=-1*((true_value-Approx_value_b)/true_value)*100;
  printf("b)\ntrue_value= %f\nApprox_value_b= %f\nper_error_b= %f\n",true_value,Approx_value_b,per_error_b );


  Approx_value_c_a=0.54975;
  Approx_value_c_b=-5.2974;
  per_error_c_a=((true_value-Approx_value_c_a)/true_value)*100;
  per_error_c_b=((true_value-Approx_value_c_b)/true_value)*100;
  printf("c)\nfor Simpson's 1/3)\ntrue_value= %f\nApprox_value_c_a= %f\nper_error_c_b= %f\n",true_value,Approx_value_c_a,per_error_c_a);
  printf("\nfor Simpson's 3/8)\ntrue_value= %f\nApprox_value_c_a= %.2f\nper_error_c_b= %f\n",true_value,Approx_value_c_b,per_error_c_b);


  Approx_value_d=7.4399;
  per_error_d=((true_value-Approx_value_d)/true_value)*100;
  printf("d)\ntrue_value= %f\nApprox_value_d= %.1f\nper_error_d= %f\n",true_value,Approx_value_d,per_error_d );
.
}

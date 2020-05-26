#include <stdio.h>

float Approx_value_b,Approx_value_c_2,Approx_value_c_4,Approx_value_d,Approx_value_e;
float true_value;//exact value
float per_error_b,per_error_c_2,per_error_c_4,per_error_d,per_error_e;

int main()
{
  printf("QUESTION 6\n\n");
  true_value=1104;
  printf("a)\nApprox value=%.1f\n",true_value );

  Approx_value_b=5286;
  per_error_b=-1*((true_value-Approx_value_b)/true_value)*100;
  printf("b)\ntrue_value= %.1f\nApprox_value_b= %.1f\nper_error_b= %f\n",true_value,Approx_value_b,per_error_b );


  Approx_value_c_2=1768;
  Approx_value_c_4=1456.75;
  per_error_c_2=-1*((true_value-Approx_value_c_2)/true_value)*100;
  per_error_c_4=-1*((true_value-Approx_value_c_4)/true_value)*100;
  printf("c)\nfor 2)\ntrue_value= %.1f\nApprox_value_c_2= %.1f\nper_error_c_2= %f\n",true_value,Approx_value_c_2,per_error_c_2);
  printf("for 4)\ntrue_value= %.1f\nApprox_value_c_4= %.2f\nper_error_c_4= %f\n",true_value,Approx_value_c_4,per_error_c_4);


  Approx_value_d=1754;
  per_error_d=-1*((true_value-Approx_value_d)/true_value)*100;
  printf("d)\ntrue_value= %.1f\nApprox_value_d= %.1f\nper_error_d= %f\n",true_value,Approx_value_d,per_error_d );


  Approx_value_e=38175.75;
  per_error_e=-1*((true_value-Approx_value_e)/true_value)*100;
  printf("d)\ntrue_value= %.1f\nApprox_value_e= %.2f\nper_error_e= %f\n",true_value,Approx_value_e,per_error_e );

}

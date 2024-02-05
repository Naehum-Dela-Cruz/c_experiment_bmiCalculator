#include <stdio.h>

int main(void) {

  char uName[25];
  int age, height, weight;
  double bmi;
  
  printf("Enter Name: ");
  fgets(uName, sizeof(uName), stdin);

  printf("Input age: ");
  scanf("%d", &age);

  printf("Input height (inches): ");
  scanf("%d", &height);
  
  printf("Input weight (lbs): ");
  scanf("%d", &weight);

  bmi = (703 * weight) / (height * height);

  printf("\nName: %s", uName);

  printf("Age: %d\n", age);

  printf("Height: %d\n", height);

  printf("Weight: %d\n", weight);

  printf("BMI: %lf\n", bmi);

  if(bmi < 18.5){
    printf("Underweight");
  }
  else if(bmi >= 18.5 && bmi < 25){
    printf("Normal");
  }
  else if (bmi >= 25 && bmi < 30){
    printf("Overweight");
  }
  else{
    printf("Obese");
  }
  
  return 0;
}
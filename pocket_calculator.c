#include <stdio.h>
int check_input();
void get_operants();



int main(int argc, char const *argv[]) {
  int checker = 1;
  double operant_1;
  double operant_2;
  do {
    int choice;
    printf("Choose one of the following operations:\n" );
    printf("Add (1)\n" );
    printf("Subtract (2)\n" );
    printf("Multiply (3)\n" );
    printf("Divide (4)\n" );
    printf("Stop program (-1)\n" );
    scanf("%d", &choice );
    checker = check_input(choice);
    get_operants(&operant_1, &operant_2);

    if(checker == 1){
      switch (choice) {
        case 1: printf("%.2lf + %.2lf = %.2lf\n",operant_1, operant_2, operant_1 + operant_2);
          break;
        case 2: printf("%.2lf - %.2lf = %.2lf\n",operant_1, operant_2, operant_1 - operant_2);
          break;
        case 3: printf("%.2lf * %.2lf = %.2lf\n",operant_1, operant_2, operant_1 * operant_2);
          break;
        case 4: printf("%.2lf / %.2lf = %.2lf\n",operant_1, operant_2, operant_1 / operant_2);
          break;
        }
    checker = 0;
    }
}while (checker == 1);
}

int check_input(int choice){
  if (choice > 4 || choice < -1 || choice == 0) {
    return 0;
  }
  else{
    return 1;
  }
}

void get_operants(double* operant_1, double*operant_2){
  printf("<first_number>/<second_number>\n");
  scanf("%lf/%lf", operant_1, operant_2 );

}

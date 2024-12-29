#include <stdio.h>

int main() {
  
  // exercise 1

  // Variables set for you, do not change here
  int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  // Make your changes here
  //update sales
  booksSold += 200;
  //update total sales
  totalSalesValue = booksSold * bookCost;
  totalSalesValue /= 2; 



  // Output logic, no need to change this
  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);

  // exercise 2: increment & decrement
  int n = 13;
  int m = 10;
  
  m--;
  n++;
  printf("m = %d\n", m);
  printf("n = %d\n", n);

  //exercise 3: find losses
    int timesServerCrashed = 5;
  double losses = 500.95;


  losses *= timesServerCrashed;
  printf("Total Losses: $%.2f\n", losses);

  //adjust the losses
  losses /= 2;
  printf("Adjusted Losses: $%.2f\n", losses);

}
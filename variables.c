#include <stdio.h>

int main()
{

  // exercise 1

  int number;
  int test;
  int example;

  printf("Hello World!\n");

  // exercise 2

  int studenRank;
  float studentFeeTotal;
  char studentGradeLetter;

  // assign values to variables
  studenRank = 2;
  studentFeeTotal = 1234.56;
  studentGradeLetter = 'A';

  // lets print these values
  printf("Student Rank: %dnd\n", studenRank);
  printf("Student Fee Total: %4.2f\n", studentFeeTotal);
  printf("Student Grade Letter: %c\n", studentGradeLetter);

  // exercies 3

  int ageLearnedToRide = 5;

  printf("I was %d years old when I learned to ride a bike.\n", ageLearnedToRide);
  printf("I hope I stil remember how to ride.\n");

  // exercise 4

  int numOfBooks = 3;
  char favLetter = 'A';
  char favDigit = '7';
  double costOfCandyBar = 1.99;

  printf("Number of books: %d\n", numOfBooks);
  printf("Your Favorite Letter is: %c\n", favLetter);
  printf("Your Favorite Digit is: %c\n", favDigit);
  printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);

  // exercise 5

  // These variables were created and had a starting value for you, no need to change
  char bookVersionReview = 'A';
  char movieVersionReview = 'B';
  double ticketPrice = 10.25;
  double bookPrice = 19.99;

  // Update the movie review score here
  movieVersionReview = 'C';

  // Update the ticket price here
  ticketPrice = bookPrice;

  // No need to change below here
  printf("The book version has a review score of %c and costs $%2.3f\n", bookVersionReview, bookPrice);
  printf("The movie version has a review score of %c and costs $%2.3f\n", movieVersionReview, ticketPrice);

  // exercise 6

  // Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.
  const double SPEEDOFLIGHT = 1.86;
  int timeTraveledInSeconds = 30;

  // No need to change below here
  printf("Light would travel %.2f miles in %d seconds\n",
         SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);
  

  // exercise 7

    double testScore = 95.7;
  int displayScore = 0;

  displayScore = (int)testScore;
  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);
}
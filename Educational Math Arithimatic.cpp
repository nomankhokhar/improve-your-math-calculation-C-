// Term Project :- Educational Project.
// Authors Noman Ali 
// Reg NO L1F20BSCS0554
/*This is Educational Project that Develop by Noman Ali. If you have problem with Arithimatic. You can practice through this 
programe to polish your arithimatic skills. Thanks */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int totalscore = 0; // to calculate total score of question.
	int score = 0; // to calculate gain score of question.

	cout << "*---------------------------------------------------*\n";
	cout << "\n*\t   Educational Term Project!                *\n\n";
	cout << "\n*\t       Author : Noman Ali                   *\n\n";
	cout << "*---------------------------------------------------*\n";
	char mainMenu = 0; // selection from MAIN MENU

	while (mainMenu != 'Q' || mainMenu != 'q')
	{
		cout << "\nPlease make a selection from the following : \n"; // this is menu for selection what you want.
		cout << "\nP : Practice Math : \n";
		cout << "S : Show Score : \n";
		cout << "Q : Quit : \n";
		cin >> mainMenu;


		if (mainMenu == 'P' || mainMenu == 'p')
		{
			char standard = 0; // For selecting Practice Questions level.

			

				cout << "\n\nWhat difficult level do you want : \n"; // Thsi menu show the levels of  Easy Medium Hard.
				cout << "E : Easy : \n";
				cout << "M : Medium : \n";
				cout << "H : Hard : \n";
				cin >> standard;


				if (standard == 'E' || standard == 'e') // This Section is for Easy Question.
				{
					totalscore = 0;
					score = 0;

					int Addition = 0;   // This Variable is use for Success Additon Questions
					int totalAddition = 0;  // This Variable use for Total Number of Addition Question.

					int subtraction = 0;  // This Variable is use for Success Subtraction Questions
					int totalSubtraction = 0;  // This Variable use for Total Number of Subtraction Question.

					int multiplication = 0;      // This Variable is use for Success Multiplication Questions
					int totalMultiplication = 0;  // This Variable use for Total Number of Multiplication Question.

					int division = 0;         // This Variable is use for Success Division Questions
					int totalDivision = 0;   // This Variable use for Total Number of Division Question.


					int numberOfQuestions = 0;  //This variable store number of question you want.

					cout << "How many problems do you want : ";
					cin >> numberOfQuestions;

					int successAttempt = 0;  //This Variable store Success Attempt of Question
					int correctAnswerForAddition = 0;   // this Variableis use to store Correct answer of Addition

					for (int i = 1; i <= numberOfQuestions; i++)
					{
						srand(time(0)); // This Function is use to Generate Every Time Different Number.
						int selectAns = 0;
						int randomNumberOne = (rand() % 20) - 10;  // This Variable is to Generate Random Number From -10 to 10 as First Operand
						int randomNumberTwo = (rand() % 20) - 10;  // This Variable is to Generate Random Number From -10 to 10 as Second Operand

						// This Condition will Generate Multiplication Question.
						if (randomNumberTwo >= 2 && randomNumberTwo <= 4)
						{
							int Answer = randomNumberOne * randomNumberTwo;
							cout << "\nWhat is : " << randomNumberOne << " * " << randomNumberTwo << " = ";
							cin >> selectAns;
							if (selectAns == Answer)
							{
								multiplication++;
								score += 2;
								totalscore += 2;
								totalMultiplication++;
								cout << "\nCorrect, great job!\n";
								successAttempt++;
								correctAnswerForAddition++;
							}
							else
							{
								totalMultiplication++;
								totalscore += 2;
								cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
							}
						}
						// // This Condition will Generate Subtraction Question.
						else if (randomNumberTwo >= 4 && randomNumberTwo <= 6)
						{
							int Answer = randomNumberOne - randomNumberTwo;
							cout << "\nWhat is : " << randomNumberOne << " - " << randomNumberTwo << " = ";
							cin >> selectAns;
							if (selectAns == Answer)
							{
								score += 2;
								totalscore += 2;
								subtraction++;
								totalSubtraction++;
								cout << "\nCorrect, great job!\n";
								successAttempt++;
								correctAnswerForAddition++;
							}
							else
							{
								totalSubtraction++;
								totalscore += 2;
								cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
							}
						}

						// This Condition will Generate Division Question.

						else if (randomNumberTwo >= 6 && randomNumberTwo <= 8)
						{
							if (randomNumberOne >= randomNumberTwo && randomNumberTwo != 0)
							{
								int Answer = randomNumberOne / randomNumberTwo;
								cout << "\nWhat is : " << randomNumberOne << " / " << randomNumberTwo << " = ";
								cin >> selectAns;
								if (selectAns == Answer)
								{
									score += 2;
									totalscore += 2;
									division++;
									totalDivision++;
									cout << "\nCorrect, great job!\n";
									successAttempt++;
									correctAnswerForAddition++;
								}
								else
								{
									totalDivision++;
									totalscore += 2;
									cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
								}
							}
							else
							{
								// // This Condition will Generate Addition Question.
								int Answer = randomNumberOne + randomNumberTwo;
								cout << "\nWhat is : " << randomNumberOne << " + " << randomNumberTwo << " = ";
								cin >> selectAns;
								if (selectAns == Answer)
								{
									score += 2;
									totalscore += 2;
									Addition++;
									totalAddition++;
									cout << "\nCorrect, great job!\n";
									successAttempt++;
									correctAnswerForAddition++;
								}
								else
								{
									totalAddition++;
									totalscore += 2;
									cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
								}
							}

						}

						// This Condition will Generate Addition Question.

						else
						{
							int Answer = randomNumberOne + randomNumberTwo;
							cout << "\nWhat is : " << randomNumberOne << " + " << randomNumberTwo << " = ";
							cin >> selectAns;
							if (selectAns == Answer)
							{
								score += 2;
								totalscore += 2;
								Addition++;
								totalAddition++;
								cout << "\nCorrect, great job!\n";
								successAttempt++;
								correctAnswerForAddition++;
							}
							else
							{
								totalAddition++;
								totalscore += 2;
								cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
							}
						}
					}
					// This Section wil Display the Progress of the User.
					cout << "\nYour score is " << score << " / " << totalscore << endl;
					cout << "\nYou got " << successAttempt << " / " << numberOfQuestions << " questions correct.\n";
					cout << "\nAddition  Subtraction  Multiplication  Division \n";
					cout << endl << Addition << " / " << totalAddition << "   " << subtraction << " / " << totalSubtraction << "   " << multiplication << " / " << totalMultiplication << "   " << division << " / " << totalDivision << endl;
					// These condition will generate Suggestion for more parctice in specifice Arithimatic Problem.
					if (Addition < totalAddition)
					{
						cout << "\nNeed more practice with Addition.\n";
					}
					if (subtraction < totalSubtraction)
					{
						cout << "\nNeed more practice with Subtraction\n";
					}
					if (multiplication < totalMultiplication)
					{
						cout << "\nNeed more practice with Multiplication\n";
					}
					if (division < totalDivision)
					{
						cout << "\nNeed more practice with Division\n";
					}
				}
				// This Section is for Medium Question.
				else

				if (standard == 'M' || standard == 'm')
				{
					int numberOfQuestions = 0;   //This variable store number of question you want.

					int Addition = 0;    // This Variable is use for Success Additon Questions
					int totalAddition = 0;    // This Variable use for Total Number of Addition Question.

					int subtraction = 0;    // This Variable is use for Success Subtraction Questions
					int totalSubtraction = 0;   // This Variable use for Total Number of Subtraction Question.

					int multiplication = 0;   // This Variable is use for Success Multiplication Questions
					int totalMultiplication = 0;   // This Variable use for Total Number of Multiplication Question.

					int division = 0;    // This Variable is use for Success Division Questions
					int totalDivision = 0;  // This Variable use for Total Number of Division Question.

					totalscore = 0;
					score = 0;

					cout << "How many problems do you want : ";
					cin >> numberOfQuestions;

					int successAttemptMedium = 0;
					int correctAnswerForMedium = 0;

					for (int i = 1; i <= numberOfQuestions; i++)
					{
						srand(time(0)); // This Function is use to Generate Every Time Different Number.
						int selectAns = 0;
						int randomNumberOne = (rand() % 100) - 50; // This Variable Will Generate Random Number From -50 to 50 as First Number. 
						int randomNumberTwo = (rand() % 100) - 50; // This Variable Will Generate Random Number From -50 to 50 as Second Number.

						// This Condition will Generate Multiplication Question.
						if (randomNumberTwo >= 0 && randomNumberTwo <= 10)
						{
							int Answer = randomNumberOne * randomNumberTwo;
							cout << "\nWhat is : " << randomNumberOne << " * " << randomNumberTwo << " = ";
							cin >> selectAns;
							if (selectAns == Answer)
							{
								score += 4;
								totalscore += 4;
								multiplication++;
								totalMultiplication++;
								cout << "\nCorrect, great job!\n";
								successAttemptMedium++;
								correctAnswerForMedium++;
							}
							else
							{
								totalMultiplication++;
								totalscore += 4;
								cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
							}
						}
						// This Condition will Generate Subtraction Question.
						else if (randomNumberTwo >= 0 && randomNumberTwo <= 20)
						{
							int Answer = randomNumberOne - randomNumberTwo;
							cout << "\nWhat is : " << randomNumberOne << " - " << randomNumberTwo << " = ";
							cin >> selectAns;
							if (selectAns == Answer)
							{
								score += 4;
								totalscore += 4;
								subtraction++;
								totalSubtraction++;
								cout << "\nCorrect, great job!\n";
								successAttemptMedium++;
								correctAnswerForMedium++;
							}
							else
							{
								totalSubtraction++;
								totalscore += 4;
								cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
							}
						}

						// This Condition will Generate Division Question.

						else if (randomNumberTwo >= 30 && randomNumberTwo <= 40)
						{
							if (randomNumberOne >= randomNumberTwo && randomNumberTwo != 0)
							{
								int Answer = randomNumberOne / randomNumberTwo;
								cout << "\nWhat is : " << randomNumberOne << " / " << randomNumberTwo << " = ";
								cin >> selectAns;
								if (selectAns == Answer)
								{
									score += 4;
									totalscore += 4;
									division++;
									totalDivision++;
									cout << "\nCorrect, great job!\n";
									successAttemptMedium++;
									correctAnswerForMedium++;
								}
								else
								{
									totalDivision++;
									totalscore += 4;
									cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
								}
							}
							//// This Condition will Generate Addition Question.
							else {
								int Answer = randomNumberOne + randomNumberTwo;
								cout << "\nWhat is : " << randomNumberOne << " + " << randomNumberTwo << " = ";
								cin >> selectAns;
								if (selectAns == Answer)
								{
									score += 4;
									totalscore += 4;
									Addition++;
									totalAddition++;
									cout << "\nCorrect, great job!\n";
									successAttemptMedium++;
									correctAnswerForMedium++;
								}
								else
								{
									totalAddition++;
									totalscore += 4;
									cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
								}
							}
						}

						// This Condition will Generate Addition Question.

						else
						{
							int Answer = randomNumberOne + randomNumberTwo;
							cout << "\nWhat is : " << randomNumberOne << " + " << randomNumberTwo << " = ";
							cin >> selectAns;
							if (selectAns == Answer)
							{
								score += 4;
								totalscore += 4;
								Addition++;
								totalAddition++;
								cout << "\nCorrect, great job!\n";
								successAttemptMedium++;
								correctAnswerForMedium++;
							}
							else
							{
								totalAddition++;
								totalscore += 4;
								cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
							}
						}
					}
					// This Section Will Display the progress of the User.
					cout << "\nYour score is " << score << " / " << totalscore << endl;
					cout << "\nYou got " << successAttemptMedium << " / " << numberOfQuestions << " questions correct.\n";
					cout << "\nAddition  Subtraction  Multiplication  Division \n";
					cout << endl << Addition << " / " << totalAddition << "   " << subtraction << " / " << totalSubtraction << "   " << multiplication << " / " << totalMultiplication << "   " << division << " / " << totalDivision << endl;
					// These condition will generate Suggestion for more parctice in specifice Arithimatic Problem.
					if (Addition < totalAddition)
					{
						cout << "\nNeed more practice with Addition.\n";
					}
					if (subtraction < totalSubtraction)
					{
						cout << "\nNeed more practice with Subtraction\n";
					}
					if (multiplication < totalMultiplication)
					{
						cout << "\nNeed more practice with Multiplication\n";
					}
					if (division < totalDivision)
					{
						cout << "\nNeed more practice with Division\n";
					}
				}
				// This Section is for Medium Question.
				else if (standard == 'H' || standard == 'h')
				{
					int numberOfQuestions = 0; //This variable store number of question you want.

					int Addition = 0;   // This Variable is use for Success Additon Questions
					int totalAddition = 0;   // This Variable use for Total Number of Addition Question.

					int subtraction = 0;   // This Variable is use for Success Subtraction Questions
					int totalSubtraction = 0;    // This Variable use for Total Number of Subtraction Question.

					int multiplication = 0;  // This Variable is use for Success Multiplication Questions
					int totalMultiplication = 0;   // This Variable use for Total Number of Multiplication Question.

					int division = 0;     // This Variable is use for Success Division Questions
					int totalDivision = 0;  // This Variable use for Total Number of Division Question.

					totalscore = 0;
					score = 0;

					cout << "How many problems do you want : ";
					cin >> numberOfQuestions;

					int successAttemptHard = 0;
					int correctAnswerForHard = 0;

					for (int i = 1; i <= numberOfQuestions; i++)
					{
						srand(time(0));  // This Function is use to Generate Every Time Different Number.
						int selectAns = 0;
						int randomNumberOne = (rand() % 200) - 100; // This Variable will STore Random Number from -100 to 100 as First Number. 
						int randomNumberTwo = (rand() % 200) - 100;  //// This Variable will STore Random Number from -100 to 100 as Second Number.

						// This Section will Generate Addition Question. 
						if (randomNumberTwo >= 20 && randomNumberTwo <= 40)
						{
							int Answer = randomNumberOne + randomNumberTwo;
							cout << "\nWhat is : " << randomNumberOne << " + " << randomNumberTwo << " = ";
							cin >> selectAns;
							if (selectAns == Answer)
							{
								score += 5;
								totalscore += 5;
								Addition++;
								totalAddition++;
								cout << "\nCorrect, great job!\n";
								successAttemptHard++;
								correctAnswerForHard++;
							}
							else
							{
								totalAddition++;
								totalscore += 5;
								cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
							}
						}
						// This Section will Generate Subtraction Question.
						else if (randomNumberTwo >= 50 && randomNumberTwo <= 70)
						{
							int Answer = randomNumberOne - randomNumberTwo;
							cout << "\nWhat is : " << randomNumberOne << " - " << randomNumberTwo << " = ";
							cin >> selectAns;
							if (selectAns == Answer)
							{
								score += 5;
								totalscore += 5;
								subtraction++;
								totalSubtraction++;
								cout << "\nCorrect, great job!\n";
								successAttemptHard++;
								correctAnswerForHard++;
							}
							else
							{
								totalSubtraction++;
								totalscore += 5;
								cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
							}
						}

						// This Section will Generate Division Question.

						else if (randomNumberTwo >= 80 && randomNumberTwo <= 100)
						{
							if (randomNumberOne >= randomNumberTwo && randomNumberTwo != 0)
							{
								int Answer = randomNumberOne / randomNumberTwo;
								cout << "\nWhat is : " << randomNumberOne << " / " << randomNumberTwo << " = ";
								cin >> selectAns;
								if (selectAns == Answer)
								{
									score += 5;
									totalscore += 5;
									division++;
									totalDivision++;
									cout << "\nCorrect, great job!\n";
									successAttemptHard++;
									correctAnswerForHard++;
								}
								else
								{
									totalDivision++;
									totalscore += 5;
									cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
								}
							}
							else {
								// This Section will Generate Subtraction Question.
								int Answer = randomNumberOne - randomNumberTwo;
								cout << "\nWhat is : " << randomNumberOne << " - " << randomNumberTwo << " = ";
								cin >> selectAns;
								if (selectAns == Answer)
								{
									score += 5;
									totalscore += 5;
									subtraction++;
									totalSubtraction++;
									cout << "\nCorrect, great job!\n";
									successAttemptHard++;
									correctAnswerForHard++;
								}
								else
								{
									totalSubtraction++;
									totalscore += 5;
									cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
								}
							}
						}

						// This Section will Generate Multiplication Question.

						else
						{
							int Answer = randomNumberOne * randomNumberTwo;
							cout << "\nWhat is : " << randomNumberOne << " * " << randomNumberTwo << " = ";
							cin >> selectAns;
							if (selectAns == Answer)
							{
								score += 5;
								totalscore += 5;
								multiplication++;
								totalMultiplication++;
								cout << "\nCorrect, great job!\n";
								successAttemptHard++;
								correctAnswerForHard++;
							}
							else
							{
								totalMultiplication++;
								totalscore += 5;
								cout << "\nSorry, that's incorrect, the answer is : " << Answer << "\n";
							}
						}
					}
					// This Section will show the progress of the User.
					cout << "\nYour score is " << score << " / " << totalscore << endl;
					cout << "\nYou got " << successAttemptHard << " / " << numberOfQuestions << " questions correct.\n";
					cout << "\nAddition  Subtraction  Multiplication  Division \n";
					cout << endl << Addition << " / " << totalAddition << "   " << subtraction << " / " << totalSubtraction << "   " << multiplication << " / " << totalMultiplication << "   " << division << " / " << totalDivision << endl;
					// These condition will generate Suggestion for more parctice in specifice Arithimatic Problem.
					if (Addition < totalAddition)
					{
						cout << "\nNeed more practice with Addition.\n";
					}
					if (subtraction < totalSubtraction)
					{
						cout << "\nNeed more practice with Subtraction\n";
					}
					if (multiplication < totalMultiplication)
					{
						cout << "\nNeed more practice with Multiplication\n";
					}
					if (division < totalDivision)
					{
						cout << "\nNeed more practice with Division\n";
					}
				}
				else {
					cout << "\nInvalid InPut!\n";
				}
			}
		else if (mainMenu == 'S' || mainMenu == 's') // This condition Show Last Score of the User
		{
			if (totalscore == 0)
			{
				cout << "\nNo score found.!\n";
			}
			else 
			{
				cout << "\nYour last score was : " << score << " / " << totalscore << endl;
			}
		}
		else if (mainMenu == 'Q' || mainMenu == 'q') // This condition is for terminate the programe
		{
			cout << "\nThank you for practicing!\n";
			return 0;
		}
		else // This part is for invalid input.if user enter.
		{
			cout << "\nInvalid Input!\n";
		}
	}


	return 0;
}
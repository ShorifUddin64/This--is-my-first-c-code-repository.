#include<iostream>
using namespace std;
int main ()
{
    int shortcount=0, mediumcount =0, longcount =0 , palindromecount =0;
    const int numwords=5;

    for (int i = 1 ; i < 5 ; ++i) {
              string word ;
              cout << "Enter 5 words:" << std ::endl;
              cin >> word;
    }



            int word = 5;
            int length =10;
            int a = word*length;

            std :: string category;

     if ( length < 4 ){
         category = "short";
         shortcount ++;

        }
         else if
                 (length>=4  &&  length<=7 );
                 { category = "medium";}

                shortcount++;


        else
                category= "Long";
                longcount ++;


        bool palindrome = is palindrome (word);
        if (palindrome){
            palindrome_count++;
        }
        //Display for each word
        std::cout << "word"<<i+1<<":"<<word<<"-> length "<< length <<", Category "<< category << "," (palindrome?"palindrome" :"Not palindrome")<< std ::endl;
        }
// Display summary counts
        summary-counts[category]++;

    cout << "\nSummary:" << std :: endl;
    cout << "short words" << std::endl
    cout<< "medium words" << std::endl
    cout<< "Long words" << std::endl
    cout << "palindrome words:"<< palindrome_count <<std::endl



    return 0;
}

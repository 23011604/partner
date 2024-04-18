#include <iostream>

using namespace std;

int main()
{
   int age;

   char gender;
    bool kind, goals,  care, faithfull, respect, empathy;

  cout << "let get you a soulmate!" <<endl;

   cout << "Enter your age:" << endl;
   cin >> age;
    cout << "Enter your  gender "<< endl;
    cin >> gender;
    cout << "Thanks please answer the following question"<< endl;

     cout << "Thanks please answer the following question"<< endl;

      cout << "are you kind"<< endl;
      cin >> kind;

       cout << "do you have goals"<< endl;
       cin >> goals;

        cout << "do you care for other people"<< endl;
        cin >> care;


         cout << "are faithfull"<< endl;
         cin >> faithfull;
          cout << "do you respect other people no matter who they are"<< endl;
          cin >> respect;
           cout << "do you  emphathis with other people`"<< endl;
           cin >> empathy;

           if(age >= 18 && age <= 25){
        if (gender == 'female' ) {
            if (kind && goals &&  care && faithfull&& respect && empathy) {
                cout << "Congratulations! You've found a compatible partner";
            } else {
                cout << " look for someone else";
            }
        }


    }





    return 0;
}


Encapsulation is wrapping up of data and information in a single unit while controlling access to them.

In oop class ==> single unit ==> private
Hence data is protected .

We cannot directly access the private data member from the outside function . Data hiding . Data is access by using functions

### Abstraction means Displaying only essentail information and hiding the details

Eg : If i have a class that does sorting , we need to display only the sorting function and hide the unneccessarry varaibles

class Customer{
string name ;
int balance ;

            public :
                        Customer (string a  , int b) : name (a ) , balance (b ){ };

                        void deposit(int amount){
                                    if(amount>0){
                                                                                                                                                                    balance +=amount ;
                                    }
                        }

}

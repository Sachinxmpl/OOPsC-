### Almost all operators in C++ can be overladed except the following operators

1. :: (scope resolution operator)
2. . (member selection)
3. .\* (member selection trhough point to function)
4. ?: (ternary conditional operator)

## Generic sysntax

To perform operator overloading , a special overloading function has to be defined. It can be defined either as a member funciton or as a friend function .

return_type operator existingoperator (arguments){

}

### Rules for operator overloading

- Operator overloading allows you to redefine the way operator works for userdefined types only (objects, structures). It cannot be used for built-in types (int,float, char etc.).Operator overloading is only
- Two operators = and & are already overloaded by default in C++. For example: To copy objects of same class, you can directly use = operator. You do not need to create an operator function

- Operator overloading cannot change the precedence and associatively of
operators. However, if you want to change the order of evaluation, parenthesis
should be used.
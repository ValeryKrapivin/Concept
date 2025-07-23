ComplexConcepts Library
This project is an example of using concepts in C++20 to define type requirements.
It allows checking for the presence of certain methods and properties on types, which contributes to safer and more readable template development.
Description
HasHash: Checks that type T has a hash() method that returns a type compatible with long.
HasToString: Checks that type T has a toString() method that returns std::string.
NoVirtualDestructor: Checks that type T does not have a virtual destructor.
ComplexConcept: The final concept that requires all of the above conditions to be met.

#include <string>

class LabClass {
public:
    /*	STEP 2 - Create a function:
                 1. No parameters
                 2. Return value is int
                 3. Functionality - Use the sizeof operator to determine
                    the size of each data member. Add those values and
                    return the sum.
    */
    int get_size() {
        return sizeof(array_s) + sizeof(the_int) + sizeof(the_float);
    }


private:
    /*	STEP 1 - Create 3 data members:
                 1. one array of 100 strings
                 2. one integer
                 3. one float
    */
    std::string array_s[100];
    int the_int ;
    float the_float;


};

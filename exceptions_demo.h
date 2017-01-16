#include <iostream>

namespace DemoExceptions
{
    class Exceptions
    {
        public:
        void demo_throw_int(const int toThrow)
        {
            try
            {
                throw toThrow;
            }
            catch (int& i)
            {
                std::cout<<"Caught integer "<<i<<std::endl;
            }
        }
    };
}
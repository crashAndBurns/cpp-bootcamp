// Preprocessor does any work that is 
// needed before the compiler converts
// the source code to machine code.

// iostream allows handling of input and
// output (this includes a library).
#include <iostream>

// tells compiler we're using the standard
// namespace. So we don't have to identify
// the namespace we're using for cout.
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}
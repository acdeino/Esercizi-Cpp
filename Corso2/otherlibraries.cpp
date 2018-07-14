#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <ctime> // instead of #include <time.h>

#include <abc.h> //this is in C format
#include <cabc> //this is the same library imported into C++

/* Libraries are are modules of already-compiled code
which are accessed through the code being written */

// There's no need to add the .h suffix to the libraries as in C

#include "somelib.h" // this is not going to compile unless the lib is in the same folder as the file which includes it so, in order to make it work you've to do:

#include "path/to/the/file/somelib.h"

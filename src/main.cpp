//
// Created by Alex Hutchins on 4/11/2018.
//

#include "h/help.h"

using std::string
using std::vector

struct Args
{
    string path;
    vector<string> files;
    bool help;
    bool error;
};

Args getArgs(int argc, char ** argv);

int main(int argc, char ** argv)
{
    Args args = getArgs(argc, argv);

    if (args.error || args.help) {
        printHelp();
        return 0;
    }
}
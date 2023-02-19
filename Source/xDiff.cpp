#include "Pch.h"
#include "Utils.h"

class xDiff
{
public:
    xDiff(int Argc, char** Argv)
    {
        for (int Count : Range(Argc))
        {
            
        }
    }

    ~xDiff(void) = default;

public:
    int Run(void)
    {
        return EXIT_SUCCESS;
    }

private:

};

int main (int Argc, char** Argv)
{
    return xDiff(Argc, Argv).Run();
}
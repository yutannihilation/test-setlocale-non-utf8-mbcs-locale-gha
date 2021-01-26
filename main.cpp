#include <regex>

int main(int argc, char const *argv[])
{
    if (argc <= 1)
    {
        fprintf(stderr, "Provide a locale");
        return 1;
    }
    if (!setlocale(LC_COLLATE, argv[1]))
    {
        fprintf(stderr, "failed to set locale");
        return 2;
    }
    std::regex reg("[0-9]");
    return 0;
}

#include "heart.h"
class Home : public View
{
    Httpresponse get(Request request)
    {
        return Httpresponse();
    }
};

int main(int argc, char const *argv[])
{

    Server::run();
    return 0;
}
// Synchronously

#include "include.h"

int main()
{
    asio::io_context io;

    asio::steady_timer t(io, asio::chrono::seconds(5));
    t.wait();
    cout << "Hello World!" << endl;
    return 0;
}
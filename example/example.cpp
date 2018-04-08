
#include "logger/logger.hpp"
#include "spsc/spsc.hpp"

int main()
{
    set_log_level(logger_iface::log_level::warn);
    auto tmp = new SPSCQueue<void *>(100);
    tmp->enqueue((void *)1);
    void *element = NULL;
    tmp->dequeue(element);

    __LOG(error, "enement is : " << (void *)element);
}

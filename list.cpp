#include <iostream>
#include <list>
#include <memory>
#include <thread>
#include <pthread.h>

using namespace std;

void* func(void *arg) {
    cout << "from func" << endl;

    return nullptr;
}
void dummyfunc() {
    cout << "from dummy func" << endl;
}
int main() {
    
    list<int> lt;
    lt.push_back(10);

    cout << lt.size() << endl;

    unique_ptr<int> uptr = make_unique<int>(5);

    cout << *uptr << endl;

    thread th(dummyfunc);
    th.join();

    pthread_t thid;
    pthread_create(&thid, nullptr, func,nullptr);

    pthread_join(thid,nullptr);

    return 0;
}
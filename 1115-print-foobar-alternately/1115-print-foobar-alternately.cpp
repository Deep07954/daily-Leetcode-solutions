class FooBar {
private:
    int n;

public:
std::mutex mtx;
std::condition_variable cv;
int turn;
    FooBar(int n) {
        this->n = n;
        turn=0; //==foo and 1=bar
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            std::unique_lock<std::mutex>lock(mtx);
            while(turn!=0){
                cv.wait(lock);
            }
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            turn=1;
            cv.notify_all();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            
        	// printBar() outputs "bar". Do not change or remove this line. 
             std::unique_lock<std::mutex>lock(mtx);
            while(turn!=1){
                cv.wait(lock);
            }
        	printBar();
            turn=0;
            cv.notify_all();
        }
    }
};
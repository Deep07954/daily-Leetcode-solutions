class ZeroEvenOdd {
private:
    int n;

public:
std::mutex mtx;
std::condition_variable cv;
int turn;
int curr;
    ZeroEvenOdd(int n) {
        this->n = n;
        turn=0; //0=zero() 1=even();2=odd()
        curr=1;
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        for(int i=0;i<n;i++){
            std::unique_lock<std::mutex> lock(mtx);
            while(turn!=0){
                cv.wait(lock);
            }
            printNumber(0);
            //decide whos turn it is
            if(curr%2==1){
                turn=1;//oddthread ke pass jao
            }
            else
            turn=2; //even thread k pass jao
         
           
            cv.notify_all();
        }
    }

    void even(function<void(int)> printNumber) {
          for(int i=0;i<n/2;i++){
            std::unique_lock<std::mutex> lock(mtx);
            while(turn!=2){
            cv.wait(lock);}
            printNumber(curr);
            curr++;
          
          turn=0;
          cv.notify_all();
        }
    }

    void odd(function<void(int)> printNumber) {
         for(int i=0;i<(n+1)/2;i++){
            std::unique_lock<std::mutex> lock(mtx);
            while(turn!=1){
            cv.wait(lock);
            }
           printNumber(curr);
           curr++;
         
          turn=0;
          cv.notify_all();
         }
    
    }
};
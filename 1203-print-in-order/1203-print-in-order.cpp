class Foo {
public:
    Foo() =default;
    std::binary_semaphore second1{0},third2{0};
        
    

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        second1.release();
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        second1.acquire();
        printSecond();
        third2.release();
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        third2.acquire();
        printThird();
    }
};
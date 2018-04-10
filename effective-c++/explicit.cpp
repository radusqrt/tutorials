class B {
    public:
        explicit B(int x = 0, bool b = true) {

        }
};

void doSomething(B obj) {

}

int main() {
    doSomething(23); // without "explicit" this would pass
    doSomething(B(23));
    return 0;
}
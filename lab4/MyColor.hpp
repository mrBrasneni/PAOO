class Uncopyable {
    private:
        Uncopyable& operator=(const Uncopyable&);
};


class MyColor:private Uncopyable{
    public:
        MyColor();
        static MyColor& colorTransfer();
        void print();
    private:
        int r, g, b;
};


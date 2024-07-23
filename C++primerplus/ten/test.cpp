class Bakery {
private:
    static const int Months = 12;  // 可以在类内部直接初始化
    double consts[Months];

public:
    Bakery() {
        for (int i = 0; i < Months; ++i) {
            consts[i] = 0.0;
        }
    }

    void setConst(int month, double value) {
        if (month >= 0 && month < Months) {
            consts[month] = value;
        }
    }

    double getConst(int month) const {
        if (month >= 0 && month < Months) {
            return consts[month];
        }
        return 0.0;
    }
};



class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sumdiv = 0;
        for (int x=1;x<=n;x++)
        {
            if (n%x==0)
            sumdiv+=x;
        }
        return sumdiv;
    }
};


class TestDataEmptyArray
{
public:
    static vector<int> get_array()
    {
        vector<int> a;
        return a;
    }
};
class TestDataUniqueValues
{
public:
    static vector<int> get_array()
    {
        vector<int> a{40, 20, 30};
        return a;
    }
    static int get_expected_result()
    {
        return 1;
    }
};
class TestDataExactlyTwoDifferentMinimums
{
public:
    static vector<int> get_array()
    {
        vector<int> a{40, 20, 30, 20};
        return a;
    }
    static int get_expected_result()
    {
        return 1;
    }
};

typedef int Rank;
#define DEFAULT_CAPACITY 3

template <typename T>
class Vector{
protected:
    Rank _size; int _capacity; T* _elem;//size, capacity and data field
    void copyFrom(T const* A, Rank lo, Rank hi);
    void expand();
    void shrink();
    bool bubble(Rank lo, Rank hi);

public:
    //constructor
    Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0)
    {
        _elem = new T[_capacity = c];
        for (_size = 0; _size < s; _elem[_size++] = v);
    }


    //delete
    ~Vector() { delete [] _elem; }
    //Read Only
    Rank size() const { return _size; }
    bool empty() const { return !_size; }

    //Write
    Rank insert(Rank r, T const& e);
    Rank insert(T const& e) { return insert(_size, e); }

    //overload
    T& operator[](Rank r) const;
};

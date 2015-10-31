template <typename T>
class AddElements
{
    public:
    AddElements(const T& element) : element {element}
    { };
    
    T add(const T& element_2)
    {
        return element + element_2;
    }
    
    private:
    T element;
};

template<>
class AddElements<string>
{
    public:
    AddElements(const string& element) : element {element}
    { }
    
    string concatenate(const string& element_2)
    {
        return element + element_2;    
    }
    private:
    string element;
    
};

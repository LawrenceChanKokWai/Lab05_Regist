/// @file Vector.h
/// @brief Vector Class for storing registration records.
///
/// This class contains the implementations for the vector class.
/// It consists of constructor, getters,
/// Resize, AppendObject, and GetObjectByIndex.
///
/// @author Chan Kok Wai
///
///

#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include<stdexcept>

///
/// @brief Vector Class for storing registration records.
///
/// This class contains the implementations for the vector class.
/// It consists of constructor, getters,
/// Resize, AppendObject, and GetObjectByIndex.
///
/// @author Chan Kok Wai
/// @version 1.0.0
///
template<class T>
class Vector
{
public:

    ///
    ///  @brief  Default constructor
    ///
    ///  @details This initialize the default vector object and creates a
    ///  vector with default values of capacity = 2, used slot = 0, and array pointer = nullptr.
    ///
    Vector();

    ///
    ///  @brief  destructor
    ///
    ///  @details This destructor takes in the function named Deallocate.
    ///  It releases the memory space of the vector.
    ///
    ~Vector();

    ///
    ///  @brief  Copy constructor
    ///
    ///  @details This initialize a vector object and copies a
    ///  vector from another vector object.
    ///
    /// @param[in] &otherVector The reference vector object that will be used to be copied from.
    ///
    Vector(const Vector &otherVector);

    ///
    /// @brief Overload equals operator
    ///
    /// @details This is a overloaded equals operator function that deletes the existing
    /// dynamic array & setting it to nullptr. Then copies the new dynamic arr
    ///
    /// @param[in] &otherVector The reference of otherVector used to be copied from.
    /// @return *this The elements in the vector
    ///
    Vector &operator = (const Vector &otherVector);

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the capacity of the dynamic array.
    ///
    /// @return The capacity of the dynamic array.
    ///
    unsigned GetCapacity() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the spaces that are used in the dynamic array.
    ///
    /// @return The spaces used in the dynamic array.
    ///
    unsigned GetUsed() const;

    ///
    /// @brief Member Method
    ///
    /// @details This function gets the array address of the dynamic array.
    ///
    /// @return The array address of the dynamic array.
    ///
    T *GetArray() const;

    ///
    /// @brief Procedure
    ///
    /// @details This function resizes the capacity of the dynamic array under the condition
    /// that used slots is half of the dynamic array. Then only doubling the capacity by 2 will take place.
    ///
    /// @return Void
    ///
    void Resize();

    ///
    /// @brief Member Method
    ///
    /// @details This function appends the object or element into the dynamic array.
    ///
    /// @return[true] When element or object has been appended into the dynamic array.
    /// @return[false] When element or object appended into the dynamic array unsuccessful.
    ///
    bool AppendObject(T &object);

    T &GetObjectByIndex(unsigned index) const;

private:
    const unsigned INITIAL_CAPACITY = 2;
    unsigned m_capacity;
    unsigned m_used;
    T *m_array;

    ///
    /// @brief Procedure (Private)
    ///
    /// @details This function deletes the dynamic array from the heap memory, and sets array pointer to nullptr.
    ///
    /// @param *&ptr A pointer reference of the array pointer used for releasing the heap memory from.
    ///
    void Deallocate(T *&ptr);

    ///
    /// @brief Procedure (Private)
    ///
    /// @details This function copies the vector object from another initialized vector.
    ///
    /// @param[in] &otherVector The reference vector object used to be copied from.
    /// @return Void
    ///
    void CopyVector(const Vector &otherVector);
};

template<class T>
Vector<T>::Vector()
{
    m_capacity = INITIAL_CAPACITY;
    m_used = 0;
    m_array = new T[INITIAL_CAPACITY];
}

template<class T>
Vector<T>::~Vector()
{
    Deallocate(m_array);
}

template<class T>
void Vector<T>::Deallocate(T *&ptr)
{
    if(ptr != nullptr)
    {
        delete [] ptr;
        ptr = nullptr;
    }
}

template<class T>
unsigned Vector<T>::GetCapacity() const
{
    return m_capacity;
}

template<class T>
unsigned Vector<T>::GetUsed() const
{
    return m_used;
}

template<class T>
T *Vector<T>::GetArray() const
{
    return m_array;
}

template<class T>
void Vector<T>::CopyVector(const Vector &otherVector)
{
    m_capacity = otherVector.m_capacity;
    m_used = otherVector.m_used;
    T *newArray = new T[m_capacity];

    for(unsigned i(0); i < m_used; i++)
    {
        m_array[i] = newArray[i];
    }
}

template<class T>
Vector<T>::Vector(const Vector &otherVector)
{
    if(this != &otherVector)
    {
        CopyVector(otherVector);
    }
}

template<class T>
Vector<T> &Vector<T>::operator = (const Vector &otherVector)
{
    if(this != &otherVector)
    {
        CopyVector(otherVector);
    }
    return *this;
}

template<class T>
void Vector<T>::Resize()
{
    unsigned newCapacity = m_capacity * 2;

    T *newArray = new T[newCapacity];
    if(newArray != nullptr)
    {
        for(unsigned i(0); i < m_used; i++)
        {
            newArray[i] = m_array[i];
        }
    }
    Deallocate(m_array);

    m_array = new T[newCapacity];
    if(m_array != nullptr)
    {
        for(unsigned i(0); i < m_used; i++)
        {
            m_array[i] = newArray[i];
        }
    }
    Deallocate(newArray);
    m_capacity = newCapacity;
}

template<class T>
bool Vector<T>::AppendObject(T &object)
{
    if(m_used == m_capacity / 2)
    {
        Resize();
    }
    m_array[m_used] = object;
    m_used ++;
    return true;
}

template<class T>
T &Vector<T>::GetObjectByIndex(unsigned index) const
{
    if(index < m_used)
    {
        return m_array[index];
    }
    throw std::out_of_range("Index provided is out of range");
}

#endif // VECTOR_H_INCLUDED


#include <iostream>


class Stack2
{
private:
    int stack[10];
    int size;
    int top;
public:
    Stack2() : top(0),size(0)
    {}
    int GetSize()
    {
        return size;
    }
    void Push(int x)
    {
        if (size<10)
        {
            stack[size] = x;
            top=stack[size];
            size++;
        }
        else
        {
    
            std::cout << "Stack overflow!\n";
        }
    }
    
    int Pop(int x)
    {
        size--;
        if (0==x)
        {
            top=stack[size-1];
            return stack[size];
        }
        top=stack[size-1];
        return stack[size];
    }
    int Peek()
    {
       if (size==0)
       {
           std::cout<< "Вершины нет";
           return -1;
       }
        return this->top;
    }
    bool Emptiness()
    {
        if (size==0)
        {
            std::cout<<"Стек пустой";
            return false;
        }
        else
            std::cout<<"Стек полный";
        return true;
    }
    
    void Show();
    
    
};

void Stack2::Show()
{
    for (int i=0;i<10;++i) //Использую 10 потому что не могу понять почему  GetSize() показывает неправильное значение и выводит /2 элемента
    {
        std::cout<<Pop(i)<<" ";
    }
}
int main()
{
    Stack2 st;
    st.Push(22);
    st.Push(23);
    st.Push(24);
    st.Push(25);
    st.Push(26);
    st.Push(27);
    st.Push(28);
    st.Push(29);
    st.Push(30);
    st.Push(31);
    std::cout<<"Удаляем массив - ";
    st.Show();
    std::cout<<std::endl;
    std::cout<<"Вершина - ";
    std::cout<<st.Peek();
    std::cout<<std::endl;
    st.Emptiness();
    std::cout<<std::endl;
   
}

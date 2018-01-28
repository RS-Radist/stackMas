//
//  main.cpp
//  Stack
//
//  Created by iMac on 25.01.18.
//  Copyright © 2018 Stack. All rights reserved.
//

#include <iostream>

//struct Stack
//{
//    int value;
//    Stack* next;
//};
// FIFO - Queue, CircleQueue, PriorityQueue
// LIFO - stack
class Stack2
{
private:
   
    int* stack;
    int idx;
    int sizeStack;
    size_t top;
public:
    Stack2() : top(0),idx(0),sizeStack(0)
    {}
    
    void Push(int x)
    {
        if(idx < 10)
        {
            sizeStack++;
            stack=new int; // выделяем память
            stack[idx] = x; // записываем элемент
            int* temp=new int [idx];// выделяем память под размер
            memcpy(temp, stack, sizeof(stack)*idx); // переносим размер stacka умноженного на размер
            delete []stack;// удаляем стек
            stack=temp;// перезаписываем
            top=stack[idx];
            idx++;
        }
        else
        {
            std::cout << "Stack overflow!\n";
        }
     
       
        /*                           
        Stack* temp=new Stack; // создаем
        temp->value=x; // хзаписываем
        temp->next=nextElement; // следующий элемент стека указывает на  слудующий элемнет
        nextElement=temp; // перезаписываем элемен
        return temp->value;
         */
    }
    int Pop()
    {
        if (idx==0)
        {
            std::cout<<"Пустой стек";
        }
        if(idx >= 0)
        {
            idx--;
            sizeStack--;
            top=stack[idx-1];
            return stack[idx-1];
        }
        return -1;
        /*
        int temp2=nextElement->value;
        Stack* temp=nextElement;
        nextElement=nextElement->next;
        delete temp;
        return temp2;
         */
    }
    
    void Peek()
    {
       if (sizeStack==0)
       {
           std::cout<< "Вершины нет";
           
       }
        else
        std::cout<<top;
        
    }
    void Show()
    {
        for (int i =0;i<idx;++i)
        {
            std::cout<<stack[i]<<" ";
        }
    }
    void Emptiness()
    {
        if (sizeStack==0)
        {
            std::cout<<"Стек пустой";
        }
        else
            std::cout<<"Стек полный";
    }
  
    
};
int main()
{
    Stack2 st;
    std::cout<<"Стек - ";
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
    //st.Push(32);
    st.Show();
    std::cout<<std::endl;
    std::cout<<"Удаляем массив - ";
    st.Pop();
    st.Pop();
    st.Pop();
    st.Pop();
    st.Pop();
    st.Pop();
    st.Pop();
    st.Pop();
    st.Pop();
    st.Show();
    std::cout<<std::endl;
    std::cout<<"Вершина - ";
    st.Peek();
    std::cout<<std::endl;
    st.Emptiness();

    std::cout<<std::endl;
    st.Show();
   
}

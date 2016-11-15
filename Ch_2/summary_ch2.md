### Summary of chapter 1 & 2
* #### Key points
    1. **Classes** : Defining a type along with a collection of operations that are related to that type.
    2. **Member function** : A function defined as part of a class.
    3. **:: operator** : Scope operator used to access names in a namespace.
    4. **Reference** : just another name for an already existing object.
        ```C++
            int val = 1024;
            int &refVal = val; //now we defined a reference named refVal refers to val and reference must be initialized.
            return 0;
        ```
        * *Notations* :
            1. initializer must be an object;
            2. type match;
            3. reference is not object;
            4. once we initialized a reference, we can't change it.

    5. **Pointer** : A pointer holds the address of another object.
        ```C++
            int val = 1024;
            int *p = &val;//type match !!!
            int var = *p;//dereference to use the object p points.

            int *p1 = nullptr;//initialized a null pointer
            int *p2 = 0;//same as above
            int *p3 = NULL;//same as above

            //pointers can be changed
            int val1 = 2048;
            *p = &val1;//now p points to val1 not val
            double obj = 3.14, *p4 = &obj;
            void *p5 = &obj;//void* pointer can hold the address of any type
            p5 = p4;//it's ok.

            //and we can define a reference to a pointer
            int i = 42;
            int *p6 =;
            int *&r = p6;//r is a reference to the pointer p6
            r = &i;//as r is the ref of a pointer, so we can initialize it as a pointer
        ```
        * *Notations* :
            1. Read the definition right to left for better understanding.
            2. The symbol closest to the name of the variable has the most immediate effect on the variable's type.

    6. **const** : Type qualifier used to define object that may not be changed.
        - *References to const*
        ```C++
            const int c = 1024;
            const int &r = c;//a reference to const
            //and as c is a const, so we can't assign to c, as well as its reference---r.

            //here is one exception to the rule that type must match
            int i = 42;
            const int &r1 = i;
            const int &r2 = 42;
            const int &r3 = r1 * 2;// all is ok
            int &r4 = r * 2; //error

            double d = 3.14;
            const int &r = d;//ok: cause compiler will transform d into a int first, then assign that int to r.
        ```
        - *Pointers and const*

            > `pointer to const` is different from `const pointer`

        ```C++
            const double d = 3.14;
            const double *p = &d; //a normal pointer points to a const object
            int num = 3;
            int *const cp = &num; //a const pointer points to a normal object
            const double *const pd = &d;//a const pointer points to a const object

            double d1 = 3.04;
            *p = &d1; //error: *p(that is d) is a const
            *cp = 5; //ok: num is not a const
        ```

        * *Notations* :
            1. if you want to share a const object among multiple files, define the variable as `extern`.
            2. whether we can change a object depends on entirely on the type to which the pointer points.

* #### New features
    1. **nullptr**

    2. **constexpr**
        `Page 66`
    3. **type alias**
    ```C++
        typedef double wages; //wages is a synonym for double
        typedef wages base, *p; //base is a synonym for double, p for double*
        //new standard
        using d = double; //d is a synonym for double
    ```
    4. **auto**
    ```C++
        auto a = 0;//then a is a int
    ```

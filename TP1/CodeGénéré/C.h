#ifndef C_h
#define C_h

class B;
class A;

class C {

 public:

    /**
     * @element-type B
     */
    B *B_C;

    /**
     * @element-type A
     */
    A *A_C[ 2];

    B *B_C;
};

#endif // C_h

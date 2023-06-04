<h1>CPP</h1>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/782f4b07-df2b-49d2-ad17-55c46fca05ca" alt="alternatetext">
<h3>Features of C++</h3>
1.C++ is statically typed general purpose compiled programming langauge.<br>
2.It is nothing but C with extra features like classes.<br>
3.It is not pure oop langauge because it is also allow functional way of programming.
<h3>Simple C++ Program</h3>
<p>
 #include/<iostream/><br>
 using namespace std;
 <br>
 int main()
 <br>
 {
    <br>
    &nbsp&nbspstd::cout<<"Hello World!!<<std::endl;
    <br>
    return 0;
    <br>
 }
</p>

<p>
cin == console input
cout == console output
cin and cout both are the objects of the istream and ostream class respectively , these two class resides inside istream and ostream header files,<br>
and these header files are included to iostream header file.<br>
cin is used with stream extraction operator (>>).<br>
cout is used with stream insertion operator (<<).<br>
</p>

<p>
string str;<br>
std::getline(cin,str);<br>
std::cout<<str;<br>
</p>

<h3>Escape Sequence</h3>
<p>Escape seuqence is for formatting and restructuring string</p>
<h3>Reference Variable</h3>
<p>When a variable is declared as reference variable then it becomes an alternative mame for an pre-existing variable.</p>
<h3>Array</h3>
<h3>2D Array</h3>
<h3>Arithmetic Operator</h3>
<h3>Assignment Operator</h3>
<h3>Equality Operator</h3>
<h3>Relational Operator</h3>
<h3>Logical Operator</h3>
<h3>Bitwise Operator</h3>
<h3>Pre Increment & Decrement Operator</h3>
<h3>Post Increment & Decrement Operator</h3>
<h3>Conditional/Ternary Operator</h3> 
<h3>Sizeof Operator</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/6c354e20-88d3-4686-ad8b-c58ad67b14a1" alttext="pic">
<h3>Function Overloading</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/a6699090-e8c8-4a28-b885-2be10fdab9be" alttext="pic1">
<h3>Const Keyword Behaviour With Function Overloading In C++</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/76550a65-9265-4ce3-859e-7c469d4927b3" alttext="pic2">
<img src="https://github.com/sanskarram981/CPP/assets/71223200/adac853b-58e2-4aae-b69f-e08d5b449197">
<img src="https://github.com/sanskarram981/CPP/assets/71223200/d66a1776-e759-4294-9164-7ca5213d5b57">
<img src="https://github.com/sanskarram981/CPP/assets/71223200/502ad406-4dcd-4a02-bfed-4cd068e2691e">


<h3>Inline Functions</h3>
<h3>Constructors</h3>
<p>
 1. Deafault Constructor
 2. Parameterized Constructor
 3. Copy Constructor
</p>
<h3>Destructors</h3>
<h3>Initializer List</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/0e962ebc-9aee-4361-81c1-d8c8c9f629f0">
<h3>Static Data Member & Static Member Function</h3>
<p>
 1. The static variables are stored in the data segment of the memory. 
    The data segment is a part of the virtual address space of a program. 
    All the static variables that do not have an explicit initialization or are initialized to zero are stored in the 
    uninitialized data segment( also known as the BSS segment).
 2. Only static data memnbers are accesible by static member function. 
 3.the static members are only declared in the class declaration. 
   If we try to access the static data member without an explicit definition, the compiler will give an error. 
</p>
<h3>Const Data Member</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/152490a6-ce6e-47e8-8f28-8a95c91c8464">

<h3>Reference Data Member</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/7c2939c2-d884-440f-9405-a8d20699878c">

<h3>this pointer</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/2eeb2496-8a52-421b-9c24-3343c6acb416">
<p>this pointer can be used with non-static data member only.</p>
<h3>Friend Function & Friend Class</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/56ab4e70-c71e-407f-ad19-2753ef7c99f1">
<h3>Encapsulation</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/ab4e886e-fb00-4cef-baf0-06b2b34f35de">
<h3>Data Hiding</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/3d605ac6-f979-46c4-8994-8b419b2c1c2f">
<h3>Constant Member Function</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/f3e6b6ee-faff-41cd-ab4b-c35749f71ab2">
<h3>Structure</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/8195f4fc-1a5c-46be-a5da-04bfa3fa4f70">
<p>
 1. Class members are by default private whereas Structure Members are by default public.
 2.
 struct A
 {
 };
 
 struct B:public A
 {
 };
 --------------------------------
 class A
 {
 };
 
 class B:private A
 {
 };
</p>
<h3>Union</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/29a86a14-9039-4fe2-a9b6-66fe1ca83337">
<h3>Operator Overloading</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/14496d83-1250-4924-8d09-e9254cbbdd5a">
<img src="https://github.com/sanskarram981/CPP/assets/71223200/ed2976c8-295c-450d-9c76-12fb929b0d2c">
<h3>Unary Operator Overloading</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/a10d6ecf-11b0-4952-a9b7-f5bea8e22c40">
<h3>Array Subscript Operator Overloading</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/860237eb-a07c-41d7-b049-9f1e5b7ee159">
<h3>Overloading of Stream Insertion & Stream Extraction Operator</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/6a7741b4-0207-44de-b44c-e1af4272c87c">
<h3>Overloading of Assignment Operator</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/886effc9-7958-4230-8e64-851e6e301672">
<h3>Overloading typecast Operator</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/26cb823a-a0ca-4f5b-8032-d4658362894a">
<h3>Overloading new And delete Operator In C++</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/0b4578be-18e0-4adb-bb36-1cfc6b31af73">
<img src="https://github.com/sanskarram981/CPP/assets/71223200/12397218-5ce6-4e40-92cf-f2e52705fc7a">
<h3>Inheritance</h3>
<img src="https://github.com/sanskarram981/CPP/assets/71223200/ebf50739-7396-4701-b2dd-d05274d09eab">


















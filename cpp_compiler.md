_how does C++ program works_

PROGRAM EXEXUTION FLOW

SOURCE CODE (myfile.c or myfile.cpp)

PREPROCESSOR(remove comments, expands preprocessor directives(macro/ file inclusion))
(preprocessor generates expanded code -> myfile.i)

COMPILER (check program for syntex errors)(when no error is found, it converts the expanded code -> assembly code[myfile.s])

ASSEMBLER(assembly code -> object code [myfile.obj or myfile.o])

LINKER (converts object code into executable code [myfile.exe])

LOADER (loads the executable file into memory and executes it)

PROGRAM RUNNING

note--> \*object code (bytecode/ binary code/ machine-level code) understandable by computer

1. preprocessing (textual phase)\
   what happens?\
   #include -> header files are copied into source\
   #define -> macros expanded\
   #if/#ifdef -> conditional compilation\
   comments removed

key points->\
no type checking\
pure text substitution\
output: myfile.i

2. Compilation (source -> object file)\
   a) lexing (characters -> tokens(int, x, =, 5))\
   b) parsing (tokens -> syntax tree (AST) and grammar checking)\
   c) Semantic analysis (type checking, scope resolution)\
   d) IR generation and optimization (ast -> intermediate representation and compiler optimizations happen here)\
   e) code generation (IR -> machine code)\
   f) output : .o or .obj file (has machine code + unresolved symbols)

3. Object files (.o)\
   contain (machine code, symbol table, relocation info, not executable, can be linked)

4. Linking\
   what it does?\
   resolves symbola across object files\
   combines .o + libraries -> executable

- static linking\
  library code compiled into executable\
  bigger library\
  no runtime dependency

- dynamic linking\
  uses shared library(.so, .dll)\
  smaller executable\
  libraries loaded at runtime

5. Executable format\
   depends on OS: linux -> ELF, windows -> PE\
   contains: code, data, entry point, section metadata

6. Loader and Runtime\
   when you run the program:\
   OS loader loads executable into memory\
   maps sections(.text, .data, etc)\
   loads shared libraries\
   initializes runtime\
   calls main()\
   after main: destructors of global/static objects run, memory cleaned up

-----------------------MEMORY MODEL AND LAYOUT---------------------------

Typical process memory layout(top -> bottom)\
stack -> heap -> .bss, .data, .rodata, .text

1. stack: function calls, loacl variables, fast allocation/deallocation, automatically managed, cache friendly\
   problem: stack overflow if too deep

2. heap: dynamic memory(new, malloc), manual management, slower than stack\
   problems: memory leaks, fragmentation

.text(program instructions, read only, shared across processes)\
.rodata(constants(const, string literals), read only)\
.data(global/static initialized variables)\
int x = 10;\
static int y = 5;\
.bss (global/static uninitialized variables)\
zero initialized runtime\
int x;\
static int y;

STATIC VS DYNAMIC ALLOCATION\
static-> lifetime is entire program (eg. global, static)\
stack-> lifetime is function scope (eg. local variables)\
heap-> lifetime is until freed (eg. new, malloc)

Lifetime of variables:\
stack -> auto destroyed\
heap -> exists until delete/free\
static -> program lifetime

Dangling pointers: pointer pointing to freed or invalid memory\
int\* p = new int(5);\
delete p;\
p is now dangling\
fix: set pointer to nullptr, use smart pointers

MEMORY ALIGNMENT AND PADDING\
why? CPU accesses aligned memory faster\
effect--> compiler may add padding between struct members

CACHE FRIENDLINESS:\
CPUs load memory in cache lines\
sequential memory access is faster\
arrays faster than linked lists\
stack memory is cache friendly\
problem: pointer chasing is slow\

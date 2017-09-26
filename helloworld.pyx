def print_helloworld():
    print "hello world"

cdef class pyHello:
    cdef HelloClass *thisptr
    def __cinit__(self):
        list = ["Zongliang","Hayoung","Sandilya","Renato","Scott","Xiao-Yi",]
        self.thisptr = new HelloClass(list)
    def __dealloc__(self):
        del self.thisptr
    def get_print(self):
        self.thisptr.get_print()


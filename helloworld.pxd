from libcpp.vector cimport vector
from libcpp.string cimport string
from cpython cimport array
import numpy as np

# cimport numpy as np

cdef extern from "hello.h":
    cdef cppclass HelloClass:
        HelloClass(vector[string]&) except +
        void get_print()
        

from distutils.core import setup, Extension
from Cython.Build import cythonize
import numpy as np

sources = [
    'hello.cpp',
    'helloworld.pyx'
]

setup(
    ext_modules = cythonize(Extension(
        "helloworld", sources=sources,
        language="c++", extra_compile_args=['-std=c++11'],
        include_dirs=[np.get_include()]
    )),
)
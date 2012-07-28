from distutils.core import setup, Extension
import platform 
osname = platform.system()

if osname == "Windows":
    shared_libs = ["version"]
else:
    shared_libs = []

module1 = Extension('pype',
                    sources = ['pype.cpp'],
                    #define_macros = [('WIN32',None),
                    #                 ("_CRT_SECURE_NO_DEPRECATE",None),
                    #                 ("_CRT_NONSTDC_NO_DEPRECATE",None)],
                    #library_dirs=[r'c:\Program Files\Microsoft SDKs\Windows\v6.0A\Lib',
                    #              "../build"],
                    #library_dirs = ["../build"],
                    libraries = shared_libs,
                    extra_objects = ["../build/lib/libpe.a"],
                    #extra_compile_args=["/MT", "/W3", "/Od", "/Oy", "/Zi"],
                    #extra_link_args=["/nologo",
                    #                 "/debug",
                    #                 "/incremental:no",
                    #                 "/opt:ref",
                    #                ]
)
setup ( name = 'pype',
        version = '0.3.2',
        description = 'Python module wrapping libpe',
        ext_modules = [module1])
